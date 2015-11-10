%{
#include "require.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *INPUT, *OUTPUT;
%}
/*
%type START
%type PROGRAM //Start token
%type EXTDEFS //Segements
%type EXTDEF //Segement
%type SPEC //Definition
%type STSPEC //Struct
%type OPTTAG //ID for struct when defining
%type VAR //Variable
%type FUNC //Function
%type PARAS //Parameters in function
%type PARA //A parameter in function
%type STMTBLOCK //Block
%type STMT //A statement
%type ESTMT //Else statement
%type DEFS //Defines
%type DEF //A define
%type DECS //one of definitions in a define
%type DEC //A definition
%type EXP //Expression
%type ARRS //Unknown
%type ARGS //Expressions connected by commas
*/
%token INT
%token ID
%token SEMI
%token COMMA
%token DOT
%token BINARYOP
%token UNARYOP
%token ASSIGNOP
%token EQUALOP
%token TYPE
%token LP
%token RP
%token LB
%token RB
%token LC
%token RC
%token STRUCT
%token RETURN
%token IF
%token ELSE
%token BREAK
%token CONT
%token FOR

%right LOW ELSE
%right LOW_THAN_ERROR error TYPE STRUCT INT ID UNARYOP LC RETURN FOR CONT BREAK IF LP DOT BINARYOP ASSIGNOP EQUALOP HIGH_THAN_ERROR
%%

START 	: PROGRAM {extern init($$, "START", 1, $1); extern print_tree($$.left, 0);}
		;
		
PROGRAM : EXTDEFS {init($$, "PROGRAM", 1, $1);} /*Start the parser by expanding the program*/
		;

EXTDEFS : EXTDEFS EXTDEF {init($$, "EXTDEFS", 2, $1, $2);}/*e.g: int i = 1; */ 
		| EXTDEFS STMT {init($$, "EXTDEFS", 2, $1, $2);}/*e.g: i = j + 1; */ %prec LOW_THAN_ERROR
		| {init($$, "EXTDEFS", 0);}/* empty */ %prec HIGH_THAN_ERROR
		| error SEMI {}
		;
		
EXTDEF	: SPEC DECS SEMI {init($$, "EXTDEF", 3, $1, $2, $3);}/*e.g: int i, j; struct Poi{int i, j;}point;*/
		| SPEC FUNC STMTBLOCK {init($$, "EXTDEF", 3, $1, $2, $3);}/*e.g: int calc(){}*/
		;
		
SPEC 	: TYPE {init($$, "SPEC", 1, $1);}/*e.g: int */
		| STSPEC {init($$, "SPEC", 1, $1);}/*e.g: struct Poi{int i, j;} */
		;
		
STSPEC	: STRUCT OPTTAG LC DEFS RC {init($$, "STSPEC", 5, $1, $2, $3, $4, $5);}/*e.g: struct Poi{int i, j;} */
		| STRUCT ID {init($$, "STSPEC", 2, $1, $2);}/*e.g: struct Poi */
		;
		
OPTTAG	: ID {init($$, "OPTTAG", 1, $1);}/*e.g: Poi */
		| {init($$, "OPTTAG", 0);}/* empty */
		;
		
VAR		: ID ID {init($$, "VAR", 1, $1);}/*e.g: i */
		| VAR LB INT RB {init($$, "VAR", 4, $1, $2, $3, $4);}/*e.g: a[100] */
		| error RB {}
		;
		
FUNC	: ID LP PARAS RP {init($$, "FUNC", 4, $1, $2, $3, $4);}/*e.g: calc(int i, int j) */
		| error RP {}
		;
		
PARAS	: PARAS COMMA PARA {init($$, "PARAS", 3, $1, $2, $3);}/*e.g: int i, int j */
		| PARA {init($$, "PARAS", 1, $1);}
		| {init($$, "PARAS", 0);}/* empty */
		;
		
PARA	: SPEC DEC {init($$, "PARA", 2, $1, $2);}/*e.g: int i = 1 */
		;
		
STMTBLOCK	: LC EXTDEFS RC {init($$, "STMTBLOCK", 3, $1, $2, $3);}/*e.g: {int i; int j; i = 1; j = 1;} */
			| error RC {}
			;
		
STMT	: EXP SEMI {init($$, "STMT", 2, $1, $2);}/*e.g: i = 1; */
		| STMTBLOCK {init($$, "STMT", 1, $1);}
		| RETURN EXP SEMI {init($$, "STMT", 3, $1, $2, $3);}/*e.g: return fa[i] = i; */
		| IF LP EXP RP STMT ESTMT {init($$, "STMT", 6, $1, $2, $3, $4, $5, $6);}/*e.g: if (i == 1) j = 1; else j = 2; */
		| FOR LP EXP SEMI EXP SEMI EXP RP STMT {init($$, "STMT", 9, $1, $2, $3, $4, $5, $6, $7, $8, $9);}/*e.g: for (int i = 0; i < N; ++i){} */
		| CONT SEMI {init($$, "STMT", 2, $1, $2);}/*e.g: continue; */
		| BREAK SEMI {init($$, "STMT", 2, $1, $2);}/*e.g: break; */
		;
		
