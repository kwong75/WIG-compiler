
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 13 "joos.y"


#define YYDEBUG 1
  
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tree.h"

extern CLASSFILE *theclassfile;
 


/* Line 189 of yacc.c  */
#line 87 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tABSTRACT = 258,
     tBOOLEAN = 259,
     tBREAK = 260,
     tBYTE = 261,
     tCASE = 262,
     tCATCH = 263,
     tCHAR = 264,
     tCLASS = 265,
     tCONST = 266,
     tCONTINUE = 267,
     tDEFAULT = 268,
     tDO = 269,
     tDOUBLE = 270,
     tELSE = 271,
     tEXTENDS = 272,
     tEXTERN = 273,
     tFINAL = 274,
     tFINALLY = 275,
     tFLOAT = 276,
     tFOR = 277,
     tGOTO = 278,
     tIF = 279,
     tIMPLEMENTS = 280,
     tIMPORT = 281,
     tIN = 282,
     tINSTANCEOF = 283,
     tINT = 284,
     tINTERFACE = 285,
     tLONG = 286,
     tMAIN = 287,
     tMAINARGV = 288,
     tNATIVE = 289,
     tNEW = 290,
     tNULL = 291,
     tPACKAGE = 292,
     tPRIVATE = 293,
     tPROTECTED = 294,
     tPUBLIC = 295,
     tRETURN = 296,
     tSHORT = 297,
     tSTATIC = 298,
     tSUPER = 299,
     tSWITCH = 300,
     tSYNCHRONIZED = 301,
     tTHIS = 302,
     tTHROW = 303,
     tTHROWS = 304,
     tTRANSIENT = 305,
     tTRY = 306,
     tVOID = 307,
     tVOLATILE = 308,
     tWHILE = 309,
     tEQ = 310,
     tLEQ = 311,
     tGEQ = 312,
     tNEQ = 313,
     tAND = 314,
     tOR = 315,
     tINC = 316,
     tDECR = 317,
     tPATH = 318,
     tERROR = 319,
     tINTCONST = 320,
     tBOOLCONST = 321,
     tCHARCONST = 322,
     tSTRINGCONST = 323,
     tIDENTIFIER = 324
   };
#endif
/* Tokens.  */
#define tABSTRACT 258
#define tBOOLEAN 259
#define tBREAK 260
#define tBYTE 261
#define tCASE 262
#define tCATCH 263
#define tCHAR 264
#define tCLASS 265
#define tCONST 266
#define tCONTINUE 267
#define tDEFAULT 268
#define tDO 269
#define tDOUBLE 270
#define tELSE 271
#define tEXTENDS 272
#define tEXTERN 273
#define tFINAL 274
#define tFINALLY 275
#define tFLOAT 276
#define tFOR 277
#define tGOTO 278
#define tIF 279
#define tIMPLEMENTS 280
#define tIMPORT 281
#define tIN 282
#define tINSTANCEOF 283
#define tINT 284
#define tINTERFACE 285
#define tLONG 286
#define tMAIN 287
#define tMAINARGV 288
#define tNATIVE 289
#define tNEW 290
#define tNULL 291
#define tPACKAGE 292
#define tPRIVATE 293
#define tPROTECTED 294
#define tPUBLIC 295
#define tRETURN 296
#define tSHORT 297
#define tSTATIC 298
#define tSUPER 299
#define tSWITCH 300
#define tSYNCHRONIZED 301
#define tTHIS 302
#define tTHROW 303
#define tTHROWS 304
#define tTRANSIENT 305
#define tTRY 306
#define tVOID 307
#define tVOLATILE 308
#define tWHILE 309
#define tEQ 310
#define tLEQ 311
#define tGEQ 312
#define tNEQ 313
#define tAND 314
#define tOR 315
#define tINC 316
#define tDECR 317
#define tPATH 318
#define tERROR 319
#define tINTCONST 320
#define tBOOLCONST 321
#define tCHARCONST 322
#define tSTRINGCONST 323
#define tIDENTIFIER 324




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 28 "joos.y"

   struct CLASSFILE *classfile;
   struct CLASS *class;
   struct FIELD *field;
   struct TYPE *type;
   struct ID *id;
   struct CONSTRUCTOR *constructor;
   struct METHOD *method;
   struct FORMAL *formal;
   struct STATEMENT *statement;
   struct EXP *exp;
   struct RECEIVER *receiver;
   struct ARGUMENT *argument;
   int modifier;
   int intconst;
   int boolconst;
   char charconst;
   char *stringconst;



