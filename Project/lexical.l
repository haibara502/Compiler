%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "y.tab.h"
extern YYSTYPE yylval;

int line = 0;
%}

DIGIT ([0-9])
POSDIGIT ([1-9])
ALPHA ([a-zA-Z])
INT (((0|0x|0X)?){DIGIT}+|({POSDIGIT}+{DIGIT}*))
ID (({ALPHA}|_)+({DIGIT}|{ALPHA}|_)*)
SEMI ");"
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
	sprintf(yylval.MYTYPE.symbol, "%s", "INT");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return INT;
}

{STRUCT} {	
	printf("STRUCT %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "STRUCT");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return STRUCT;
}

{RETURN} {	
	printf("RETURN %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "RETURN");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return RETURN;
}

{IF} {	
	printf("IF %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "IF");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return IF;
}

{ELSE} {	
	printf("ELSE %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "ELSE");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return ELSE;
}

{BREAK} {	
	printf("BREAK %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "BREAK");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return BREAK;
}

{CONT} {	
	printf("CONT %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "CONT");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return CONT;
}

{FOR} {	
	printf("FOR %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "FOR");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return FOR;
}

{LP} {	
	printf("LP %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "LP");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return LP;
}

{RP} {	
	printf("RP %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "RP");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return RP;
}

{LB} {	
	printf("LB %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "LB");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return LB;
}

{RB} {	
	printf("RB %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "RB");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return RB;
}

{LC} {	
	printf("LC %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "LC");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return LC;
}

{RC} {	
	printf("RC %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "RC");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return RC;
}


{TYPE} {	
	printf("TYPE %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "TYPE");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return TYPE;
}

{ID} {	
	printf("ID %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "ID");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return ID;
}
	
{SEMI} {	
	printf("SEMI %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "SEMI");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return SEMI;
}

{COMMA} {	
	printf("COMMA %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "COMMA");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return COMMA;
}

{DOT} {	
	printf("DOT %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "DOT");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return DOT;
}

{BINARYOP} {	
	printf("BINARYOP %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "BINARYOP");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return BINARYOP;
}

{UNARYOP} {	
	printf("UNARYOP %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "UNARYOP");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return UNARYOP;
}

{ASSIGNOP} {	
	printf("ASSIGNOP %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "ASSIGNOP");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return ASSIGNOP;
}

{EQUALOP} {
	printf("ASSIGNOP %s\n", yytext);
	sscanf(yytext, "%s", yylval.MYTYPE.content);
	sprintf(yylval.MYTYPE.symbol, "%s", "ASSIGNOP");
	yylval.MYTYPE.line = line;
	yylval.MYTYPE.left = yylval.MYTYPE.right = NULL;
	return EQUALOP;
}

%%
