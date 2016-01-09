%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "require.h"
FILE *INPUT, *OUTPUT;
extern FILE * yyin;
extern FILE * yyout;
struct SelfType *first;
#define YYDEBUG 0
%}
%union
{
	struct SelfType* MYTYPE;
}

%type <MYTYPE>  PROGRAM //Start token
%type <MYTYPE>  EXTDEFS //Segements
%type <MYTYPE>  EXTDEF //Segement
%type <MYTYPE>  SPEC //Definition
%type <MYTYPE>  STSPEC //Struct
%type <MYTYPE>  OPTTAG //ID for struct when defining
%type <MYTYPE>  VAR //Variable
%type <MYTYPE>  FUNC //Function
%type <MYTYPE>  PARAS //Parameters in function
%type <MYTYPE>  PARA //A parameter in function
%type <MYTYPE>  STMTBLOCK //Block
%type <MYTYPE>  STMT //A statement
%type <MYTYPE>  ESTMT //Else statement
%type <MYTYPE>  DEFS //Defines
%type <MYTYPE>  DEF //A define
%type <MYTYPE>  DECS //one of definitions in a define
%type <MYTYPE>  DEC //A definition
%type <MYTYPE>  EXP //Expression
%type <MYTYPE>  ARRS //Unknown
%type <MYTYPE>  ARGS //Expressions connected by commas

%token <MYTYPE> INT
%token <MYTYPE> ID
%token <MYTYPE> SEMI
%token <MYTYPE> COMMA
%token <MYTYPE> DOT
%token <MYTYPE> BINARYOP
%token <MYTYPE> UNARYOP
%token <MYTYPE> ASSIGNOP
%token <MYTYPE> EQUALOP
%token <MYTYPE> TYPE
%token <MYTYPE> LP
%token <MYTYPE> RP
%token <MYTYPE> LB
%token <MYTYPE> RB
%token <MYTYPE> LC
%token <MYTYPE> RC
%token <MYTYPE> STRUCT
%token <MYTYPE> RETURN
%token <MYTYPE> IF
%token <MYTYPE> ELSE
%token <MYTYPE> BREAK
%token <MYTYPE> CONT
%token <MYTYPE> FOR

%right LOW ELSE
%right LOW_THAN_ERROR error TYPE STRUCT INT ID UNARYOP LC RETURN FOR CONT BREAK IF LP DOT BINARYOP ASSIGNOP EQUALOP HIGH_THAN_ERROR
%%

PROGRAM : EXTDEFS { pack1(&($$), "PROGRAM", &($1)); (*first) = (*$$);} /*Start the parser by expanding the program*/
		;

EXTDEFS : EXTDEFS EXTDEF { pack2(&($$), "EXTDEFS", &($1), &($2)); }/*e.g: int i = 1; */ 
		| EXTDEFS STMT { pack2(&($$), "EXTDEFS", &($1), &($2)); }/*e.g: i = j + 1; */ %prec LOW_THAN_ERROR
		| { init(&($$), "", NULL);}/* empty */ %prec HIGH_THAN_ERROR
		| error SEMI {yyerror("Error occurs!");}
		;
		
EXTDEF	: SPEC DECS SEMI { pack3(&($$), "EXTDEF", &($1), &($2), &($3));}/*e.g: int i, j; struct Poi{int i, j;}point;*/
		| SPEC FUNC STMTBLOCK { pack3(&($$), "EXTDEF", &($1), &($2), &($3));}/*e.g: int calc(){}*/
		| SPEC SEMI {pack2(&($$), "EXTDEF", &($1), &($2));}
		;
		
SPEC 	: TYPE { pack1(&($$), "SPEC", &($1)); }/*e.g: int */
		| STSPEC { pack1(&($$), "SPEC", &($1)); }/*e.g: struct Poi{int i, j;} */
		;
		
STSPEC	: STRUCT OPTTAG LC DEFS RC { pack5(&($$), "STSPEC", &($1), &($2), &($3), &($4), &($5));}/*e.g: struct Poi{int i, j;} */
		| STRUCT ID { pack2(&($$), "STSPEC", &($1), &($2)); }/*e.g: struct Poi */
		;
		
OPTTAG	: ID { pack1(&($$), "OPTTAG", &($1));}/*e.g: Poi */
		| {	init(&($$), "", NULL);}/* empty */
		;
		
VAR		: ID { pack1(&($$), "VAR", &($1)); }/*e.g: i */
		| VAR LB INT RB {pack4(&($$), "VAR", &($1), &($2), &($3), &($4));}/*e.g: a[100] */
		| error RB {yyerror("Error occurs!");}
		;
		
