%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
%}

DIGIT [0-9]
POSDIGIT [1-9]
ALPHA [a-zA-Z]
INT "{POSDIGIT}{DIGIT}*"
ID "[{ALPHA}_][{DIGIT}{ALPHA}_]*"
SEMI ;
COMMA ,
DOT "."
BOOLBINARY ">"|">"=|"<"|"<"=|==|!=|"||"|&&
ADDBINARY "*"|"/"|"%"|"+"|"-"|"<<"|">>"|&|"^"|"|"
BINARYOP "{BOOLBINARY}|{ADDBINARY}"
UNARYOP "-"|!|"++"|"--"|~
ASSIGNOP "{ADDBINARY}?="
TYPE int
LP "("
RP ")"
LB "["
RB "]"
LC "{"
RC "}"
STRUCT struct
RETURN return
IF if
ELSE else
BREAK break
CONT continue
FOR for
%%

{INT} {	
	printf("INT %s\n", yytext);
	return INT;
}

{STRUCT} {	
	printf("STRUCT %s\n", yytext);
	return STRUCT;
}

{RETURN} {	
	printf("RETURN %s\n", yytext);
	return RETURN;
}

{IF} {	
	printf("IF %s\n", yytext);
	return IF;
}

{ELSE} {	
	printf("ELSE %s\n", yytext);
	return ELSE;
}

{BREAK} {	
	printf("BREAK %s\n", yytext);
	return BREAK;
}

{CONT} {	
	printf("CONT %s\n", yytext);
	return CONT;
}

{FOR} {	
	printf("FOR %s\n", yytext);
	return FOR;
}

{TYPE} {	
	printf("TYPE %s\n", yytext);
	return TYPE;
}

{ID} {	
	printf("ID %s\n", yytext);
	return ID;
}
	
{SEMI} {	
	printf("SEMI %s\n", yytext);
	return SEMI;
}

{COMMA} {	
	printf("COMMA %s\n", yytext);
	return COMMA;
}

{DOT} {	
	printf("DOT %s\n", yytext);
	return DOT;
}

{BINARYOP} {	
	printf("BINARYOP %s\n", yytext);
	return BINARYOP;
}

{UNARYOP} {	
	printf("UNARYOP %s\n", yytext);
	return UNARYOP;
}

{ASSIGNOP} {	
	printf("ASSIGNOP %s\n", yytext);
	return ASSIGNOP;
}

{LP} {	
	printf("LP %s\n", yytext);
	return LP;
}

{RP} {	
	printf("RP %s\n", yytext);
	return RP;
}

{LB} {	
	printf("LB %s\n", yytext);
	return LB;
}

{RB} {	
	printf("RB %s\n", yytext);
	return RB;
}

{LC} {	
	printf("LC %s\n", yytext);
	return LC;
}

{RC} {	
	printf("RC %s\n", yytext);
	return RC;
}

[ \n\t];
%%

int main(int argc, char *argv[])
{
	yylex();
	fflush(yyout);
}
