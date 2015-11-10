%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "require.h"
#include "y.tab.h"
int line = 0;
%}

DIGIT ([0-9])
POSDIGIT ([1-9])
ALPHA ([a-zA-Z])
INT (((0|0x|0X)?){DIGIT}+|({POSDIGIT}+{DIGIT}*))
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
	printf("INT %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "INT");
	yylval.MYTYPE.line = line;
	return INT;
}

{STRUCT} {
	printf("STRUCT %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "STRUCT");
	yylval.MYTYPE.line = line;
	return STRUCT;
}

{RETURN} {	
	printf("RETURN %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "RETURN");
	yylval.MYTYPE.line = line;
	return RETURN;
}

{IF} {	
	printf("IF %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "IF");
	yylval.MYTYPE.line = line;
	return IF;
}

{ELSE} {	
	printf("ELSE %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "ELSE");
	yylval.MYTYPE.line = line;
	return ELSE;
}

{BREAK} {	
	printf("BREAK %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "BREAK");
	yylval.MYTYPE.line = line;
	return BREAK;
}

{CONT} {	
	printf("CONT %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "CONT");
	yylval.MYTYPE.line = line;
	return CONT;
}

{FOR} {	
	printf("FOR %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "FOR");
	yylval.MYTYPE.line = line;
	return FOR;
}

{LP} {	
	printf("LP %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "LP");
	yylval.MYTYPE.line = line;
	return LP;
}

{RP} {	
	printf("RP %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "RP");
	yylval.MYTYPE.line = line;
	return RP;
}

{LB} {	
	printf("LB %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "LB");
	yylval.MYTYPE.line = line;
	return LB;
}

{RB} {	
	printf("RB %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "RB");
	yylval.MYTYPE.line = line;
	return RB;
}

{LC} {	
	printf("LC %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "LC");
	yylval.MYTYPE.line = line;
	return LC;
}

{RC} {	
	printf("RC %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "RC");
	yylval.MYTYPE.line = line;
	return RC;
}


{TYPE} {	
	printf("TYPE %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "TYPE");
	yylval.MYTYPE.line = line;
	return TYPE;
}

{ID} {	
	printf("ID %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "ID");
	yylval.MYTYPE.line = line;

	return ID;
}
	
{SEMI} {	
	printf("SEMI %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "SEMI");
	yylval.MYTYPE.line = line;

	return SEMI;
}

{COMMA} {	
	printf("COMMA %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "COMMA");
	yylval.MYTYPE.line = line;

	return COMMA;
}

{DOT} {	
	printf("DOT %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "DOT");
	yylval.MYTYPE.line = line;

	return DOT;
}

{BINARYOP} {	
	printf("BINARYOP %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "BINARYOP");
	yylval.MYTYPE.line = line;

	return BINARYOP;
}

{UNARYOP} {	
	printf("UNARYOP %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "UNARYOP");
	yylval.MYTYPE.line = line;

	return UNARYOP;
}

{ASSIGNOP} {	
	printf("ASSIGNOP %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "ASSIGNOP");
	yylval.MYTYPE.line = line;

	return ASSIGNOP;
}

{EQUALOP} {
	printf("ASSIGNOP %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.token, "%s", "ASSIGNOP");
	yylval.MYTYPE.line = line;

	return EQUALOP;
}

%%

int yywrap(void) {
    return 1;
}
