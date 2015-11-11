/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "syntax.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "require.h"
FILE *INPUT, *OUTPUT;
extern FILE * yyin;
extern FILE * yyout;
struct SelfType *first;
#define YYDEBUG 1

#line 78 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 13 "syntax.y" /* yacc.c:355  */

	struct SelfType* MYTYPE;

#line 178 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 193 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   237

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  112

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    66,    66,    69,    70,    71,    72,    75,    76,    77,
      80,    81,    84,    85,    88,    89,    92,    93,    94,    97,
      98,   101,   102,   103,   106,   109,   110,   113,   114,   115,
     116,   117,   118,   119,   122,   123,   126,   127,   130,   131,
     134,   135,   138,   139,   140,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   153,   156,   157,   160,   161
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "ID", "SEMI", "COMMA", "DOT",
  "BINARYOP", "UNARYOP", "ASSIGNOP", "EQUALOP", "TYPE", "LP", "RP", "LB",
  "RB", "LC", "RC", "STRUCT", "RETURN", "IF", "ELSE", "BREAK", "CONT",
  "FOR", "LOW", "LOW_THAN_ERROR", "HIGH_THAN_ERROR", "$accept", "PROGRAM",
  "EXTDEFS", "EXTDEF", "SPEC", "STSPEC", "OPTTAG", "VAR", "FUNC", "PARAS",
  "PARA", "STMTBLOCK", "STMT", "ESTMT", "DEFS", "DEF", "DECS", "DEC",
  "EXP", "ARRS", "ARGS", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283
};
# endif

#define YYPACT_NINF -70

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define YYTABLE_NINF -55

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      65,    26,     8,    93,   -70,   -70,   -11,   -70,    24,    41,
     -70,    41,   118,    42,    41,    34,    52,    58,    78,   -70,
      47,   -70,   -70,   -70,   200,   -70,    41,    72,   226,   176,
     143,    75,    82,   207,    41,   -70,   -70,    41,    67,    94,
     -70,    -2,     2,    55,   -70,   -70,   104,    41,    41,    41,
     226,    20,    41,   -70,   -70,   -70,   -70,   187,   214,   -70,
     -70,    30,     7,   106,   -70,   -70,    28,   -70,   226,   226,
     226,    41,   -70,    48,     3,   168,    41,    28,    21,   -70,
      41,   226,    95,    99,   -70,   -70,    72,   226,   -70,   115,
     -70,    28,   -70,   102,   221,   -70,    30,   -70,    12,   -70,
     -70,    74,   168,   -70,    41,   -70,   -70,   -70,   -70,   192,
     168,   -70
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     6,     1,     0,    51,    56,    54,
      10,    54,     0,    15,    54,     0,     0,     0,     0,     3,
       0,    11,    28,     4,     0,    26,    54,    49,    46,     0,
       0,    13,     0,     0,    54,    33,    32,    54,     0,    16,
       9,    42,     0,     0,    41,    27,     0,    54,    54,    54,
      58,     0,    54,    47,    25,    37,    29,     0,     0,    20,
      18,    23,    54,     0,     8,     7,     0,    56,    45,    52,
      53,    54,    48,     0,     0,     0,    54,     0,     0,    22,
      54,    43,     0,     0,    16,    40,    50,    57,    55,     0,
      12,     0,    36,    35,     0,    24,     0,    19,     0,    17,
      39,     0,     0,    30,    54,    21,    44,    38,    34,     0,
       0,    31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -70,   -70,   120,   -70,   -60,   -70,   -70,   -70,   -70,   -70,
      37,    92,   -69,   -70,   -70,   -70,    49,   -54,    -9,    90,
      69
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    19,    20,    21,    32,    41,    42,    78,
      79,    22,    23,   103,    74,    92,    43,    44,    24,    27,
      51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      28,    77,    29,     6,    89,    33,    93,    25,     5,    62,
       7,     8,    85,    63,    91,    10,     9,    50,    71,    12,
      11,    90,    13,    95,    80,    57,    71,    96,    58,    83,
     106,     4,    84,   108,    72,    97,    77,    26,    68,    69,
      70,   111,    10,    73,     7,     8,    31,    34,    38,    13,
       9,    39,    40,    81,    11,    46,    47,    35,    48,    49,
      65,    66,    87,    36,    88,    -5,     1,    94,    -5,    -5,
      -5,    50,    -5,    -5,    -5,    -5,    -5,    -5,    -5,   107,
      66,    59,    -5,    60,    -5,    -5,    -5,    52,    -5,    -5,
      -5,    37,   -14,    -2,     6,   109,     7,     8,   -54,    55,
     -54,   -54,     9,   -54,   -54,    10,    11,    61,    67,    82,
      12,    99,    13,    14,    15,    60,    16,    17,    18,     1,
     100,    -5,    -5,    -5,   102,    -5,    -5,    -5,    -5,    -5,
      -5,    -5,    30,   105,    64,    -5,    -5,    -5,    -5,    -5,
     101,    -5,    -5,    -5,     6,     0,     7,     8,   -54,    98,
     -54,   -54,     9,   -54,   -54,    10,    11,    86,     0,     0,
      12,    54,    13,    14,    15,     0,    16,    17,    18,     6,
       0,     7,     8,   -54,     0,   -54,   -54,     9,   -54,   -54,
       0,    11,     0,    46,    47,    12,    48,    49,    14,    15,
      53,    16,    17,    18,    46,    47,     0,    48,    49,    46,
      47,    75,    48,    49,     0,    45,   110,    46,    47,     0,
      48,    49,    56,     0,    46,    47,     0,    48,    49,    76,
       0,    46,    47,     0,    48,    49,   104,     0,    46,    47,
       0,    48,    49,    46,    47,     0,    48,    49
};