FUNC	: ID LP PARAS RP { pack4(&($$), "FUNC", &($1), &($2), &($3), &($4));}/*e.g: calc(int i, int j) */
		| error RP {yyerror("Error occurs!");}
		;
		
PARAS	: PARAS COMMA PARA { pack3(&($$), "PARAS", &($1), &($2), &($3));}/*e.g: int i, int j */
		| PARA { pack1(&($$), "PARAS", &($1));}
		| {	init(&($$), "", NULL);}/* empty */
		;
		
PARA	: SPEC DEC { pack2(&($$), "PARA", &($1), &($2)); }/*e.g: int i = 1 */
		;
		
STMTBLOCK	: LC EXTDEFS RC {pack3(&($$), "STMTBLOCK", &($1), &($2), &($3));}/*e.g: {int i; int j; i = 1; j = 1;} */
			| error RC {yyerror("Error occurs!");}
			;
		
STMT	: EXP SEMI {pack2(&($$), "STMT", &($1), &($2));}/*e.g: i = 1; */
		| STMTBLOCK { pack1(&($$), "STMT", &($1));	}
		| RETURN EXP SEMI {	pack3(&($$), "STMT", &($1), &($2), &($3));}/*e.g: return fa[i] = i; */
		| IF LP EXP RP STMT ESTMT {	pack6(&($$), "STMT", &($1), &($2), &($3), &($4), &($5), &($6));}/*e.g: if (i == 1) j = 1; else j = 2; */
		| FOR LP EXP SEMI EXP SEMI EXP RP STMT {pack9(&($$), "STMT", &($1), &($2), &($3), &($4), &($5), &($6), &($7), &($8), &($9));}/*e.g: for (int i = 0; i < N; ++i){} */
		| CONT SEMI {pack2(&($$), "STMT", &($1), &($2));}/*e.g: continue; */
		| BREAK SEMI {pack2(&($$), "STMT", &($1), &($2));}/*e.g: break; */
		;
		
ESTMT	: ELSE STMT { pack2(&($$), "ESTMT", &($1), &($2));}/* else i = 1; */ 
		| {	init(&($$), "", NULL);}/* empty */ %prec LOW
		;
		
DEFS	: DEFS DEF { pack2(&($$), "DEFS", &($1), &($2));}/* int i; int j; */
		| {	init(&($$), "", NULL);}
		;
		
DEF		: SPEC DECS SEMI { pack3(&($$), "DEF", &($1), &($2), &($3));}/* int i = 1, j = 1, k; */
		| error SEMI {yyerror("Error occurs!");}
		;
		
DECS	: DECS COMMA DEC { pack3(&($$), "DECS", &($1), &($2), &($3));}/* i = 1, j = 1, k */
		| DEC  { pack1(&($$), "DECS", &($1));}/* i = 1 */
		;
		
DEC		: VAR {	pack1(&($$), "DEC", &($1));}/*e.g: a[10] */
		| VAR EQUALOP EXP {pack3(&($$), "DEC", &($1), &($2), &($3));}
		| VAR EQUALOP LC ARGS RC {pack5(&($$), "EXP", &($1), &($2), &($3), &($4), &($5));}
		;
		
EXP		: EXP BINARYOP EXP { pack3(&($$), "EXP", &($1), &($2), &($3));}/*e.g: 123 != 234 */
		| UNARYOP EXP { pack2(&($$), "EXP", &($1), &($2)); }/*e.g: - iterater.first */
		| LP EXP RP {pack3(&($$), "EXP", &($1), &($2), &($3));}/*e.g: (123) */
		| ID LP ARGS RP { pack4(&($$), "EXP", &($1), &($2), &($3), &($4));}/*e.g: calc(b.value, c.value) */
		| ID ARRS {	pack2(&($$), "EXP", &($1), &($2));}/*e.g: a[100][100] */
		| EXP DOT ID ARRS {	pack4(&($$), "EXP", &($1), &($2), &($3), &($4));}/*e.g: iterater.first */
		| INT  { pack1(&($$), "EXP", &($1));}/*e.g: 123 */
		| EXP ASSIGNOP EXP { pack3(&($$), "EXP", &($1), &($2), &($3));}/*e.g: i += 1 */
		| EXP EQUALOP EXP {	pack3(&($$), "EXP", &($1), &($2), &($3));}/*e.g: i = 1 */
		| {	init(&($$), "", NULL);}/* empty */
		;
		
ARRS	: ARRS LB EXP RB {pack4(&($$), "ARRS", &($1), &($2), &($3), &($4));}/*e.g: [(a.value)][(b.value)] */ 
		| {init(&($$), "", NULL);}/* empty */
		;
		
