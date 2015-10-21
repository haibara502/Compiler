%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *INPUT, *OUTPUT;
%}

%union
{
	struct self_type
	{
		YYSTYPE *left, *right;
		int value;
		char symbol[20];	
		char content[20];
		int line;
	} MYTYPE;
}

%type <YYSTYPE> START
%type <YYSTYPE> PROGRAM //Start token
%type <YYSTYPE> EXTDEFS //Segements
%type <YYSTYPE> EXTDEF //Segement
%type <YYSTYPE> SPEC //Definition
%type <YYSTYPE> STSPEC //Struct
%type <YYSTYPE> OPTTAG //ID for struct when defining
%type <YYSTYPE> VAR //Variable
%type <YYSTYPE> FUNC //Function
%type <YYSTYPE> PARAS //Parameters in function
%type <YYSTYPE> PARA //A parameter in function
%type <YYSTYPE> STMTBLOCK //Block
%type <YYSTYPE> STMT //A statement
%type <YYSTYPE> ESTMT //Else statement
%type <YYSTYPE> DEFS //Defines
%type <YYSTYPE> DEF //A define
%type <YYSTYPE> DECS //one of definitions in a define
%type <YYSTYPE> DEC //A definition
%type <YYSTYPE> EXP //Expression
%type <YYSTYPE> ARRS //Unknown
%type <YYSTYPE> ARGS //Expressions connected by commas

%token <YYSTYPE> INT
%token <YYSTYPE> ID
%token <YYSTYPE> SEMI
%token <YYSTYPE> COMMA
%token <YYSTYPE> DOT
%token <YYSTYPE> BINARYOP
%token <YYSTYPE> UNARYOP
%token <YYSTYPE> ASSIGNOP
%token <YYSTYPE> EQUALOP
%token <YYSTYPE> TYPE
%token <YYSTYPE> LP
%token <YYSTYPE> RP
%token <YYSTYPE> LB
%token <YYSTYPE> RB
%token <YYSTYPE> LC
%token <YYSTYPE> RC
%token <YYSTYPE> STRUCT
%token <YYSTYPE> RETURN
%token <YYSTYPE> IF
%token <YYSTYPE> ELSE
%token <YYSTYPE> BREAK
%token <YYSTYPE> CONT
%token <YYSTYPE> FOR

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

void init(union YYSTYPE now, char* s, int number, union YYSTYPE *s1, union YYSTYPE *s2, union YYSTYPE *s3, union YYSTYPE *s4, union YYSTYPE *s5, union YYSTYPE *s6, union YYSTYPE *s7, union YYSTYPE *s8, union YYSTYPE *s9)
{
	sprintf(now -> MYTYPE.symbol, "%s", s);
	now -> MYTYPE.left = now -> MYTYPE.right = NULL;
	if (number == 0)
	{
		now -> MYTYPE.content[0] = 0;
		return;
	}
	switch (number)
	{
		case 9: s8 -> MYTYPE.right = s9;
		case 8: s7 -> MYTYPE.right = s8;
		case 7: s6 -> MYTYPE.right = s7;
		case 6: s5 -> MYTYPE.right = s6;
		case 5: s4 -> MYTYPE.right = s5;
		case 4: s3 -> MYTYPE.right = s4;
		case 3: s2 -> MYTYPE.right = s3;
		case 2: s1 -> MYTYPE.right = s2;
		case 1: now -> MYTYPE.left = s1;
	}
}

void print_tree(union YYSTYPE *node, int depth)
{
	int i = 0;
	for (; i < depth * 2; ++i)
		fprintf(OUTPUT, "-");
	fprintf(OUTPUT, "[%s : %s]\n", node -> MYTYPE.symbol, node -> MYTYPE.content);
	if (node -> MYTYPE.left != NULL)
		print_tree(node -> MYTYPE.left, depth + 1);
	if (node -> MYTYPE.right != NULL)
		print_tree(node -> MYTYPE.right, depth);
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