static const yytype_int8 yycheck[] =
{
       9,    61,    11,     1,     1,    14,    75,    18,     0,    11,
       3,     4,    66,    15,    74,    12,     9,    26,     6,    17,
      13,    18,    19,    77,    17,    34,     6,     6,    37,     1,
      18,     5,     4,   102,    14,    14,    96,    13,    47,    48,
      49,   110,    12,    52,     3,     4,     4,    13,     1,    19,
       9,     4,     5,    62,    13,     7,     8,     5,    10,    11,
       5,     6,    71,     5,    16,     0,     1,    76,     3,     4,
       5,    80,     7,     8,     9,    10,    11,    12,    13,     5,
       6,    14,    17,    16,    19,    20,    21,    15,    23,    24,
      25,    13,    17,     0,     1,   104,     3,     4,     5,    17,
       7,     8,     9,    10,    11,    12,    13,    13,     4,     3,
      17,    16,    19,    20,    21,    16,    23,    24,    25,     1,
       5,     3,     4,     5,    22,     7,     8,     9,    10,    11,
      12,    13,    12,    96,    42,    17,    18,    19,    20,    21,
      91,    23,    24,    25,     1,    -1,     3,     4,     5,    80,
       7,     8,     9,    10,    11,    12,    13,    67,    -1,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    13,    -1,     7,     8,    17,    10,    11,    20,    21,
      14,    23,    24,    25,     7,     8,    -1,    10,    11,     7,
       8,    14,    10,    11,    -1,     5,    14,     7,     8,    -1,
      10,    11,     5,    -1,     7,     8,    -1,    10,    11,     5,
      -1,     7,     8,    -1,    10,    11,     5,    -1,     7,     8,
      -1,    10,    11,     7,     8,    -1,    10,    11
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    30,    31,     5,     0,     1,     3,     4,     9,
      12,    13,    17,    19,    20,    21,    23,    24,    25,    32,
      33,    34,    40,    41,    47,    18,    13,    48,    47,    47,
      31,     4,    35,    47,    13,     5,     5,    13,     1,     4,
       5,    36,    37,    45,    46,     5,     7,     8,    10,    11,
      47,    49,    15,    14,    18,    17,     5,    47,    47,    14,
      16,    13,    11,    15,    40,     5,     6,     4,    47,    47,
      47,     6,    14,    47,    43,    14,     5,    33,    38,    39,
      17,    47,     3,     1,     4,    46,    48,    47,    16,     1,
      18,    33,    44,    41,    47,    46,     6,    14,    49,    16,
       5,    45,    22,    42,     5,    39,    18,     5,    41,    47,
      14,    41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    29,    30,    31,    31,    31,    31,    32,    32,    32,
      33,    33,    34,    34,    35,    35,    36,    36,    36,    37,
      37,    38,    38,    38,    39,    40,    40,    41,    41,    41,
      41,    41,    41,    41,    42,    42,    43,    43,    44,    44,
      45,    45,    46,    46,    46,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    48,    48,    49,    49
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     2,     3,     3,     2,
       1,     1,     5,     2,     1,     0,     1,     4,     2,     4,
       2,     3,     1,     0,     2,     3,     2,     2,     1,     3,
       6,     9,     2,     2,     2,     0,     2,     0,     3,     2,
       3,     1,     1,     3,     5,     3,     2,     3,     4,     2,
       4,     1,     3,     3,     0,     4,     0,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 66 "syntax.y" /* yacc.c:1646  */
    { pack1(&((yyval.MYTYPE)), "PROGRAM", &((yyvsp[0].MYTYPE))); (*first) = (*(yyval.MYTYPE));}
#line 1366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 69 "syntax.y" /* yacc.c:1646  */
    { pack2(&((yyval.MYTYPE)), "EXTDEFS", &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE))); }
