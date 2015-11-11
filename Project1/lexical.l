%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "require.h"
#include "y.tab.h"
int line = 0;
%}

DIGIT ([0-9])
LESDIGIT ([0-7])
LESPOSDIGIT ([1-7])
POSDIGIT ([1-9])
MOREDIGIT ([0-9A-F])
MOREPOSDIGIT ([1-9A-F])
ALPHA ([a-zA-Z])
INT10 ({POSDIGIT}{DIGIT}*)
INT8 (0{LESPOSDIGIT}{LESDIGIT}*)
INT16 ((0x|0X){MOREPOSDIGIT}{MOREDIGIT}*)
INT (0|((-?)({INT10}|{INT8}|{INT16})))
ID (({ALPHA}|_)+({DIGIT}|{ALPHA}|_)*)
SEMI ";"
COMMA ","
DOT "."
BOOLBINARY (">"|">"=|"<"|"<"=|==|!=|"||"|&&)
ADDBINARY "*"|"/"|"%"|"+"|"-"|"<<"|">>"|&|"^"|"|"
BINARYOP ({BOOLBINARY}|{ADDBINARY})
UNARYOP ("-"|!|"++"|"--"|~)
ASSIGNOP ({ADDBINARY}=)
EQUALOP (=)
TYPE "int"
LP "("
RP ")"
LB "["
RB "]"
LC "{"
RC "}"
STRUCT "struct"
RETURN "return"
IF "if"
ELSE "else"
BREAK "break"
CONT "continue"
FOR "for"
%%

[ \t] ;

[\n] {
	++line;
}

{INT} {
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	printf("INT %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "INT");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;
	return INT;
}

{STRUCT} {
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	printf("STRUCT %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "STRUCT");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;
	return STRUCT;
}

{RETURN} {	
	printf("RETURN %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "RETURN");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;
	return RETURN;
}

{IF} {	
	printf("IF %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "IF");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;
	return IF;
}

{ELSE} {	
	printf("ELSE %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "ELSE");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;
	return ELSE;
}

{BREAK} {	
	printf("BREAK %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "BREAK");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;
	return BREAK;
}

{CONT} {	
	printf("CONT %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "CONT");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;
	return CONT;
}

{FOR} {	
	printf("FOR %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "FOR");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;
	return FOR;
}

{LP} {	
	printf("LP %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "LP");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;
	return LP;
}

{RP} {	
	printf("RP %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "RP");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;
	return RP;
}

{LB} {	
	printf("LB %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "LB");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;
	return LB;
}

{RB} {	
	printf("RB %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "RB");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;
	return RB;
}

{LC} {	
	printf("LC %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "LC");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;
	return LC;
}

{RC} {	
	printf("RC %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "RC");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;
	return RC;
}


{TYPE} {	
	printf("TYPE %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "TYPE");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;
	return TYPE;
}

{ID} {	
	printf("ID %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "ID");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;

	return ID;
}
	
{SEMI} {	
	printf("SEMI %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "SEMI");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;

	return SEMI;
}

{COMMA} {	
	printf("COMMA %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "COMMA");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;

	return COMMA;
}

{DOT} {	
	printf("DOT %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "DOT");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;

	return DOT;
}

{BINARYOP} {	
	printf("BINARYOP %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "BINARYOP");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;

	return BINARYOP;
}

{UNARYOP} {	
	printf("UNARYOP %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "UNARYOP");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;

	return UNARYOP;
}

{ASSIGNOP} {	
	printf("ASSIGNOP %s\n", yytext);
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "ASSIGNOP");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;

	return ASSIGNOP;
}

{EQUALOP} {
	yylval.MYTYPE = (struct SelfType*) malloc(1 * sizeof(struct SelfType));
	printf("ASSIGNOP %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE -> content);
	sprintf(yylval.MYTYPE -> token, "%s", "ASSIGNOP");
	yylval.MYTYPE -> line = line;
	yylval.MYTYPE -> left = yylval.MYTYPE -> right = NULL;

	return EQUALOP;
}

%%

int yywrap(void) {
    return 1;
}