ESTMT	: ELSE STMT {init($$, "ESTMT", 2, $1, $2);}/* else i = 1; */ 
		| {init($$, "ESTMT", 0);}/* empty */ %prec LOW
		;
		
DEFS	: DEFS DEF {init($$, "DEFS", 2, $1, $2);}/* int i; int j; */
		| {init($$, "DEFS", 0);}
		;
		
DEF		: SPEC DECS SEMI {init($$, "DEF", 3, $1, $2, $3);}/* int i = 1, j = 1, k; */
		| error SEMI {}
		;
		
DECS	: DECS COMMA DEC {init($$, "DECS", 3, $1, $2, $3);}/* i = 1, j = 1, k */
		| DEC {init($$, "DECS", 1, $1);}/* i = 1 */
		;
		
DEC		: VAR {init($$, "DEC", 1, $1);}/*e.g: a[10] */
		| ID EQUALOP EXP {init($$, "DEC", 3, $1, $2, $3);}/*e.g: i = 1 */ 
		;
		
EXP		: EXP BINARYOP EXP {init($$, "EXP", 3, $1, $2, $3);}/*e.g: 123 != 234 */
		| UNARYOP EXP {init($$, "EXP", 2, $1, $2);}/*e.g: - iterater.first */
		| LP EXP RP {init($$, "EXP", 3, $1, $2, $3);}/*e.g: (123) */
		| ID LP ARGS RP {init($$, "EXP", 4, $1, $2, $3, $4);}/*e.g: calc(b.value, c.value) */
		| ID ARRS {init($$, "EXP", 2, $1, $2);}/*e.g: a[100][100] */
		| EXP DOT ID ARRS {init($$, "EXP", 4, $1, $2, $3, $4);}/*e.g: iterater.first */
		| INT {init($$, "EXP", 1, $1);}/*e.g: 123 */
		| EXP ASSIGNOP EXP {init($$, "EXP", 3, $1, $2, $3);}/*e.g: i += 1 */
		| EXP EQUALOP EXP {init($$, "EXP", 3, $1, $2, $3);}/*e.g: i = 1 */
		| {init($$, "EXP", 0);}/* empty */
		;
		
ARRS	: ARRS LB EXP RB {init($$, "ARRS", 4, $1, $2, $3, $4);}/*e.g: [(a.value)][(b.value)] */ 
		| {init($$, "ARRS", 0);}/* empty */
		;
		
ARGS	: ARGS COMMA EXP {init($$, "ARGS", 3, $1, $2, $3);} /*e.g: a.cost, b.cost */
		| EXP {init($$, "ARGS", 1, $1);} /*e.g: a.cost */
		;
%%

#include "lex.yy.c"

void init(<MYTYPE> now, char* s, int number, s1, s2, s3, s4, s5, s6, s7, s8, s9)
{
	sprintf(now.symbol, "%s", s);
	if (number == 0)
	{
		now.content[0] = 0;
		return;
	}
	switch (number)
	{
		case 9: s8.right = s9;
		case 8: s7.right = s8;
		case 7: s6.right = s7;
		case 6: s5.right = s6;
		case 5: s4.right = s5;
		case 4: s3.right = s4;
		case 3: s2.right = s3;
		case 2: s1.right = s2;
		case 1: now.left = s1;
	}
}

void print_tree(<MYTYPE> node, int depth)
{
	int i = 0;
	for (; i < depth * 2; ++i)
		fprintf(OUTPUT, "-");
	fprintf(OUTPUT, "[%s : %s]\n", node.symbol, node.content);
	if (node.left != NULL)
		print_tree(node.left, depth + 1);
	if (node.right != NULL)
		print_tree(node.right, depth);
}

void yyerror(char *s)
{
	fprintf(stderr, "[line %d]: %s\n", yylval.MYTYPE.line, s);
	switch (yychar)
	{
		case INT:
			fprintf(stderr, "Error from integer.\n");
			break;
		case ID:
			fprintf(stderr, "Error from ID.\n");
			break;
		case SEMI:		case COMMA:		case DOT:		case LP:		case RP:		case LB:		case RB:		case LC:	caseRC:		case STRUCT:		case RETURN:		case IF:		case ELSE:		case BREAK:		case CONT:		case FOR:
			fprintf(stderr, "Error from %s.\n", yychar);
			break;
		case BINARYOP:		case UNARYOP:		case ASSIGNOP:		case EQUALOP:		case TYPE:
			fprintf(stderr, "Error from %s.\n", yychar);
			break;
	}
}

void main(int argc, char* argv[])
{
	INPUT = fopen(argv[1], "r");
	OUTPUT = fopen(argv[2], "w");
	yyparse();
}