#line 1372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 70 "syntax.y" /* yacc.c:1646  */
    { pack2(&((yyval.MYTYPE)), "EXTDEFS", &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE))); }
#line 1378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 71 "syntax.y" /* yacc.c:1646  */
    { init(&((yyval.MYTYPE)), "", NULL);}
#line 1384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 72 "syntax.y" /* yacc.c:1646  */
    {}
#line 1390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 75 "syntax.y" /* yacc.c:1646  */
    { pack3(&((yyval.MYTYPE)), "EXTDEF", &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 76 "syntax.y" /* yacc.c:1646  */
    { pack3(&((yyval.MYTYPE)), "EXTDEF", &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 77 "syntax.y" /* yacc.c:1646  */
    {pack2(&((yyval.MYTYPE)), "EXTDEF", &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 80 "syntax.y" /* yacc.c:1646  */
    { pack1(&((yyval.MYTYPE)), "SPEC", &((yyvsp[0].MYTYPE))); }
#line 1414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 81 "syntax.y" /* yacc.c:1646  */
    { pack1(&((yyval.MYTYPE)), "SPEC", &((yyvsp[0].MYTYPE))); }
#line 1420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 84 "syntax.y" /* yacc.c:1646  */
    { pack5(&((yyval.MYTYPE)), "STSPEC", &((yyvsp[-4].MYTYPE)), &((yyvsp[-3].MYTYPE)), &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 85 "syntax.y" /* yacc.c:1646  */
    { pack2(&((yyval.MYTYPE)), "STSPEC", &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE))); }
#line 1432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 88 "syntax.y" /* yacc.c:1646  */
    { pack1(&((yyval.MYTYPE)), "OPTTAG", &((yyvsp[0].MYTYPE)));}
#line 1438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 89 "syntax.y" /* yacc.c:1646  */
    {	init(&((yyval.MYTYPE)), "", NULL);}
#line 1444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 92 "syntax.y" /* yacc.c:1646  */
    { pack1(&((yyval.MYTYPE)), "VAR", &((yyvsp[0].MYTYPE))); }
#line 1450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 93 "syntax.y" /* yacc.c:1646  */
    {pack4(&((yyval.MYTYPE)), "VAR", &((yyvsp[-3].MYTYPE)), &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 94 "syntax.y" /* yacc.c:1646  */
    {}
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 97 "syntax.y" /* yacc.c:1646  */
    { pack4(&((yyval.MYTYPE)), "FUNC", &((yyvsp[-3].MYTYPE)), &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 98 "syntax.y" /* yacc.c:1646  */
    {}
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 101 "syntax.y" /* yacc.c:1646  */
    { pack3(&((yyval.MYTYPE)), "PARAS", &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 102 "syntax.y" /* yacc.c:1646  */
    { pack1(&((yyval.MYTYPE)), "PARAS", &((yyvsp[0].MYTYPE)));}
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 103 "syntax.y" /* yacc.c:1646  */
    {	init(&((yyval.MYTYPE)), "", NULL);}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 106 "syntax.y" /* yacc.c:1646  */
    { pack2(&((yyval.MYTYPE)), "PARA", &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE))); }
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 109 "syntax.y" /* yacc.c:1646  */
    {pack3(&((yyval.MYTYPE)), "STMTBLOCK", &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 110 "syntax.y" /* yacc.c:1646  */
    {}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 113 "syntax.y" /* yacc.c:1646  */
    {pack2(&((yyval.MYTYPE)), "STMT", &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 114 "syntax.y" /* yacc.c:1646  */
    { pack1(&((yyval.MYTYPE)), "STMT", &((yyvsp[0].MYTYPE)));	}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 115 "syntax.y" /* yacc.c:1646  */
    {	pack3(&((yyval.MYTYPE)), "STMT", &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 116 "syntax.y" /* yacc.c:1646  */
    {	pack6(&((yyval.MYTYPE)), "STMT", &((yyvsp[-5].MYTYPE)), &((yyvsp[-4].MYTYPE)), &((yyvsp[-3].MYTYPE)), &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 117 "syntax.y" /* yacc.c:1646  */
    {pack9(&((yyval.MYTYPE)), "STMT", &((yyvsp[-8].MYTYPE)), &((yyvsp[-7].MYTYPE)), &((yyvsp[-6].MYTYPE)), &((yyvsp[-5].MYTYPE)), &((yyvsp[-4].MYTYPE)), &((yyvsp[-3].MYTYPE)), &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 118 "syntax.y" /* yacc.c:1646  */
    {pack2(&((yyval.MYTYPE)), "STMT", &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 119 "syntax.y" /* yacc.c:1646  */
    {pack2(&((yyval.MYTYPE)), "STMT", &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 122 "syntax.y" /* yacc.c:1646  */
    { pack2(&((yyval.MYTYPE)), "ESTMT", &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 123 "syntax.y" /* yacc.c:1646  */
    {	init(&((yyval.MYTYPE)), "", NULL);}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 126 "syntax.y" /* yacc.c:1646  */
    { pack2(&((yyval.MYTYPE)), "DEFS", &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 127 "syntax.y" /* yacc.c:1646  */
    {	init(&((yyval.MYTYPE)), "", NULL);}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 130 "syntax.y" /* yacc.c:1646  */
    { pack3(&((yyval.MYTYPE)), "DEF", &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 131 "syntax.y" /* yacc.c:1646  */
    {}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 134 "syntax.y" /* yacc.c:1646  */
    { pack3(&((yyval.MYTYPE)), "DECS", &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 135 "syntax.y" /* yacc.c:1646  */
    { pack1(&((yyval.MYTYPE)), "DECS", &((yyvsp[0].MYTYPE)));}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 138 "syntax.y" /* yacc.c:1646  */
    {	pack1(&((yyval.MYTYPE)), "DEC", &((yyvsp[0].MYTYPE)));}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 139 "syntax.y" /* yacc.c:1646  */
    {pack3(&((yyval.MYTYPE)), "DEC", &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 140 "syntax.y" /* yacc.c:1646  */
    {pack5(&((yyval.MYTYPE)), "EXP", &((yyvsp[-4].MYTYPE)), &((yyvsp[-3].MYTYPE)), &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 143 "syntax.y" /* yacc.c:1646  */
    { pack3(&((yyval.MYTYPE)), "EXP", &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 144 "syntax.y" /* yacc.c:1646  */
    { pack2(&((yyval.MYTYPE)), "EXP", &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE))); }
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 145 "syntax.y" /* yacc.c:1646  */
    {pack3(&((yyval.MYTYPE)), "EXP", &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 146 "syntax.y" /* yacc.c:1646  */
    { pack4(&((yyval.MYTYPE)), "EXP", &((yyvsp[-3].MYTYPE)), &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 147 "syntax.y" /* yacc.c:1646  */
    {	pack2(&((yyval.MYTYPE)), "EXP", &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 148 "syntax.y" /* yacc.c:1646  */
    {	pack4(&((yyval.MYTYPE)), "EXP", &((yyvsp[-3].MYTYPE)), &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 149 "syntax.y" /* yacc.c:1646  */
    { pack1(&((yyval.MYTYPE)), "EXP", &((yyvsp[0].MYTYPE)));}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 150 "syntax.y" /* yacc.c:1646  */
    { pack3(&((yyval.MYTYPE)), "EXP", &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 151 "syntax.y" /* yacc.c:1646  */
    {	pack3(&((yyval.MYTYPE)), "EXP", &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 153 "syntax.y" /* yacc.c:1646  */
    {	init(&((yyval.MYTYPE)), "", NULL);}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 156 "syntax.y" /* yacc.c:1646  */
    {pack4(&((yyval.MYTYPE)), "ARRS", &((yyvsp[-3].MYTYPE)), &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 157 "syntax.y" /* yacc.c:1646  */
    {init(&((yyval.MYTYPE)), "", NULL);}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 160 "syntax.y" /* yacc.c:1646  */
    {pack3(&((yyval.MYTYPE)), "ARGS", &((yyvsp[-2].MYTYPE)), &((yyvsp[-1].MYTYPE)), &((yyvsp[0].MYTYPE)));}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 161 "syntax.y" /* yacc.c:1646  */
    {	pack1(&((yyval.MYTYPE)), "ARGS", &((yyvsp[0].MYTYPE)));}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1706 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 163 "syntax.y" /* yacc.c:1906  */


void init(struct SelfType **now, char* s, struct SelfType **s1)
{
	//printf("init:%s\n", s);
	(*now) = (struct SelfType *) malloc(1 * sizeof(struct SelfType));
	//printf("init malloc finish\n");
	sprintf((*now) -> token, "%s", s);
	sprintf((*now) -> content, "%s", s);
	//printf("sprintf finish\n");
	if (s1 != NULL)
		(*now) -> left = *s1;
	//printf("left finish \n");
}

void Pack(struct SelfType ***All, int number)
{
	//printf("in pack\n");
	int i = 0;
	for (i = 0; i < number - 1; ++i)
	{
		//printf("%d\n", i);
		(*All[i]) -> right = *All[i + 1];
	}
	//printf("out pack\n");
}

void pack1(struct SelfType **now, char* s, struct SelfType **son1)
{
	//printf("in pack1\n");
	//printf("now : %s\n", s);
	init(now, s, son1);
	//printf("after now : %s\n", (*now) -> token);
	//printf("out pack1\n");
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
	//printf("pack6\n");
	init(now, s, son1);
	//printf("init finish\n");
	struct SelfType ***All = (struct SelfType ***) malloc(6 * sizeof(struct SelfType**));
	//printf("malloc finish\n");
	All[0] = son1, All[1] = son2, All[2] = son3, All[3] = son4, All[4] = son5, All[5] = son6;
	//printf("All finish\n");
	Pack(All, 6);
	//printf("Pack finish\n");
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
		//printf("tree %s %s %d\n", node -> token, node -> content, depth);
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
