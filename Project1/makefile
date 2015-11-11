parser: lex.yy.o y.tab.o
	gcc lex.yy.o y.tab.o -o parser

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c -o lex.yy.o

lex.yy.c: lexical.l y.tab.h
	flex lexical.l

y.tab.o: y.tab.c
	gcc -c y.tab.c -o y.tab.o

y.tab.c y.tab.h: syntax.y
	yacc -d --verbose syntax.y