/* Line 214 of yacc.c  */
#line 283 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 295 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   470

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  148
/* YYNRULES -- Number of states.  */
#define YYNSTATES  306

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,     2,     2,     2,    85,     2,     2,
      74,    75,    83,    81,    73,    82,    87,    84,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    72,
      79,    78,    80,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,     2,    71,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,     9,    12,    23,    24,    26,
      28,    30,    33,    46,    47,    50,    52,    54,    56,    58,
      59,    61,    63,    66,    71,    73,    77,    79,    82,    96,
      98,   101,   108,   109,   111,   113,   117,   120,   121,   123,
     125,   128,   139,   149,   158,   169,   171,   173,   178,   183,
     184,   186,   188,   191,   200,   208,   210,   212,   214,   216,
     218,   219,   221,   223,   226,   228,   230,   232,   234,   236,
     238,   242,   244,   248,   250,   252,   258,   266,   268,   270,
     272,   280,   286,   292,   302,   303,   305,   306,   308,   312,
     315,   317,   319,   321,   325,   326,   328,   332,   335,   338,
     340,   342,   344,   348,   350,   354,   356,   360,   364,   366,
     370,   374,   378,   382,   386,   388,   392,   396,   398,   402,
     406,   410,   412,   415,   417,   420,   422,   427,   432,   434,
     436,   438,   440,   444,   446,   448,   454,   461,   463,   465,
     467,   468,   470,   472,   476,   478,   480,   482,   484
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      89,     0,    -1,    90,    91,    -1,    93,    -1,    -1,    90,
      63,    -1,    40,    92,    10,    69,    95,    70,    97,   101,
     108,    71,    -1,    -1,    19,    -1,     3,    -1,    94,    -1,
      93,    94,    -1,    18,    40,    92,    10,    69,    95,    27,
      68,    70,   103,   113,    71,    -1,    -1,    17,    69,    -1,
      69,    -1,     9,    -1,     4,    -1,    29,    -1,    -1,    98,
      -1,    99,    -1,    98,    99,    -1,    39,    96,   100,    72,
      -1,    69,    -1,   100,    73,    69,    -1,   102,    -1,   101,
     102,    -1,    40,    69,    74,   105,    75,    70,    44,    74,
     152,    75,    72,   118,    71,    -1,   104,    -1,   103,   104,
      -1,    40,    69,    74,   105,    75,    72,    -1,    -1,   106,
      -1,   107,    -1,   106,    73,   107,    -1,    96,    69,    -1,
      -1,   109,    -1,   110,    -1,   109,   110,    -1,    40,   111,
     117,    69,    74,   105,    75,    70,   118,    71,    -1,    40,
     117,    69,    74,   105,    75,    70,   118,    71,    -1,    40,
       3,   117,    69,    74,   105,    75,    72,    -1,    40,    43,
      52,    32,    74,   112,    75,    70,   118,    71,    -1,    19,
      -1,    46,    -1,    69,    69,    76,    77,    -1,    69,    76,
      77,    69,    -1,    -1,   114,    -1,   115,    -1,   114,   115,
      -1,    40,   116,   117,    69,    74,   105,    75,    72,    -1,
      40,   117,    69,    74,   105,    75,    72,    -1,    19,    -1,
       3,    -1,    46,    -1,    52,    -1,    96,    -1,    -1,   119,
      -1,   120,    -1,   119,   120,    -1,   122,    -1,   121,    -1,
     123,    -1,   124,    -1,   127,    -1,   129,    -1,    96,   100,
      72,    -1,    72,    -1,    70,   118,    71,    -1,   132,    -1,
     134,    -1,    24,    74,   137,    75,   120,    -1,    24,    74,
     137,    75,   125,    16,   120,    -1,   122,    -1,   126,    -1,
     128,    -1,    24,    74,   137,    75,   125,    16,   125,    -1,
      54,    74,   137,    75,   120,    -1,    54,    74,   137,    75,
     125,    -1,    22,    74,   131,    72,   130,    72,   131,    75,
     120,    -1,    -1,   137,    -1,    -1,   136,    -1,   136,    73,
     136,    -1,   133,    72,    -1,   136,    -1,   150,    -1,   149,
      -1,    41,   135,    72,    -1,    -1,   137,    -1,    69,    78,
     137,    -1,    69,    61,    -1,    69,    62,    -1,   138,    -1,
     136,    -1,   139,    -1,   138,    60,   139,    -1,   140,    -1,
     139,    59,   140,    -1,   141,    -1,   140,    55,   141,    -1,
     140,    58,   141,    -1,   142,    -1,   141,    79,   142,    -1,
     141,    80,   142,    -1,   141,    56,   142,    -1,   141,    57,
     142,    -1,   141,    28,    69,    -1,   143,    -1,   142,    81,
     143,    -1,   142,    82,   143,    -1,   144,    -1,   143,    83,
     144,    -1,   143,    84,   144,    -1,   143,    85,   144,    -1,
     145,    -1,    82,   144,    -1,   147,    -1,    86,   144,    -1,
     146,    -1,    74,   137,    75,   145,    -1,    74,     9,    75,
     144,    -1,    69,    -1,   148,    -1,   154,    -1,    47,    -1,
      74,   137,    75,    -1,   149,    -1,   150,    -1,    35,    69,
      74,   152,    75,    -1,   151,    87,    69,    74,   152,    75,
      -1,    69,    -1,   148,    -1,    44,    -1,    -1,   153,    -1,
     137,    -1,   153,    73,   137,    -1,    65,    -1,    66,    -1,
      67,    -1,    68,    -1,    36,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    87,    87,    89,    93,    94,    97,   103,   104,   106,
     110,   112,   116,   122,   123,   127,   129,   131,   133,   138,
     139,   143,   145,   149,   153,   155,   159,   161,   165,   176,
     178,   182,   187,   188,   192,   194,   198,   203,   204,   208,
     210,   214,   216,   218,   220,   224,   226,   230,   232,   237,
     238,   242,   244,   248,   250,   254,   256,   258,   263,   265,
     270,   271,   275,   277,   281,   283,   285,   287,   289,   291,
     295,   299,   301,   303,   305,   309,   313,   317,   319,   321,
     325,   330,   334,   338,   344,   345,   350,   351,   353,   356,
     360,   362,   364,   368,   373,   374,   378,   380,   382,   386,
     388,   392,   394,   398,   400,   404,   406,   408,   412,   414,
     416,   418,   420,   422,   426,   428,   430,   434,   436,   438,
     440,   444,   446,   451,   453,   455,   458,   461,   465,   467,
     471,   473,   475,   477,   479,   483,   487,   491,   493,   495,
     500,   501,   505,   507,   511,   513,   515,   517,   519
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tABSTRACT", "tBOOLEAN", "tBREAK",
  "tBYTE", "tCASE", "tCATCH", "tCHAR", "tCLASS", "tCONST", "tCONTINUE",
  "tDEFAULT", "tDO", "tDOUBLE", "tELSE", "tEXTENDS", "tEXTERN", "tFINAL",
  "tFINALLY", "tFLOAT", "tFOR", "tGOTO", "tIF", "tIMPLEMENTS", "tIMPORT",
  "tIN", "tINSTANCEOF", "tINT", "tINTERFACE", "tLONG", "tMAIN",
  "tMAINARGV", "tNATIVE", "tNEW", "tNULL", "tPACKAGE", "tPRIVATE",
  "tPROTECTED", "tPUBLIC", "tRETURN", "tSHORT", "tSTATIC", "tSUPER",
  "tSWITCH", "tSYNCHRONIZED", "tTHIS", "tTHROW", "tTHROWS", "tTRANSIENT",
  "tTRY", "tVOID", "tVOLATILE", "tWHILE", "tEQ", "tLEQ", "tGEQ", "tNEQ",
  "tAND", "tOR", "tINC", "tDECR", "tPATH", "tERROR", "tINTCONST",
  "tBOOLCONST", "tCHARCONST", "tSTRINGCONST", "tIDENTIFIER", "'{'", "'}'",
  "';'", "','", "'('", "')'", "'['", "']'", "'='", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'!'", "'.'", "$accept", "classfile",
  "imports", "class", "classmods", "externclasses", "externclass",
  "extension", "type", "fields", "nefields", "field", "idlist",
  "constructors", "constructor", "externconstructors", "externconstructor",
  "formals", "neformals", "formal", "methods", "nemethods", "method",
  "methodmods", "mainargv", "externmethods", "externnemethods",
  "externmethod", "externmods", "returntype", "statements", "nestatements",
  "statement", "declaration", "simplestatement", "ifthenstatement",
  "ifthenelsestatement", "statementnoshortif",
  "ifthenelsestatementnoshortif", "whilestatement",
  "whilestatementnoshortif", "forstatement", "forexpression",
  "forassignstatement", "expressionstatement", "statementexpression",
  "returnstatement", "returnexpression", "assignment", "expression",
  "orexpression", "andexpression", "eqexpression", "relexpression",
  "addexpression", "multexpression", "unaryexpression",
  "unaryexpressionnotminus", "castexpression", "postfixexpression",
  "primaryexpression", "classinstancecreation", "methodinvocation",
  "receiver", "arguments", "nearguments", "literal", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     123,   125,    59,    44,    40,    41,    91,    93,    61,    60,
      62,    43,    45,    42,    47,    37,    33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    90,    90,    91,    92,    92,    92,
      93,    93,    94,    95,    95,    96,    96,    96,    96,    97,
      97,    98,    98,    99,   100,   100,   101,   101,   102,   103,
     103,   104,   105,   105,   106,   106,   107,   108,   108,   109,
     109,   110,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   114,   114,   115,   115,   116,   116,   116,   117,   117,
     118,   118,   119,   119,   120,   120,   120,   120,   120,   120,
     121,   122,   122,   122,   122,   123,   124,   125,   125,   125,
     126,   127,   128,   129,   130,   130,   131,   131,   131,   132,
     133,   133,   133,   134,   135,   135,   136,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   140,   141,   141,
     141,   141,   141,   141,   142,   142,   142,   143,   143,   143,
     143,   144,   144,   145,   145,   145,   146,   146,   147,   147,
     148,   148,   148,   148,   148,   149,   150,   151,   151,   151,
     152,   152,   153,   153,   154,   154,   154,   154,   154
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     0,     2,    10,     0,     1,     1,
       1,     2,    12,     0,     2,     1,     1,     1,     1,     0,
       1,     1,     2,     4,     1,     3,     1,     2,    13,     1,
       2,     6,     0,     1,     1,     3,     2,     0,     1,     1,
       2,    10,     9,     8,    10,     1,     1,     4,     4,     0,
       1,     1,     2,     8,     7,     1,     1,     1,     1,     1,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     1,     5,     7,     1,     1,     1,
       7,     5,     5,     9,     0,     1,     0,     1,     3,     2,
       1,     1,     1,     3,     0,     1,     3,     2,     2,     1,
       1,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     2,     1,     2,     1,     4,     4,     1,     1,
       1,     1,     3,     1,     1,     5,     6,     1,     1,     1,
       0,     1,     1,     3,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     3,    10,     7,     1,     7,     5,
       2,    11,     9,     8,     0,     0,     0,     0,    13,    13,
       0,     0,     0,    14,     0,    19,     0,     0,     0,    20,
      21,     0,    17,    16,    18,    15,     0,     0,    37,    26,
      22,     0,    49,    29,    24,     0,     0,     0,    27,     0,
      38,    39,     0,     0,    30,     0,    50,    51,    23,     0,
      32,     0,    45,     0,    46,    58,    15,    59,     0,     0,
       6,     0,    40,    32,    56,    55,    57,    15,     0,     0,
      12,     0,    52,    25,     0,     0,    33,    34,     0,     0,
       0,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,    32,     0,     0,    32,     0,    35,    32,     0,    32,
       0,    31,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   140,     0,     0,     0,     0,     0,    60,     0,
      54,     0,   148,   139,   131,   144,   145,   146,   147,   128,
       0,     0,     0,   100,   142,    99,   101,   103,   105,   108,
     114,   117,   121,   125,   123,   129,   133,   134,     0,     0,
     141,   130,    43,     0,     0,    60,    60,     0,     0,    94,
       0,    15,    60,    71,     0,     0,     0,    61,    62,    65,
      64,    66,    67,    68,    69,    73,     0,    74,    90,   138,
      92,    91,    53,     0,    97,    98,     0,     0,     0,   128,
     122,   124,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
      48,     0,     0,    86,     0,     0,    95,     0,     0,     0,
       0,    42,    63,    89,   140,    96,     0,   132,   102,   104,
     106,   107,   113,   111,   112,   109,   110,   115,   116,   118,
     119,   120,     0,    60,   143,    44,    41,     0,     0,    87,
       0,    93,     0,    72,   132,    70,     0,   127,   126,   140,
       0,    84,     0,     0,     0,   135,     0,    28,     0,    85,
      88,     0,     0,    75,    64,     0,    78,    79,    81,   136,
      86,     0,     0,     0,     0,     0,     0,    76,     0,     0,
       0,    83,     0,    82,     0,    80
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    10,    14,     4,     5,    21,   175,    28,
      29,    30,    45,    38,    39,    42,    43,    85,    86,    87,
      49,    50,    51,    68,   117,    55,    56,    57,    78,    69,
     176,   177,   178,   179,   180,   181,   182,   285,   286,   183,
     287,   184,   278,   258,   185,   186,   187,   225,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -273
