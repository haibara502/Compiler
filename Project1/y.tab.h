/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    ID = 259,
    SEMI = 260,
    COMMA = 261,
    DOT = 262,
    BINARYOP = 263,
    UNARYOP = 264,
    ASSIGNOP = 265,
    EQUALOP = 266,
    TYPE = 267,
    LP = 268,
    RP = 269,
    LB = 270,
    RB = 271,
    LC = 272,
    RC = 273,
    STRUCT = 274,
    RETURN = 275,
    IF = 276,
    ELSE = 277,
    BREAK = 278,
    CONT = 279,
    FOR = 280,
    LOW = 281,
    LOW_THAN_ERROR = 282,
    HIGH_THAN_ERROR = 283
  };
#endif
/* Tokens.  */
#define INT 258
#define ID 259
#define SEMI 260
#define COMMA 261
#define DOT 262
#define BINARYOP 263
#define UNARYOP 264
#define ASSIGNOP 265
#define EQUALOP 266
#define TYPE 267
#define LP 268
#define RP 269
#define LB 270
#define RB 271
#define LC 272
#define RC 273
#define STRUCT 274
#define RETURN 275
#define IF 276
#define ELSE 277
#define BREAK 278
#define CONT 279
#define FOR 280
#define LOW 281
#define LOW_THAN_ERROR 282
#define HIGH_THAN_ERROR 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 11 "syntax.y" /* yacc.c:1909  */

	struct SelfType MYTYPE;

#line 114 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
