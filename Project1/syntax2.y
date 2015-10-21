%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
%}

/*
%token PROGRAM //Start token
%token EXTDEFS //Segements
%token EXTDEF //Segement
%token EXTVARS //Variables
%token SPEC //Definition
%token STSPEC //Struct
%token OPTTAG //ID for struct when defining
%token VAR //Variable
%token FUNC //Function
%token PARAS //Parameters in function
%token PARA //A parameter in function
%token STMTBLOCK //Block
%token STMTS //Statements
%token STMT //A statement
%token ESTMT //Else statement
%token DEFS //Defines
%token DEF //A define
%token DECS //one of definitions in a define
%token DEC //A definition
%token INIT //Value when define a new variable
%token EXP //Expression
%token ARRS //Unknown
%token ARGS //Expressions connected by commas
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
%%

PROGRAM : EXTDEFS /*Start the parser by expanding the program*/
		;

EXTDEFS : EXTDEFS EXTDEF /*e.g: int i = 1; */ 
		| EXTDEFS STMTS /*e.g: i = j + 1; */
		| /* empty */
		;
		
EXTDEF	: SPEC DECS SEMI /*e.g: int i, j; struct Poi{int i, j;}point;*/
		| SPEC FUNC STMTBLOCK /*e.g: int calc(){}*/
		| error SEMI {yyerror(); yyerrok;}
		;
		
SPEC 	: TYPE /*e.g: int */
		| STSPEC /*e.g: struct Poi{int i, j;} */
		;
		
STSPEC	: STRUCT OPTTAG LC DEFS RC /*e.g: struct Poi{int i, j;} */
		| STRUCT ID /*e.g: struct Poi */
		;
		
OPTTAG	: ID /*e.g: Poi */
		| /* empty */
		;
		
VAR		: ID /*e.g: i */
		| VAR LB INT RB /*e.g: a[100] */
		| error RB
		;
		
FUNC	: ID LP PARAS RP /*e.g: calc(int i, int j) */
		| error RP
		;
		
PARAS	: PARAS COMMA PARA /*e.g: int i, int j */
		| PARA
		| /* empty */
		;
		
PARA	: SPEC DEC /*e.g: int i = 1 */
		;
		
STMTBLOCK	: LC DEFS STMTS RC /*e.g: {int i; int j; i = 1; j = 1;} */
			| error RC
			;
			
STMTS	: STMTS STMT /* i = 1; j = 1; */
		| /* empty */
		;
		
STMT	: EXP SEMI /*e.g: i = 1; */
		| STMTBLOCK
		| RETURN EXP SEMI /*e.g: return fa[i] = i; */
		| IF LP EXP RP STMT ESTMT /*e.g: if (i == 1) j = 1; else j = 2; */
		| FOR LP EXP SEMI EXP SEMI EXP RP STMT /*e.g: for (int i = 0; i < N; ++i){} */
		| CONT SEMI /*e.g: continue; */
		| BREAK SEMI /*e.g: break; */
		| error SEMI
		;
		
ESTMT	: ELSE STMT /* else i = 1; */ 
		| /* empty */ %prec LOW
		;
		
DEFS	: DEFS DEF /* int i; int j; */
		|
		;
		
DEF		: SPEC DECS SEMI /* int i = 1, j = 1, k; */
		| error SEMI
		;
		
DECS	: DECS COMMA DEC /* i = 1, j = 1, k */
		| DEC /* i = 1 */
		;
		
DEC		: VAR /*e.g: a[10] */
		| ID EQUALOP EXP /*e.g: i = 1 */ 
		;
		
EXP		: EXP BINARYOP EXP /*e.g: 123 != 234 */
		| UNARYOP EXP /*e.g: - iterater.first */
		| LP EXP RP /*e.g: (123) */
		| ID LP ARGS RP /*e.g: calc(b.value, c.value) */
		| ID ARRS /*e.g: a[100][100] */
		| EXP DOT ID ARRS /*e.g: iterater.first */
		| INT /*e.g: 123 */
		| EXP ASSIGNOP EXP /*e.g: i += 1 */
		| EXP EQUALOP EXP /*e.g: i = 1 */
		| /* empty */
		;
		
ARRS	: ARRS LB EXP RB /*e.g: [(a.value)][(b.value)] */ 
		| /* empty */
		| error RB
		;
		
ARGS	: ARGS COMMA EXP /*e.g: a.cost, b.cost */
		| EXP /*e.g: a.cost */
		;
%%

#include "lex.yy.c"

void yyerror(char *s)
{
	fprintf(stderr, "[line %d]: %s\n", yylval, s);
	switch (yychar)
	{
		case INT:
			fprintf(stderr, "Error from integer.\n");
			break;
		case ID:
			fprintf(stderr, "Error from ID.\n");
			break;
		case SEMI:
		case COMMA:
		case DOT:
		case LP:
		case RP:
		case LB:
		case RB:
		case LC:
		case RC:
		case STRUCT:
		case RETURN:
		case IF:
		case ELSE:
		case BREAK:
		case CONT:
		case FOR:
			fprintf(stderr, "Error from %s.\n", yychar);
			break;
		case BINARYOP:
		case UNARYOP:
		case ASSIGNOP:
		case EQUALOP:
		case TYPE:
			fprintf(stderr, "Error from %s.\n", yychar);
			break;
	}
}