static const yytype_int16 yypact[] =
{
      -3,   -19,    24,   -10,    -3,  -273,     3,  -273,     3,  -273,
    -273,  -273,  -273,  -273,    29,    36,   -43,   -21,    44,    44,
      -6,    55,    20,  -273,    -1,    53,    26,    25,    58,    53,
    -273,    76,  -273,  -273,  -273,  -273,    57,    63,    87,  -273,
    -273,    65,    96,  -273,  -273,   -17,    69,   330,  -273,    66,
     107,  -273,    81,    14,  -273,    85,   117,  -273,  -273,    92,
      25,    16,  -273,   111,  -273,  -273,    69,  -273,    16,    95,
    -273,   334,  -273,    25,  -273,  -273,  -273,    81,    16,    97,
    -273,   342,  -273,  -273,    98,    94,   104,  -273,   118,   154,
     119,   116,   120,   122,   123,  -273,   124,    25,   125,   127,
     129,    25,   121,   130,    25,   148,  -273,    25,   140,    25,
     135,  -273,    25,   138,   143,   139,   -57,   144,   145,   126,
     146,   150,   348,   152,   142,   153,   128,   157,   251,   159,
    -273,   156,  -273,  -273,  -273,  -273,  -273,  -273,  -273,    13,
     203,   374,   374,  -273,  -273,   169,   173,   -44,    31,   -11,
      67,  -273,  -273,  -273,  -273,   147,  -273,  -273,   158,   160,
     164,  -273,  -273,   163,   172,   251,   251,   168,   170,   348,
     174,    13,   251,  -273,   348,    57,   175,   251,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,   171,  -273,  -273,  -273,
     162,   166,  -273,   177,  -273,  -273,   348,   179,   182,   176,
    -273,  -273,   374,   374,   374,   374,   189,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   192,   193,   348,  -273,
    -273,   195,   205,   209,   348,   202,  -273,   348,   208,   206,
      34,  -273,  -273,  -273,   348,  -273,   374,   384,   173,   -44,
      31,    31,  -273,   -11,   -11,   -11,   -11,    67,    67,  -273,
    -273,  -273,   210,   251,  -273,  -273,  -273,    41,   211,   215,
     207,  -273,   216,  -273,  -273,  -273,   218,  -273,  -273,   348,
     219,   348,   209,   300,   251,  -273,   221,  -273,   222,  -273,
    -273,   223,   225,  -273,   284,   285,  -273,  -273,  -273,  -273,
     209,   348,   348,   251,   227,   228,   231,  -273,   251,   300,
     300,  -273,   291,  -273,   300,  -273
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -273,  -273,  -273,  -273,   302,  -273,   304,   292,   155,  -273,
    -273,   283,   151,  -273,   275,  -273,   272,     8,  -273,   230,
    -273,  -273,   265,  -273,  -273,  -273,  -273,   274,  -273,    40,
    -156,  -273,  -169,  -273,  -272,  -273,  -273,  -235,  -273,  -273,
    -273,  -273,  -273,    38,  -273,  -273,  -273,  -273,  -128,  -138,
    -273,   183,   137,   -91,   -68,   -89,  -137,   105,  -273,  -273,
    -125,  -115,   -93,  -273,  -227,  -273,  -273
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -139
static const yytype_int16 yytable[] =
{
     188,   284,   198,   189,   200,   201,    12,   266,   232,   221,
     222,   204,   124,   190,   205,     1,   228,    74,    32,   125,
      32,     6,    13,    33,     7,    33,    18,   284,   284,    32,
       8,   226,   284,    75,    33,   191,   229,   188,   188,    16,
     189,   189,   276,    34,   188,    34,    17,   189,    19,   188,
     190,   190,   189,     9,    34,    58,    59,   190,   235,   206,
      76,    20,   190,    23,   302,   303,    65,    26,    65,   305,
     211,   212,   191,   191,   194,   195,   249,   250,   251,   191,
     254,    92,    24,    77,   191,    35,   260,   207,   208,   262,
      25,   196,    27,    79,    35,   259,    31,   270,    37,   267,
    -137,    88,   194,   195,   283,   288,   265,    59,    90,   110,
     209,   210,   113,   240,   241,   115,    41,   118,    93,   196,
     120,    79,   247,   248,   297,   188,    44,    47,   189,   301,
     283,   288,    46,   279,    52,   297,    53,    70,   190,   243,
     244,   245,   246,    60,   280,   188,   188,    71,   189,   189,
     213,   214,   215,   295,   296,    73,    80,    81,   190,   190,
     191,    83,   259,    89,    91,   188,    94,    95,   189,    96,
     188,   188,   188,   189,   189,   189,   188,    97,   190,   189,
     191,   191,    36,   190,   190,   190,    99,    98,   100,   190,
     101,   103,   114,   111,   105,   102,   128,   104,   165,   107,
     191,   108,    67,   109,   112,   191,   191,   191,    67,   116,
     119,   191,   197,   121,   123,    84,    67,   122,   163,   126,
     127,   129,   130,    67,   162,   193,    67,   166,    84,   202,
     164,   192,   203,    67,  -138,   217,    67,   218,   131,   132,
     219,   220,   223,   233,   224,   216,   231,   133,   227,  -133,
     134,   234,    84,  -134,   236,    32,    84,   237,   242,    84,
      33,   252,    84,  -137,    84,   253,   255,    84,   135,   136,
     137,   138,   139,   167,   261,   168,   256,   140,   257,   263,
      34,   264,   273,   271,   269,   141,   131,   132,   272,   142,
     277,   274,   169,   275,   290,   133,   289,   291,   134,   292,
     -77,   293,   298,   299,    32,   170,   300,   304,    11,    33,
      15,    22,    40,    48,    54,    72,   135,   136,   137,   138,
     171,   172,   167,   173,   281,   174,   230,   106,   294,    34,
      82,     0,     0,    61,    32,   131,   132,    61,    32,    33,
     239,   169,   268,    33,   133,    74,    32,   134,     0,    62,
       0,    33,     0,    62,   282,     0,     0,     0,     0,    34,
       0,    75,     0,    34,     0,   135,   136,   137,   138,   171,
     172,    34,   173,    63,   174,     0,    64,    63,     0,     0,
      64,     0,    65,   131,   132,   238,    65,     0,    76,     0,
       0,     0,   133,     0,    65,   134,     0,     0,     0,    66,
       0,     0,     0,    35,     0,     0,     0,     0,     0,   131,
     132,    35,     0,   135,   136,   137,   138,   139,   133,   131,
     132,   134,   140,     0,     0,     0,     0,     0,   133,     0,
     141,   134,     0,     0,   142,     0,     0,     0,     0,   135,
     136,   137,   138,   199,     0,     0,     0,     0,   140,   135,
     136,   137,   138,   199,     0,     0,   141,     0,   140,     0,
     142,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     142
};

static const yytype_int16 yycheck[] =
{
     128,   273,   140,   128,   141,   142,     3,   234,   177,   165,
     166,    55,    69,   128,    58,    18,   172,     3,     4,    76,
       4,    40,    19,     9,     0,     9,    69,   299,   300,     4,
      40,   169,   304,    19,     9,   128,   174,   165,   166,    10,
     165,   166,   269,    29,   172,    29,    10,   172,    69,   177,
     165,   166,   177,    63,    29,    72,    73,   172,   196,    28,
      46,    17,   177,    69,   299,   300,    52,    68,    52,   304,
      81,    82,   165,   166,    61,    62,   213,   214,   215,   172,
     218,    73,    27,    69,   177,    69,   224,    56,    57,   227,
      70,    78,    39,    53,    69,   223,    70,   253,    40,   236,
      87,    61,    61,    62,   273,   274,    72,    73,    68,   101,
      79,    80,   104,   204,   205,   107,    40,   109,    78,    78,
     112,    81,   211,   212,   293,   253,    69,    40,   253,   298,
     299,   300,    69,   271,    69,   304,    40,    71,   253,   207,
     208,   209,   210,    74,   272,   273,   274,    40,   273,   274,
      83,    84,    85,   291,   292,    74,    71,    40,   273,   274,
     253,    69,   290,    52,    69,   293,    69,    69,   293,    75,
     298,   299,   300,   298,   299,   300,   304,    73,   293,   304,
     273,   274,    27,   298,   299,   300,    32,    69,    69,   304,
      74,    69,    44,    72,    70,    75,    70,    74,    70,    74,
     293,    74,    47,    74,    74,   298,   299,   300,    53,    69,
      75,   304,     9,    75,    75,    60,    61,    74,    76,    75,
      75,    75,    72,    68,    72,    69,    71,    70,    73,    60,
      77,    72,    59,    78,    87,    75,    81,    73,    35,    36,
      77,    69,    74,    72,    74,    87,    71,    44,    74,    87,
      47,    74,    97,    87,    75,     4,   101,    75,    69,   104,
       9,    69,   107,    87,   109,    72,    71,   112,    65,    66,
      67,    68,    69,    22,    72,    24,    71,    74,    69,    71,
      29,    75,    75,    72,    74,    82,    35,    36,    73,    86,
      71,    75,    41,    75,    72,    44,    75,    74,    47,    74,
      16,    16,    75,    75,     4,    54,    75,    16,     4,     9,
       8,    19,    29,    38,    42,    50,    65,    66,    67,    68,
      69,    70,    22,    72,    24,    74,   175,    97,   290,    29,
      56,    -1,    -1,     3,     4,    35,    36,     3,     4,     9,
     203,    41,   237,     9,    44,     3,     4,    47,    -1,    19,
      -1,     9,    -1,    19,    54,    -1,    -1,    -1,    -1,    29,
      -1,    19,    -1,    29,    -1,    65,    66,    67,    68,    69,
      70,    29,    72,    43,    74,    -1,    46,    43,    -1,    -1,
      46,    -1,    52,    35,    36,   202,    52,    -1,    46,    -1,
      -1,    -1,    44,    -1,    52,    47,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    35,
      36,    69,    -1,    65,    66,    67,    68,    69,    44,    35,
      36,    47,    74,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      82,    47,    -1,    -1,    86,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    74,    65,
      66,    67,    68,    69,    -1,    -1,    82,    -1,    74,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    89,    90,    93,    94,    40,     0,    40,    63,
      91,    94,     3,    19,    92,    92,    10,    10,    69,    69,
      17,    95,    95,    69,    27,    70,    68,    39,    97,    98,
      99,    70,     4,     9,    29,    69,    96,    40,   101,   102,
      99,    40,   103,   104,    69,   100,    69,    40,   102,   108,
     109,   110,    69,    40,   104,   113,   114,   115,    72,    73,
      74,     3,    19,    43,    46,    52,    69,    96,   111,   117,
      71,    40,   110,    74,     3,    19,    46,    69,   116,   117,
      71,    40,   115,    69,    96,   105,   106,   107,   117,    52,
     117,    69,   105,   117,    69,    69,    75,    73,    69,    32,
      69,    74,    75,    69,    74,    70,   107,    74,    74,    74,
     105,    72,    74,   105,    44,   105,    69,   112,   105,    75,
     105,    75,    74,    75,    69,    76,    75,    75,    70,    75,
      72,    35,    36,    44,    47,    65,    66,    67,    68,    69,
      74,    82,    86,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,    72,    76,    77,    70,    70,    22,    24,    41,
      54,    69,    70,    72,    74,    96,   118,   119,   120,   121,
     122,   123,   124,   127,   129,   132,   133,   134,   136,   148,
     149,   150,    72,    69,    61,    62,    78,     9,   137,    69,
     144,   144,    60,    59,    55,    58,    28,    56,    57,    79,
      80,    81,    82,    83,    84,    85,    87,    75,    73,    77,
      69,   118,   118,    74,    74,   135,   137,    74,   118,   137,
     100,    71,   120,    72,    74,   137,    75,    75,   139,   140,
     141,   141,    69,   142,   142,   142,   142,   143,   143,   144,
     144,   144,    69,    72,   137,    71,    71,    69,   131,   136,
     137,    72,   137,    71,    75,    72,   152,   144,   145,    74,
     118,    72,    73,    75,    75,    75,   152,    71,   130,   137,
     136,    24,    54,   120,   122,   125,   126,   128,   120,    75,
      72,    74,    74,    16,   131,   137,   137,   120,    75,    75,
      75,   120,   125,   125,    16,   125
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 88 "joos.y"
    {theclassfile = makeCLASSFILE((yyvsp[(2) - (2)].class),NULL);}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 90 "joos.y"
    {theclassfile = (yyvsp[(1) - (1)].classfile);}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 99 "joos.y"
    {(yyval.class) = makeCLASS((yyvsp[(4) - (10)].stringconst),(yyvsp[(5) - (10)].stringconst),0,NULL,(yyvsp[(2) - (10)].modifier),(yyvsp[(7) - (10)].field),(yyvsp[(8) - (10)].constructor),(yyvsp[(9) - (10)].method));}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 103 "joos.y"
    {(yyval.modifier) = noneMod;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 105 "joos.y"
    {(yyval.modifier) = finalMod;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 107 "joos.y"
    {(yyval.modifier) = abstractMod;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 111 "joos.y"
    {(yyval.classfile) = makeCLASSFILE((yyvsp[(1) - (1)].class),NULL);}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 113 "joos.y"
    {(yyval.classfile) = makeCLASSFILE((yyvsp[(2) - (2)].class),(yyvsp[(1) - (2)].classfile));}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 118 "joos.y"
    {(yyval.class) = makeCLASS((yyvsp[(5) - (12)].stringconst),(yyvsp[(6) - (12)].stringconst),1,(yyvsp[(8) - (12)].stringconst),(yyvsp[(3) - (12)].modifier),NULL,(yyvsp[(10) - (12)].constructor),(yyvsp[(11) - (12)].method));}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 122 "joos.y"
    {(yyval.stringconst) = NULL;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 124 "joos.y"
    {(yyval.stringconst) = (yyvsp[(2) - (2)].stringconst);}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 128 "joos.y"
    {(yyval.type) = makeTYPEref((yyvsp[(1) - (1)].stringconst));}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 130 "joos.y"
    {(yyval.type) = makeTYPEchar();}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 132 "joos.y"
    {(yyval.type) = makeTYPEbool();}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 134 "joos.y"
    {(yyval.type) = makeTYPEint();}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 138 "joos.y"
    {(yyval.field) = NULL;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 140 "joos.y"
    {(yyval.field) = (yyvsp[(1) - (1)].field);}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 144 "joos.y"
    {(yyval.field) = (yyvsp[(1) - (1)].field);}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 146 "joos.y"
    {(yyval.field) = appendFIELD((yyvsp[(2) - (2)].field),(yyvsp[(1) - (2)].field));}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 150 "joos.y"
    {(yyval.field) = makeFIELDlist((yyvsp[(3) - (4)].id),(yyvsp[(2) - (4)].type));}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 154 "joos.y"
    {(yyval.id) = makeID((yyvsp[(1) - (1)].stringconst),NULL);}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 156 "joos.y"
    {(yyval.id) = makeID((yyvsp[(3) - (3)].stringconst),(yyvsp[(1) - (3)].id));}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 160 "joos.y"
    {(yyval.constructor) = (yyvsp[(1) - (1)].constructor);}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 162 "joos.y"
    {(yyval.constructor) = (yyvsp[(2) - (2)].constructor); (yyval.constructor)->next = (yyvsp[(1) - (2)].constructor);}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 167 "joos.y"
    {(yyval.constructor) = makeCONSTRUCTOR((yyvsp[(2) - (13)].stringconst),(yyvsp[(4) - (13)].formal),
                                    makeSTATEMENTsequence(
                                        makeSTATEMENTsupercons((yyvsp[(9) - (13)].argument)),
                                        (yyvsp[(12) - (13)].statement)
                                    ),
                                    NULL
                    );}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 177 "joos.y"
    {(yyval.constructor) = (yyvsp[(1) - (1)].constructor);}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 179 "joos.y"
    {(yyval.constructor) = (yyvsp[(2) - (2)].constructor); (yyval.constructor)->next = (yyvsp[(1) - (2)].constructor);}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 183 "joos.y"
    {(yyval.constructor) = makeCONSTRUCTOR((yyvsp[(2) - (6)].stringconst),(yyvsp[(4) - (6)].formal),NULL,NULL);}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 187 "joos.y"
    {(yyval.formal) = NULL;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 189 "joos.y"
    {(yyval.formal) = (yyvsp[(1) - (1)].formal);}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 193 "joos.y"
    {(yyval.formal) = (yyvsp[(1) - (1)].formal);}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 195 "joos.y"
    {(yyval.formal) = (yyvsp[(3) - (3)].formal); (yyval.formal)->next = (yyvsp[(1) - (3)].formal);}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 199 "joos.y"
    {(yyval.formal) = makeFORMAL((yyvsp[(2) - (2)].stringconst),(yyvsp[(1) - (2)].type),NULL);}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 203 "joos.y"
    {(yyval.method) = NULL;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 205 "joos.y"
    {(yyval.method) = (yyvsp[(1) - (1)].method);}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 209 "joos.y"
    {(yyval.method) = (yyvsp[(1) - (1)].method);}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 211 "joos.y"
    {(yyval.method) = (yyvsp[(2) - (2)].method); (yyval.method)->next = (yyvsp[(1) - (2)].method);}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 215 "joos.y"
    {(yyval.method) = makeMETHOD((yyvsp[(4) - (10)].stringconst),(yyvsp[(2) - (10)].modifier),(yyvsp[(3) - (10)].type),(yyvsp[(6) - (10)].formal),(yyvsp[(9) - (10)].statement),NULL);}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 217 "joos.y"
    {(yyval.method) = makeMETHOD((yyvsp[(3) - (9)].stringconst),noneMod,(yyvsp[(2) - (9)].type),(yyvsp[(5) - (9)].formal),(yyvsp[(8) - (9)].statement),NULL);}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 219 "joos.y"
    {(yyval.method) = makeMETHOD((yyvsp[(4) - (8)].stringconst),abstractMod,(yyvsp[(3) - (8)].type),(yyvsp[(6) - (8)].formal),NULL,NULL);}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 221 "joos.y"
    {(yyval.method) = makeMETHOD("main",staticMod,makeTYPEvoid(),NULL,(yyvsp[(9) - (10)].statement),NULL);}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 225 "joos.y"
    {(yyval.modifier) = finalMod;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 227 "joos.y"
    {(yyval.modifier) = synchronizedMod;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 231 "joos.y"
    {if (strcmp((yyvsp[(1) - (4)].stringconst),"String")!=0) yyerror("type String expected");}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 233 "joos.y"
    {if (strcmp((yyvsp[(1) - (4)].stringconst),"String")!=0) yyerror("type String expected");}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 237 "joos.y"
    {(yyval.method) = NULL;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 239 "joos.y"
    {(yyval.method) = (yyvsp[(1) - (1)].method);}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 243 "joos.y"
    {(yyval.method) = (yyvsp[(1) - (1)].method);}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 245 "joos.y"
    {(yyval.method) = (yyvsp[(2) - (2)].method); (yyval.method)->next = (yyvsp[(1) - (2)].method);}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 249 "joos.y"
    {(yyval.method) = makeMETHOD((yyvsp[(4) - (8)].stringconst),(yyvsp[(2) - (8)].modifier),(yyvsp[(3) - (8)].type),(yyvsp[(6) - (8)].formal),NULL,NULL);}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 251 "joos.y"
    {(yyval.method) = makeMETHOD((yyvsp[(3) - (7)].stringconst),noneMod,(yyvsp[(2) - (7)].type),(yyvsp[(5) - (7)].formal),NULL,NULL);}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 255 "joos.y"
    {(yyval.modifier) = finalMod;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 257 "joos.y"
    {(yyval.modifier) = abstractMod;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 259 "joos.y"
    {(yyval.modifier) = synchronizedMod;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 264 "joos.y"
    {(yyval.type) = makeTYPEvoid();}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 266 "joos.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 270 "joos.y"
    {(yyval.statement) = NULL;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 272 "joos.y"
    {(yyval.statement) = (yyvsp[(1) - (1)].statement);}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 276 "joos.y"
    {(yyval.statement) = (yyvsp[(1) - (1)].statement);}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 278 "joos.y"
    {(yyval.statement) = makeSTATEMENTsequence((yyvsp[(1) - (2)].statement),(yyvsp[(2) - (2)].statement));}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 282 "joos.y"
    {(yyval.statement) = (yyvsp[(1) - (1)].statement);}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 284 "joos.y"
    {(yyval.statement) = (yyvsp[(1) - (1)].statement);}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 286 "joos.y"
    {(yyval.statement) = (yyvsp[(1) - (1)].statement);}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 288 "joos.y"
    {(yyval.statement) = (yyvsp[(1) - (1)].statement);}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 290 "joos.y"
    {(yyval.statement) = (yyvsp[(1) - (1)].statement);}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 292 "joos.y"
    {(yyval.statement) = (yyvsp[(1) - (1)].statement);}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 296 "joos.y"
    {(yyval.statement) = makeSTATEMENTlocal(makeLOCALlist((yyvsp[(2) - (3)].id),(yyvsp[(1) - (3)].type)));}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 300 "joos.y"
    {(yyval.statement) = makeSTATEMENTskip();}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 302 "joos.y"
    {(yyval.statement) = makeSTATEMENTblock((yyvsp[(2) - (3)].statement));}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 304 "joos.y"
    {(yyval.statement) = (yyvsp[(1) - (1)].statement);}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 306 "joos.y"
    {(yyval.statement) = (yyvsp[(1) - (1)].statement);}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 310 "joos.y"
    {(yyval.statement) = makeSTATEMENTif((yyvsp[(3) - (5)].exp),(yyvsp[(5) - (5)].statement));}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 314 "joos.y"
    {(yyval.statement) = makeSTATEMENTifelse((yyvsp[(3) - (7)].exp),(yyvsp[(5) - (7)].statement),(yyvsp[(7) - (7)].statement));}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 318 "joos.y"
    {(yyval.statement) = (yyvsp[(1) - (1)].statement);}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 320 "joos.y"
    {(yyval.statement) = (yyvsp[(1) - (1)].statement);}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 322 "joos.y"
    {(yyval.statement) = (yyvsp[(1) - (1)].statement);}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 327 "joos.y"
    {(yyval.statement) = makeSTATEMENTifelse((yyvsp[(3) - (7)].exp),(yyvsp[(5) - (7)].statement),(yyvsp[(7) - (7)].statement));}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 331 "joos.y"
    {(yyval.statement) = makeSTATEMENTwhile((yyvsp[(3) - (5)].exp),(yyvsp[(5) - (5)].statement));}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 335 "joos.y"
    {(yyval.statement) = makeSTATEMENTwhile((yyvsp[(3) - (5)].exp),(yyvsp[(5) - (5)].statement));}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 340 "joos.y"
    { (yyval.statement) = makeSTATEMENTsequence( (yyvsp[(3) - (9)].statement) , makeSTATEMENTwhile( (yyvsp[(5) - (9)].exp) , makeSTATEMENTsequence((yyvsp[(9) - (9)].statement),(yyvsp[(7) - (9)].statement) ))) ; }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 344 "joos.y"
    { (yyval.exp) = makeEXPboolconst(1) ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 346 "joos.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp) ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 350 "joos.y"
    {(yyval.statement) = NULL;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 352 "joos.y"
    { (yyval.statement) = makeSTATEMENTexp((yyvsp[(1) - (1)].exp)) ; }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 354 "joos.y"
    { (yyval.statement) = makeSTATEMENTsequence ( makeSTATEMENTexp((yyvsp[(1) - (3)].exp)) , makeSTATEMENTexp((yyvsp[(3) - (3)].exp))) ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 357 "joos.y"
    {(yyval.statement) = makeSTATEMENTexp((yyvsp[(1) - (2)].exp));}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 361 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 363 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 365 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 369 "joos.y"
    {(yyval.statement) = makeSTATEMENTreturn((yyvsp[(2) - (3)].exp));}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 373 "joos.y"
    {(yyval.exp) = NULL;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 375 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 379 "joos.y"
    {(yyval.exp) = makeEXPassign((yyvsp[(1) - (3)].stringconst),(yyvsp[(3) - (3)].exp));}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 381 "joos.y"
    { (yyval.exp) = makeEXPassign((yyvsp[(1) - (2)].stringconst), makeEXPplus(makeEXPid((yyvsp[(1) - (2)].stringconst)) , makeEXPintconst(1))); }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 383 "joos.y"
    { (yyval.exp) = makeEXPassign((yyvsp[(1) - (2)].stringconst), makeEXPminus( makeEXPid((yyvsp[(1) - (2)].stringconst)) , makeEXPintconst(1))); }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 387 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 389 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 393 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 395 "joos.y"
    {(yyval.exp) = makeEXPor((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp));}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 399 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 401 "joos.y"
    {(yyval.exp) = makeEXPand((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp));}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 405 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 407 "joos.y"
    {(yyval.exp) = makeEXPeq((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp));}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 409 "joos.y"
    {(yyval.exp) = makeEXPneq((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp));}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 413 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 415 "joos.y"
    {(yyval.exp) = makeEXPlt((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp));}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 417 "joos.y"
    {(yyval.exp) = makeEXPgt((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp));}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 419 "joos.y"
    {(yyval.exp) = makeEXPleq((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp));}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 421 "joos.y"
    {(yyval.exp) = makeEXPgeq((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp));}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 423 "joos.y"
    {(yyval.exp) = makeEXPinstanceof((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].stringconst));}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 427 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 429 "joos.y"
    {(yyval.exp) = makeEXPplus((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp));}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 431 "joos.y"
    {(yyval.exp) = makeEXPminus((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp));}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 435 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 437 "joos.y"
    {(yyval.exp) = makeEXPtimes((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp));}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 439 "joos.y"
    {(yyval.exp) = makeEXPdiv((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp));}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 441 "joos.y"
    {(yyval.exp) = makeEXPmod((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp));}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 445 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 447 "joos.y"
    {(yyval.exp) = makeEXPuminus((yyvsp[(2) - (2)].exp));}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 452 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 454 "joos.y"
    {(yyval.exp) = makeEXPnot((yyvsp[(2) - (2)].exp));}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 456 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 459 "joos.y"
    {if ((yyvsp[(2) - (4)].exp)->kind!=idK) yyerror("identifier expected");
                  (yyval.exp) = makeEXPcast((yyvsp[(2) - (4)].exp)->val.idE.name,(yyvsp[(4) - (4)].exp));}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 462 "joos.y"
    {(yyval.exp) = makeEXPcharcast((yyvsp[(4) - (4)].exp));}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 466 "joos.y"
    {(yyval.exp) = makeEXPid((yyvsp[(1) - (1)].stringconst));}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 468 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 472 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 474 "joos.y"
    {(yyval.exp) = makeEXPthis();}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 476 "joos.y"
    {(yyval.exp) = (yyvsp[(2) - (3)].exp);}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 478 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 480 "joos.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 484 "joos.y"
    {(yyval.exp) = makeEXPnew((yyvsp[(2) - (5)].stringconst),(yyvsp[(4) - (5)].argument));}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 488 "joos.y"
    {(yyval.exp) = makeEXPinvoke((yyvsp[(1) - (6)].receiver),(yyvsp[(3) - (6)].stringconst),(yyvsp[(5) - (6)].argument));}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 492 "joos.y"
    {(yyval.receiver) = makeRECEIVERobject(makeEXPid((yyvsp[(1) - (1)].stringconst)));}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 494 "joos.y"
    {(yyval.receiver) = makeRECEIVERobject((yyvsp[(1) - (1)].exp));}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 496 "joos.y"
    {(yyval.receiver) = makeRECEIVERsuper();}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 500 "joos.y"
    {(yyval.argument) = NULL;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 502 "joos.y"
    {(yyval.argument) = (yyvsp[(1) - (1)].argument);}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 506 "joos.y"
    {(yyval.argument) = makeARGUMENT((yyvsp[(1) - (1)].exp),NULL);}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 508 "joos.y"
    {(yyval.argument) = makeARGUMENT((yyvsp[(3) - (3)].exp),(yyvsp[(1) - (3)].argument));}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 512 "joos.y"
    {(yyval.exp) = makeEXPintconst((yyvsp[(1) - (1)].intconst));}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 514 "joos.y"
    {(yyval.exp) = makeEXPboolconst((yyvsp[(1) - (1)].boolconst));}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 516 "joos.y"
    {(yyval.exp) = makeEXPcharconst((yyvsp[(1) - (1)].charconst));}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 518 "joos.y"
    {(yyval.exp) = makeEXPstringconst((yyvsp[(1) - (1)].stringconst));}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 520 "joos.y"
    {(yyval.exp) = makeEXPnull();}
    break;



/* Line 1455 of yacc.c  */
#line 2837 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