ARGS	: ARGS COMMA EXP {pack3(&($$), "ARGS", &($1), &($2), &($3));} /*e.g: a.cost, b.cost */
		| EXP {	pack1(&($$), "ARGS", &($1));} /*e.g: a.cost */
		;
%%

void init(struct SelfType **now, char* s, struct SelfType **s1)
{
	(*now) = (struct SelfType *) malloc(1 * sizeof(struct SelfType));
	sprintf((*now) -> token, "%s", s);
	sprintf((*now) -> content, "%s", s);
	if (s1 != NULL)
		(*now) -> left = *s1;
}

void Pack(struct SelfType ***All, int number)
{
	int i = 0;
	for (i = 0; i < number - 1; ++i)
		(*All[i]) -> right = *All[i + 1];
}

void pack1(struct SelfType **now, char* s, struct SelfType **son1)
{
	init(now, s, son1);
}

void pack2(struct SelfType **now, char* s, struct SelfType **son1, struct SelfType **son2)
{
	init(now, s, son1);
	struct SelfType ***All = (struct SelfType ***) malloc(2 * sizeof(struct SelfType**));
	All[0] = son1, All[1] = son2;
	Pack(All, 2);
}

void pack3(struct SelfType **now, char* s, struct SelfType **son1, struct SelfType **son2, struct SelfType **son3)
{
	init(now, s, son1);
	struct SelfType ***All = (struct SelfType ***) malloc(3 * sizeof(struct SelfType**));
	All[0] = son1, All[1] = son2, All[2] = son3;
	Pack(All, 3);
}

void pack4(struct SelfType **now, char* s, struct SelfType **son1, struct SelfType **son2, struct SelfType **son3, struct SelfType **son4)
{
	init(now, s, son1);
	struct SelfType ***All = (struct SelfType ***) malloc(4 * sizeof(struct SelfType**));
	All[0] = son1, All[1] = son2, All[2] = son3, All[3] = son4;
	Pack(All, 4);
}

void pack5(struct SelfType **now, char* s, struct SelfType **son1, struct SelfType **son2, struct SelfType **son3, struct SelfType **son4, struct SelfType **son5)
{
	init(now, s, son1);
	struct SelfType ***All = (struct SelfType ***) malloc(5 * sizeof(struct SelfType**));
	All[0] = son1, All[1] = son2, All[2] = son3, All[3] = son4, All[4] = son5;
	Pack(All, 5);
}

void pack6 (struct SelfType **now, char* s, struct SelfType **son1, struct SelfType **son2, struct SelfType **son3, struct SelfType **son4, struct SelfType **son5, struct SelfType **son6)
{
	init(now, s, son1);
	struct SelfType ***All = (struct SelfType ***) malloc(6 * sizeof(struct SelfType**));
	All[0] = son1, All[1] = son2, All[2] = son3, All[3] = son4, All[4] = son5, All[5] = son6;
	Pack(All, 6);
}

void pack9(struct SelfType **now, char* s, struct SelfType **son1, struct SelfType **son2, struct SelfType **son3, struct SelfType **son4, struct SelfType **son5, struct SelfType **son6, struct SelfType **son7, struct SelfType **son8, struct SelfType **son9)
{
	init(now, s, son1);
	struct SelfType ***All = (struct SelfType ***) malloc(9 * sizeof(struct SelfType**));
	All[0] = son1, All[1] = son2, All[2] = son3, All[3] = son4, All[4] = son5, All[5] = son6, All[6] = son7, All[7] = son8, All[8] = son9;
	Pack(All, 9);
}
void print_tree(struct SelfType *node, int depth)
{
	if (strlen(node -> content) != 0)
	{
		int i = 0;
		for (; i < depth * 2; ++i)
			fprintf(OUTPUT, "-");
		fprintf(OUTPUT, "[%s %s]\n", node -> token, node -> content);
	}
	if (node -> left != NULL)
		print_tree((struct SelfType*) node -> left, depth + 1);
	if (node -> right != NULL)
		print_tree((struct SelfType*) node -> right, depth);
}

void yyerror (char const *s)
{
	fprintf (stderr, "%s\n", s);
}

void main(int argc, char* argv[])
{
	#if YYDEBUG
        yydebug = 1;
    #endif
	INPUT = fopen(argv[1], "r");
	OUTPUT = fopen(argv[2], "w");		
	yyin = INPUT;
	first = (struct SelfType *) malloc(1 * sizeof(struct SelfType));
	yyparse();
	print_tree(first, 0);
	fclose(OUTPUT);
}
