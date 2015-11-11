#ifndef REQUIRE
#define REQUIRE

#include <stdio.h>

struct SelfType
		{
			void *left, *right;
			int line;
			char token[20], content[20];
		};
		
void init(struct SelfType **, char*, struct SelfType **);

void Pack(struct SelfType ***, int);

void pack0(struct SelfType **, char *);

void pack1(struct SelfType **, char*, struct SelfType **);

void pack2(struct SelfType **, char*, struct SelfType **, struct SelfType **);

void pack3(struct SelfType **, char*, struct SelfType **, struct SelfType **, struct SelfType **);

void pack4(struct SelfType **, char*, struct SelfType **, struct SelfType **, struct SelfType **, struct SelfType **);

void pack5(struct SelfType **, char* , struct SelfType **, struct SelfType **, struct SelfType **, struct SelfType **, struct SelfType **);

void pack6 (struct SelfType **, char* , struct SelfType **, struct SelfType **, struct SelfType **, struct SelfType **, struct SelfType **, struct SelfType **);

void pack9(struct SelfType **, char* , struct SelfType **, struct SelfType **, struct SelfType **, struct SelfType **, struct SelfType **, struct SelfType **, struct SelfType **, struct SelfType **, struct SelfType **);

void print_tree(struct SelfType *, int);

void yyerror(char const *);
		
#endif
