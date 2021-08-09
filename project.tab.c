
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
#line 3 "project.y"

  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <ctype.h>
  int yylex(void);
  int yyerror(char *);
  typedef struct collection
   {
       char *var_name;
       char *var_type;
	   char *char_value;
       int   int_value;
       float float_value;
   }values;

   values numbers[1000];
   char *variableType;
   int which_is_used_now = 0;
   int which_is_used_now_for_array=300;
   int array_increament=0,flag=1,eitherval=1,caseval=0,caseflag=1,k=0;
   void Array_store_int(char *name,int size);
   void Array_store_float(char *name, int size);
   void Array_store_char(char *name, int size);
   int Check_Array_Variable (char *name);
   int Check_int_float_char_Variable(char *name);
   void Array_store_int_with_value(char *name,int array_position,int value,int position);
   void Array_store_float_with_value(char *name,int array_position,float value,int position);
   void IntValue  (values *pointer,char *name , int value );
   void FloatValue(values *pointer,char *name , float value );
   void CharValue(values *pointer,char *name , char *value );
   void What_Values_Are_In_VariableBox();
   void Sorting(int position,char *name);
   void SortingDes(int position,char *name);
   int Length (int position);
   void Display(int position);
   void Display_sentences(char *sentences);
   
   
   


/* Line 189 of yacc.c  */
#line 116 "project.tab.c"

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
     PUJA = 258,
     LEFT = 259,
     RIGHT = 260,
     LEFTBRACE = 261,
     RIGHTBRACE = 262,
     LEFTTHIRD = 263,
     RIGHTTHIRD = 264,
     COMMA = 265,
     SEMICOLON = 266,
     PLUS = 267,
     MINUS = 268,
     MUL = 269,
     DIV = 270,
     TYPE_FLOAT = 271,
     TYPE_INT = 272,
     ARRAY = 273,
     DESSORTT = 274,
     LENGTHSTRING = 275,
     EQUAL = 276,
     EQUALEQUAL = 277,
     LESSTHAN = 278,
     GREATERTHAN = 279,
     PRINT = 280,
     MOD = 281,
     SORTT = 282,
     IF = 283,
     LAST = 284,
     EITHER = 285,
     NOTEQUAL = 286,
     AND = 287,
     OR = 288,
     INCREASE = 289,
     DECREASE = 290,
     FOR = 291,
     WHILE = 292,
     CASE = 293,
     SWITCH = 294,
     INT = 295,
     FLOAT = 296,
     CHAR = 297,
     VARIABLE = 298,
     STRING = 299
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 46 "project.y"

      char     *str;
      int      integer;
      float    float_val;



/* Line 214 of yacc.c  */
#line 204 "project.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 216 "project.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   210

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNRULES -- Number of states.  */
#define YYNSTATES  198

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    11,    14,    17,    20,    23,
      26,    29,    32,    38,    39,    50,    51,    52,    53,    71,
      72,    73,    90,    91,    98,    99,   100,   108,   109,   117,
     118,   121,   143,   165,   169,   173,   178,   183,   188,   196,
     204,   212,   220,   228,   234,   240,   241,   244,   250,   256,
     258,   260,   264,   268,   272,   276,   280,   282,   284,   288,
     292,   296,   300,   304,   308,   310,   312,   316,   320,   324
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,     3,    47,    -1,     6,    48,     7,    -1,
      -1,    48,    64,    -1,    48,    65,    -1,    48,    67,    -1,
      48,    49,    -1,    48,    56,    -1,    48,    62,    -1,    48,
      63,    -1,    28,    69,     6,    61,     7,    -1,    -1,    28,
      69,     6,    61,     7,    50,    29,     6,    61,     7,    -1,
      -1,    -1,    -1,    28,    69,     6,    61,     7,    51,    30,
      69,    52,     6,    61,     7,    53,    29,     6,    61,     7,
      -1,    -1,    -1,    28,    69,     6,    61,    28,    69,    54,
       6,    61,     7,    55,    29,     6,    61,     7,     7,    -1,
      -1,    39,    43,    57,     4,    58,     5,    -1,    -1,    -1,
      58,    38,    40,    59,     6,    61,     7,    -1,    -1,    58,
      38,    41,     6,    60,    61,     7,    -1,    -1,    61,    65,
      -1,    36,    43,    21,    40,    10,    43,    23,    40,    10,
      43,    34,     4,    25,     4,    43,     4,    43,     5,     5,
      11,     5,    -1,    36,    43,    21,    40,    10,    43,    24,
      40,    10,    43,    35,     4,    25,     4,    43,     4,    43,
       5,     5,    11,     5,    -1,    27,    43,    11,    -1,    19,
      43,    11,    -1,    43,    21,    40,    11,    -1,    43,    21,
      41,    11,    -1,    43,    21,    44,    11,    -1,    18,    17,
      43,     4,    40,     5,    11,    -1,    18,    16,    43,     4,
      40,     5,    11,    -1,    43,     4,    40,     5,    21,    40,
      11,    -1,    43,     4,    40,     5,    21,    41,    11,    -1,
      43,    21,    20,     4,    43,     5,    11,    -1,    25,     4,
      44,     5,    11,    -1,    25,     4,    66,     5,    11,    -1,
      -1,    66,    43,    -1,    17,    43,    21,    68,    11,    -1,
      16,    43,    21,    70,    11,    -1,    40,    -1,    43,    -1,
      68,    12,    68,    -1,    68,    13,    68,    -1,    68,    14,
      68,    -1,    68,    15,    68,    -1,    68,    26,    68,    -1,
      40,    -1,    43,    -1,    69,    24,    69,    -1,    69,    23,
      69,    -1,    69,    22,    69,    -1,    69,    31,    69,    -1,
      69,    33,    69,    -1,    69,    32,    69,    -1,    41,    -1,
      43,    -1,    70,    12,    70,    -1,    70,    13,    70,    -1,
      70,    14,    70,    -1,    70,    15,    70,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    73,    78,    79,    80,    81,    82,    83,
      84,    85,    89,    90,    90,    92,    92,    93,    92,    96,
      96,    96,   101,   101,   106,   107,   107,   109,   109,   113,
     114,   118,   159,   203,   208,   214,   226,   238,   251,   266,
     280,   297,   315,   338,   343,   346,   347,   363,   381,   399,
     400,   418,   419,   420,   421,   422,   426,   427,   445,   452,
     458,   465,   472,   479,   488,   489,   507,   508,   509,   510
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PUJA", "LEFT", "RIGHT", "LEFTBRACE",
  "RIGHTBRACE", "LEFTTHIRD", "RIGHTTHIRD", "COMMA", "SEMICOLON", "PLUS",
  "MINUS", "MUL", "DIV", "TYPE_FLOAT", "TYPE_INT", "ARRAY", "DESSORTT",
  "LENGTHSTRING", "EQUAL", "EQUALEQUAL", "LESSTHAN", "GREATERTHAN",
  "PRINT", "MOD", "SORTT", "IF", "LAST", "EITHER", "NOTEQUAL", "AND", "OR",
  "INCREASE", "DECREASE", "FOR", "WHILE", "CASE", "SWITCH", "INT", "FLOAT",
  "CHAR", "VARIABLE", "STRING", "$accept", "program", "body", "statements",
  "ifeitherlast", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "switchcase",
  "$@7", "casing", "$@8", "$@9", "if_statement", "loop", "sorting",
  "declaration", "printf", "variable_name", "expressions", "number",
  "numberr", "fnumber", 0
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
     295,   296,   297,   298,   299
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    48,    48,    48,    48,    48,    48,
      48,    48,    49,    50,    49,    51,    52,    53,    49,    54,
      55,    49,    57,    56,    58,    59,    58,    60,    58,    61,
      61,    62,    62,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    64,    65,    65,    66,    66,    67,    67,    68,
      68,    68,    68,    68,    68,    68,    69,    69,    69,    69,
      69,    69,    69,    69,    70,    70,    70,    70,    70,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     0,     2,     2,     2,     2,     2,
       2,     2,     5,     0,    10,     0,     0,     0,    17,     0,
       0,    16,     0,     6,     0,     0,     7,     0,     7,     0,
       2,    21,    21,     3,     3,     4,     4,     4,     7,     7,
       7,     7,     7,     5,     5,     0,     2,     5,     5,     1,
       1,     3,     3,     3,     3,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     1,     1,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     4,     2,     1,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,     5,     6,     7,     0,     0,     0,     0,     0,
      45,     0,    56,    57,     0,     0,    22,     0,     0,     0,
       0,     0,     0,    34,     0,     0,    33,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,    49,    50,     0,     0,     0,     0,
       0,    46,     0,    60,    59,    58,    61,    63,    62,     0,
      24,     0,     0,    35,    36,    37,    48,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,    43,
      44,    12,     0,    30,     0,     0,     0,     0,    66,    67,
      68,    69,    51,    52,    53,    54,    55,     0,     0,     0,
       0,    19,     0,    23,     0,     0,     0,     0,    39,    38,
       0,     0,     0,     0,     0,    25,     0,    40,    41,    42,
      29,    16,    29,     0,     0,     0,    27,     0,     0,     0,
       0,     0,    29,    29,    14,    29,    20,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    28,    17,     0,     0,
       0,     0,    29,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,     0,    21,     0,     0,    18,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     4,     6,    18,   119,   120,   148,   171,   132,
     162,    19,    55,   105,   145,   153,    72,    20,    21,    22,
     103,    45,    24,    66,    34,    63
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -135
static const yytype_int16 yypact[] =
{
      13,    21,    29,  -135,  -135,  -135,     7,  -135,    -7,    18,
      99,    20,    64,    39,    27,    63,    85,    16,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,    87,   109,    88,    91,   118,
      92,   121,  -135,  -135,    33,   112,  -135,    95,     8,   -26,
      74,   133,   134,  -135,   135,     4,  -135,  -135,    27,    27,
      27,    27,    27,    27,   102,   137,   138,   140,   128,   136,
     139,  -135,  -135,    90,  -135,  -135,    66,   105,   106,   141,
     142,  -135,     5,    67,  -135,  -135,    67,    76,    65,   144,
    -135,   127,   113,  -135,  -135,  -135,  -135,   -26,   -26,   -26,
     -26,  -135,    74,    74,    74,    74,    74,   146,   150,  -135,
    -135,    89,    27,  -135,   114,     2,    80,   153,   108,   108,
    -135,  -135,    -4,    -4,  -135,  -135,  -135,   148,   149,   120,
     131,    62,   101,  -135,    86,   151,   152,   154,  -135,  -135,
     158,    27,   160,   129,   130,  -135,   161,  -135,  -135,  -135,
    -135,    62,  -135,   162,   163,   165,  -135,     6,   168,    34,
     125,   132,  -135,  -135,  -135,  -135,  -135,   143,   145,    35,
      37,    44,   147,   174,   175,  -135,  -135,  -135,   176,   156,
     159,   157,  -135,   179,   181,   182,    46,   155,   164,  -135,
     180,   185,   186,    51,  -135,   166,   167,  -135,   187,   188,
     189,   190,   191,   192,   194,   195,  -135,  -135
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -134,  -135,  -135,  -135,
     198,  -135,  -135,    17,   -48,   -15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -16
static const yytype_int16 yytable[] =
{
      73,    74,    75,    76,    77,    78,   147,   123,   149,    70,
      94,    95,   101,   154,     7,    61,     1,    62,   159,   160,
      37,   161,    96,     8,     9,    10,    11,     3,    57,     5,
      12,    12,    12,   102,    13,    14,    25,    38,   176,    47,
     124,   156,   165,    15,   166,   183,    16,    71,    58,    59,
      17,   167,    60,   180,   121,    48,    49,    50,   187,    12,
      12,    26,    12,    29,    51,    52,    53,    32,    30,    12,
      33,    12,   108,   109,   110,   111,    12,    91,    92,    93,
      94,    95,    31,   141,    48,    49,    50,    48,    49,    50,
      49,    50,    96,    51,    52,    53,    51,    52,    48,    49,
      50,    86,    87,    88,    89,    90,    35,    51,    39,   112,
     113,   114,   115,   116,    64,    27,    28,    65,   -13,   -15,
     125,   126,    89,    90,   133,   134,   135,   136,    36,    43,
      40,    41,    46,    54,    42,    56,    44,    67,    68,    83,
      69,    80,    79,    81,    82,    97,    98,    84,   106,   130,
      85,   117,    99,   100,   104,   118,   107,   122,   127,   128,
     129,   131,   137,   138,   140,   139,   142,   146,   157,   143,
     144,   152,   150,   151,   155,   158,   168,   163,   169,   170,
     164,   173,   172,   177,   174,   178,   175,   184,   179,   185,
     186,     0,   190,   191,   192,   193,     0,     0,   181,   196,
     197,     0,   194,   195,    23,     0,     0,   182,     0,   188,
     189
};

static const yytype_int16 yycheck[] =
{
      48,    49,    50,    51,    52,    53,   140,     5,   142,     5,
      14,    15,     7,     7,     7,    41,     3,    43,   152,   153,
       4,   155,    26,    16,    17,    18,    19,     6,    20,     0,
      25,    25,    25,    28,    27,    28,    43,    21,   172,     6,
      38,     7,     7,    36,     7,   179,    39,    43,    40,    41,
      43,     7,    44,     7,   102,    22,    23,    24,     7,    25,
      25,    43,    25,    43,    31,    32,    33,    40,     4,    25,
      43,    25,    87,    88,    89,    90,    25,    11,    12,    13,
      14,    15,    43,   131,    22,    23,    24,    22,    23,    24,
      23,    24,    26,    31,    32,    33,    31,    32,    22,    23,
      24,    11,    12,    13,    14,    15,    43,    31,    21,    92,
      93,    94,    95,    96,    40,    16,    17,    43,    29,    30,
      40,    41,    14,    15,    23,    24,    40,    41,    43,    11,
      21,    43,    11,    21,    43,    40,    44,     4,     4,    11,
       5,     4,    40,     5,     4,    40,    40,    11,    21,    29,
      11,     5,    11,    11,    10,     5,    43,    43,     5,    11,
      11,    30,    11,    11,     6,    11,     6,     6,    43,    40,
      40,     6,    10,    10,     6,    43,    29,    34,     4,     4,
      35,    25,     6,     4,    25,     4,    29,     7,     6,     4,
       4,    -1,     5,     5,     5,     5,    -1,    -1,    43,     5,
       5,    -1,    11,    11,     6,    -1,    -1,    43,    -1,    43,
      43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    46,     6,    47,     0,    48,     7,    16,    17,
      18,    19,    25,    27,    28,    36,    39,    43,    49,    56,
      62,    63,    64,    65,    67,    43,    43,    16,    17,    43,
       4,    43,    40,    43,    69,    43,    43,     4,    21,    21,
      21,    43,    43,    11,    44,    66,    11,     6,    22,    23,
      24,    31,    32,    33,    21,    57,    40,    20,    40,    41,
      44,    41,    43,    70,    40,    43,    68,     4,     4,     5,
       5,    43,    61,    69,    69,    69,    69,    69,    69,    40,
       4,     5,     4,    11,    11,    11,    11,    12,    13,    14,
      15,    11,    12,    13,    14,    15,    26,    40,    40,    11,
      11,     7,    28,    65,    10,    58,    21,    43,    70,    70,
      70,    70,    68,    68,    68,    68,    68,     5,     5,    50,
      51,    69,    43,     5,    38,    40,    41,     5,    11,    11,
      29,    30,    54,    23,    24,    40,    41,    11,    11,    11,
       6,    69,     6,    40,    40,    59,     6,    61,    52,    61,
      10,    10,     6,    60,     7,     6,     7,    43,    43,    61,
      61,    61,    55,    34,    35,     7,     7,     7,    29,     4,
       4,    53,     6,    25,    25,    29,    61,     4,     4,     6,
       7,    43,    43,    61,     7,     4,     4,     7,    43,    43,
       5,     5,     5,     5,    11,    11,     5,     5
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
#line 70 "project.y"
    {printf("first line\n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 73 "project.y"
    {printf("the main code implemented\n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 79 "project.y"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 80 "project.y"
    {;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 81 "project.y"
    {;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 82 "project.y"
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 83 "project.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 84 "project.y"
    {;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 85 "project.y"
    {;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 89 "project.y"
    { flag=1;printf("if block was checked\n\n");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 90 "project.y"
    { if((yyvsp[(2) - (5)].integer)<=0) flag=1; else flag=0;;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 90 "project.y"
    { flag=1;printf("if last block was checked\n\n"); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 92 "project.y"
    { if((yyvsp[(2) - (5)].integer)>0){flag=0;eitherval=0;};}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 92 "project.y"
    {if(eitherval==0){ flag=0; } else{if((yyvsp[(8) - (8)].integer)==0)flag=0; else flag=1;};}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 93 "project.y"
    { if((yyvsp[(2) - (12)].integer)==0 && (yyvsp[(8) - (12)].integer)==0)flag=1;else flag=0;;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 93 "project.y"
    { flag=1; eitherval=1; printf("iflasteither block was checked\n\n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 96 "project.y"
    {if((yyvsp[(2) - (6)].integer)==0) flag=0;;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 96 "project.y"
    { if((yyvsp[(6) - (10)].integer)>0) flag=0; else{ if((yyvsp[(2) - (10)].integer)<=0)flag=0; else flag=1;};}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 97 "project.y"
    {flag=1;printf("nested if block was checked\n\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 101 "project.y"
    {caseval= Check_int_float_char_Variable((yyvsp[(2) - (2)].str));if (caseval<=0){printf("invalid\n");} 
                                 else if ( strcmp(variableType,"char")==0){printf("invalid variable type\n");}    
									 ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 103 "project.y"
    {caseflag=1;k=0; printf("switch block\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 107 "project.y"
    { if((numbers[caseval].int_value)==(yyvsp[(3) - (3)].integer) ){ k++; caseflag=1; if(k>1){caseflag=0;} }
	                                                   else {caseflag=0;} ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 108 "project.y"
    {if (caseflag==1) printf("right block\n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 109 "project.y"
    {if((numbers[caseval].float_value)==(yyvsp[(3) - (4)].float_val)) { k++;caseflag=1;  if(k>1){caseflag=0;} }
	                                                   else {caseflag=0;} ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 110 "project.y"
    {if (caseflag==1) printf("right block\n");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 118 "project.y"
    {
                                                                     int k,i,j,l; 
																	 char *input;
																	 l=Check_int_float_char_Variable ((yyvsp[(2) - (21)].str));
                                                                     if(l<0)
                                                                     {IntValue( &numbers[which_is_used_now] , (yyvsp[(2) - (21)].str) , (yyvsp[(4) - (21)].integer) );
																	  l=Check_int_float_char_Variable ((yyvsp[(2) - (21)].str));
																	  input=variableType;
																	  
																	 }
																     else {l=Check_int_float_char_Variable ((yyvsp[(2) - (21)].str));
																	 input=variableType;
																	 
																       }
                                                                     k=Check_Array_Variable((yyvsp[(15) - (21)].str)); 
																	 if(strcmp(input,"int")==0){
																	 if(k>=300)
                                                                     {for( numbers[l].int_value=(yyvsp[(4) - (21)].integer); numbers[l].int_value<(yyvsp[(8) - (21)].integer); numbers[l].int_value++)
                                                                       { 
												                        j= k+numbers[l].int_value;
																		
																	   if(strcmp(numbers[j].var_name,(yyvsp[(15) - (21)].str))==0)
                                                                        {
																		if(strcmp(numbers[j].var_type,"int")==0)
																		           printf("%d\n",numbers[j].int_value);
																		else
																		{
																		printf("%f\n",numbers[j].float_value);		   
																		  }
																		 
                                                                        } 
																		else
																		    printf("array variable type does not match\n"); 
																		
																		} printf("Succesful array print\n"); }
																		else
																		{ 
																		printf("invalid array variable\n");}}
																		else
																		 printf("invalid variable type declaration\n");
																		;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 159 "project.y"
    {
                                                                     int k,i,j,l; 
																	 char *input;
																	 l=Check_int_float_char_Variable ((yyvsp[(2) - (21)].str));
                                                                     if(l<0)
                                                                     {IntValue( &numbers[which_is_used_now] , (yyvsp[(2) - (21)].str) , (yyvsp[(4) - (21)].integer) );
																	  l=Check_int_float_char_Variable ((yyvsp[(2) - (21)].str));
																	  input=variableType;
																	  
																	 }
																     else {l=Check_int_float_char_Variable ((yyvsp[(2) - (21)].str));
																	 input=variableType;
																	 
																       }
                                                                     k=Check_Array_Variable((yyvsp[(15) - (21)].str)); 
																	 if(strcmp(input,"int")==0){
																	 if(k>=300)
                                                                     {for( numbers[l].int_value=(yyvsp[(4) - (21)].integer); numbers[l].int_value>(yyvsp[(8) - (21)].integer); numbers[l].int_value--)
                                                                       { 
												                        j= k+numbers[l].int_value;
																		
																	   if(strcmp(numbers[j].var_name,(yyvsp[(15) - (21)].str))==0)
                                                                        {
																		if(strcmp(numbers[j].var_type,"int")==0)
																		           printf("%d\n",numbers[j].int_value);
																		else
																		{
																		printf("%f\n",numbers[j].float_value);		   
																		  }
																		 
                                                                        } 
																		else
																		    printf("array variable type does not match\n"); 
																		
																		} printf("Succesful reversely array print\n"); }
																		else
																		{ 
																		printf("invalid array variable\n");}}
																		else
																		 printf("invalid variable type declaration\n");
																		;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 203 "project.y"
    { int k=Check_Array_Variable((yyvsp[(2) - (3)].str)); 
                                          if(k>=300)    
											  {Sorting(k,(yyvsp[(2) - (3)].str));} 
										 else
											{printf("array variable is not declared\n");}   printf("sort done\n");  ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 208 "project.y"
    { int k=Check_Array_Variable((yyvsp[(2) - (3)].str)); 
                                          if(k>=300)    
											  {SortingDes(k,(yyvsp[(2) - (3)].str));} 
										 else {printf("array variable is not declared\n");}
											  printf("reverse sort done\n");    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 214 "project.y"
    {int k=Check_int_float_char_Variable((yyvsp[(1) - (4)].str));
                                                 if(k<0)
                                                     IntValue( &numbers[which_is_used_now] , (yyvsp[(1) - (4)].str) , (yyvsp[(3) - (4)].integer) );
												 else
												 {if(strcmp(numbers[k].var_type,"int")==0)
												 numbers[k].int_value=(yyvsp[(3) - (4)].integer);
												 else
												  printf("invalid type as previously declared\n");
                                               }
											   printf("declaration section\n");
											  ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 226 "project.y"
    {int k=Check_int_float_char_Variable((yyvsp[(1) - (4)].str));
                                                       if(k<0)
			                                          FloatValue( &numbers[which_is_used_now] , (yyvsp[(1) - (4)].str) , (yyvsp[(3) - (4)].float_val) );
                                              	     	else
												 {if(strcmp(numbers[k].var_type,"float")==0)
												  { numbers[k].float_value=(yyvsp[(3) - (4)].float_val); }
												 else
												     printf("invalid type as previously declared\n");
                                               }
											       printf("float declaration section\n");   ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 238 "project.y"
    {int k=Check_int_float_char_Variable((yyvsp[(1) - (4)].str));
			                                              
                                                       if(k<0)
			                                              CharValue( &numbers[which_is_used_now] , (yyvsp[(1) - (4)].str) , (yyvsp[(3) - (4)].str) );
                                              	     	else
												 {if(strcmp(numbers[k].var_type,"char")==0)
												       numbers[k].char_value=(yyvsp[(3) - (4)].str);
												 else
												  printf("invalid type as previously declared\n");
                                               }
													 printf("string declaration section\n");	  
											         ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 251 "project.y"
    { if((yyvsp[(5) - (7)].integer)>1)
			                                                     { 
																 k=Check_Array_Variable((yyvsp[(3) - (7)].str));
																 if(k<300)
																   Array_store_int((yyvsp[(3) - (7)].str),(yyvsp[(5) - (7)].integer));
																  else
                                                                      printf("Previously declared\n"); 
                                                                     																  
																 }
																 else
																 {
																 printf("enter array size greater than one\n");
																 }
                                                                 printf("array INT value store\n");
			                                                     ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 266 "project.y"
    {if((yyvsp[(5) - (7)].integer)>1)
			                                                     {
																 k=Check_Array_Variable((yyvsp[(3) - (7)].str));
																 if(k<300)
																     Array_store_float((yyvsp[(3) - (7)].str),(yyvsp[(5) - (7)].integer));
																else
                                                                      printf("Previously declared\n");	 
																 }
																 else
																 { printf("enter array  size greater than one\n");
																 }
			                                       
			                                                     printf("ARRAY FLOAT value store\n");
													            ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 280 "project.y"
    {int k;
			                                                      
															     k=Check_Array_Variable((yyvsp[(1) - (7)].str));
																 
			                                                     if(k>=300)
			                                                    {
																 
																  Array_store_int_with_value ((yyvsp[(1) - (7)].str),(yyvsp[(3) - (7)].integer),(yyvsp[(6) - (7)].integer),k);
																}
																 else
																 { 
																 printf("Declaration is invalid\n");
																 }
			                                       
			                                                    printf("successful ARRAY store int type\n");
																 
													            ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 297 "project.y"
    {int k;
			                                                      
															     k=Check_Array_Variable((yyvsp[(1) - (7)].str));
																 
			                                                     if(k>=300)
			                                                    {
																 
																Array_store_float_with_value((yyvsp[(1) - (7)].str),(yyvsp[(3) - (7)].integer),(yyvsp[(6) - (7)].float_val),k);
																
																}
																 else
																 { 
																 printf("Declaration is invalid\n");
																 }
			                                       
			                                                    printf("successful ARRAY store float type\n");
																 
													            ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 315 "project.y"
    {int k,a,l;
                                      k=Check_int_float_char_Variable((yyvsp[(5) - (7)].str));
									  
                                       if (k<0){printf("invalid string variable declaration\n");}
                                       else
                                       {
									   if(strcmp(numbers[k].var_type,"char")==0)
									   { a=Length(k);
									     
									     l=Check_int_float_char_Variable((yyvsp[(1) - (7)].str));
                                         if(l>=0 && strcmp(numbers[l].var_type,"int")==0 )
                                          { numbers[l].int_value= a;  numbers[l].float_value= a; printf("length of string function was activated\n"); }	
										  else if(l<0)
										  { IntValue( &numbers[which_is_used_now] , (yyvsp[(1) - (7)].str) , a ); printf("length of string function was activated\n");}
										  else
										    {printf("invalid variable type\n");}
									   }
									   else
									     {printf("invalid string variable type\n");}
									   }									   

												 ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 338 "project.y"
    {
                                                                   if(flag>=1 && caseflag>=1)
                                                                   {Display_sentences((yyvsp[(3) - (5)].str));  printf("print string section\n");}
													            ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 343 "project.y"
    {  if(flag>=1 && caseflag>=1) printf("print variable section\n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 347 "project.y"
    { if(flag>=1 && caseflag>=1)
                                                                 {int k;
																 k=Check_int_float_char_Variable((yyvsp[(2) - (2)].str));
																 if(k>=0)
																 {
																 
																  Display(k);
																 
																  //printf("print variable section\n");
																  
																 }
																 else
																  printf("Invalid variable name\n");
																 };}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 363 "project.y"
    { flag=1;int k= Check_int_float_char_Variable((yyvsp[(2) - (5)].str));
							   if(k<0)
							   {
							  
							    IntValue( &numbers[which_is_used_now] , (yyvsp[(2) - (5)].str) , (yyvsp[(4) - (5)].integer) );
							   }
							   else
							    {
								 
								
								numbers[k].int_value=(yyvsp[(4) - (5)].integer);
								numbers[k].float_value=(yyvsp[(4) - (5)].integer);
								
								
								}
		
                               printf("successful expressions int \n"); 
							   ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 381 "project.y"
    { flag=1; int k= Check_int_float_char_Variable((yyvsp[(2) - (5)].str));
							   if(k<0)
							   {
							    FloatValue( &numbers[which_is_used_now] , (yyvsp[(2) - (5)].str) , (yyvsp[(4) - (5)].float_val) );
							   }
							   else
							    {
								 
								
								numbers[k].int_value=(yyvsp[(4) - (5)].float_val);
								numbers[k].float_value=(yyvsp[(4) - (5)].float_val);

								}
		
                               printf("successful expressions float\n"); 
							   ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 399 "project.y"
    { (yyval.integer)=(yyvsp[(1) - (1)].integer); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 400 "project.y"
    {
		                       int k= Check_int_float_char_Variable((yyvsp[(1) - (1)].str));
							   if(k<0)
							   {
							    printf("Declaration is invalid\n");
								
							   }
							   else
							    {
								if(strcmp(numbers[k].var_type,"int")==0)
								{
								(yyval.integer)=numbers[k].int_value;
								}
								else
								 printf("invalid type and should be int\n");
								}
		
		                         ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 418 "project.y"
    {(yyval.integer)= (yyvsp[(1) - (3)].integer) + (yyvsp[(3) - (3)].integer); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 419 "project.y"
    {(yyval.integer)=(yyvsp[(1) - (3)].integer) - (yyvsp[(3) - (3)].integer);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 420 "project.y"
    {(yyval.integer)=(yyvsp[(1) - (3)].integer) * (yyvsp[(3) - (3)].integer);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 421 "project.y"
    { if ((yyvsp[(3) - (3)].integer) != 0) { (yyval.integer) = (yyvsp[(1) - (3)].integer) / (yyvsp[(3) - (3)].integer);  } else printf ("ERROR: DIVISION BY ZERO\n"); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 422 "project.y"
    { if ((yyvsp[(3) - (3)].integer) != 0) { (yyval.integer) = (yyvsp[(1) - (3)].integer) % (yyvsp[(3) - (3)].integer);  } else printf ("ERROR: DIVISION BY ZERO\n"); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 426 "project.y"
    { (yyval.integer)=(yyvsp[(1) - (1)].integer); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 427 "project.y"
    {
		                       int k= Check_int_float_char_Variable((yyvsp[(1) - (1)].str));
							   if(k<0)
							   {
							    printf("Declaration is invalid\n");
								
							   }
							   else
							    {
								if(strcmp(numbers[k].var_type,"int")==0)
								{
								(yyval.integer)=numbers[k].int_value;
								}
								else
								 (yyval.integer)=numbers[k].float_value;
								}
		
		                         ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 445 "project.y"
    {if((yyvsp[(1) - (3)].integer)>(yyvsp[(3) - (3)].integer))
		                        
                                           {(yyval.integer)=1;
                                              flag=1;}	
											  else 
                                         {(yyval.integer)=0; flag=0;} 									 
									   ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 452 "project.y"
    {if((yyvsp[(1) - (3)].integer)<(yyvsp[(3) - (3)].integer))
		                                 {(yyval.integer)=1;
                                              flag=1;}										 
                                      else 
                                         {(yyval.integer)=0;flag=0;} 									  
									   ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 458 "project.y"
    {if((yyvsp[(1) - (3)].integer)==(yyvsp[(3) - (3)].integer))
		                        
                                           {(yyval.integer)=1;
                                              flag=1;}	
											  else 
                                         {(yyval.integer)=0; flag=0;} 									 
									   ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 465 "project.y"
    {if((yyvsp[(1) - (3)].integer)!=(yyvsp[(3) - (3)].integer))
		                        
                                           {(yyval.integer)=1;
                                              flag=1;}	
											  else 
                                         {(yyval.integer)=0; flag=0;} 									 
									   ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 472 "project.y"
    {if((yyvsp[(1) - (3)].integer) || (yyvsp[(3) - (3)].integer))
		                        
                                           {(yyval.integer)=1;
                                              flag=1;}	
											  else 
                                         {(yyval.integer)=0; flag=0;} 									 
									   ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 479 "project.y"
    {if((yyvsp[(1) - (3)].integer) && (yyvsp[(3) - (3)].integer))
		                        
                                           {(yyval.integer)=1;
                                              flag=1;}	
											  else 
                                         {(yyval.integer)=0; flag=0;} 									 
									   ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 488 "project.y"
    {(yyval.float_val)=(yyvsp[(1) - (1)].float_val);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 489 "project.y"
    {
		                       int k= Check_int_float_char_Variable((yyvsp[(1) - (1)].str));
							   if(k<0)
							   {
							    printf("Declaration is invalid\n");
								
							   }
							   else
							    {
								if(strcmp(numbers[k].var_type,"float")==0)
								{
								(yyval.float_val)=numbers[k].float_value;
								}
								else
								 (yyval.float_val)=numbers[k].int_value;
								}
		
		                         ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 507 "project.y"
    {(yyval.float_val)= (yyvsp[(1) - (3)].float_val) + (yyvsp[(3) - (3)].float_val);;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 508 "project.y"
    {(yyval.float_val)=(yyvsp[(1) - (3)].float_val) - (yyvsp[(3) - (3)].float_val);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 509 "project.y"
    {(yyval.float_val)=(yyvsp[(1) - (3)].float_val) * (yyvsp[(3) - (3)].float_val);;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 510 "project.y"
    { if ((yyvsp[(3) - (3)].float_val) != 0) { (yyval.float_val) = (yyvsp[(1) - (3)].float_val) / (yyvsp[(3) - (3)].float_val);  } else printf ("ERROR: DIVISION BY ZERO\n"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2347 "project.tab.c"
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



/* Line 1675 of yacc.c  */
#line 516 "project.y"

void IntValue(values *pointer,char *name , int value )
{
    pointer->var_type   = "int" ;
    pointer->var_name   = name  ;
    pointer->int_value  = value ;
    pointer->float_value = value;
	pointer->char_value = "int";
    which_is_used_now++ ;
}

void FloatValue(values *pointer,char *name , float value )
{
    pointer->var_type   = "float" ;
    pointer->var_name   = name  ;
    pointer->float_value = value ;
    pointer->int_value  = value    ;
	pointer->char_value = "float";
    which_is_used_now++ ;
}
void CharValue(values *pointer,char *name ,char *value )
{
int i,in=0;


    pointer->var_type   = "char" ;
    pointer->var_name   = name  ;
    pointer->float_value = -100009 ;
    pointer->int_value  = -100009     ;
	/*char *swap =(char*)malloc(numbers[which_is_used_now].int_value-1);
	//in=strlen(swap);
	
	for(i=1;i<numbers[which_is_used_now].int_value -1;i++)
	   { swap[i-1]=value[i];
	   
	   }*/
   
	pointer->char_value= value;
    which_is_used_now++ ;
}


int Check_int_float_char_Variable(char *name)
{
int i;
for(i=0;i<which_is_used_now;i++)
{
if(strcmp(numbers[i].var_name,name)==0)
{
variableType=numbers[i].var_type;
return i;
}
}
return -1;
}

void Array_store_int(char *name, int size)
{
int i=which_is_used_now_for_array;
which_is_used_now_for_array= i+size;

while(i<which_is_used_now_for_array)
{
 numbers[i].var_type   = "int" ;
   numbers[i].var_name   = name  ;
  numbers[i].float_value = size ;
  numbers[i].int_value  = size    ;
  numbers[i].char_value  = "int"    ;
	i++;
 }
}

void Array_store_float(char *name, int size)
{
int i=which_is_used_now_for_array;
which_is_used_now_for_array= i+size;

while(i<which_is_used_now_for_array)
{
 numbers[i].var_type   = "float" ;
 numbers[i].var_name   = name  ;
 numbers[i].float_value = size ;
 numbers[i].int_value  = size     ;
  numbers[i].char_value  = "float"    ;
	i++;
 }
}
int Check_Array_Variable (char *name)
{
int i,k;
for(i=300;i<which_is_used_now_for_array;i++)
{
 if(strcmp(numbers[i].var_name,name)==0)
 {
 //printf("%d\n",i);
 variableType=numbers[i].var_type;
 return i;
 }
 else
 continue;
}
return 0;
}

void Array_store_int_with_value(char *name,int array_position,int value,int position)
{
position=position+array_position;

if (array_position<numbers[position].float_value && strcmp(numbers[position].var_name,name)==0)
   {
   numbers[position].int_value=value;
  
   }
else
  printf("array assignment invalid\n");
}
void Array_store_float_with_value(char *name,int array_position,float value,int position)
{
position=position+array_position;

if (array_position<numbers[position].int_value && strcmp(numbers[position].var_name,name)==0)
   {
   numbers[position].float_value=value;
   }
else
  printf("array assignment invalid\n");
}
void Sorting (int position, char *name )
{
 if (strcmp(numbers[position].var_type,"int")==0)
  {int size,swap,c,d,i;
  size=numbers[position].float_value;
 
  int array[size];
    for(i=0;i<size;i++)
	  array[i]=numbers[position+i].int_value;
          
        for ( c = 0 ; c < size; c++)
        {
            for ( d = 0 ; d < size-1 ; d++)
            {
                if (array[d] > array[d+1]) 
                {
                   swap       = array[d];
                   array[d]   = array[d+1];
                   array[d+1] = swap;
                }
            }
        }
	for(i=0;i<size;i++)
	 numbers[position+i].int_value=  array[i];
		}
else
{int size,c,d,i;
float swap;
  size=numbers[position].int_value;
  float array[size];
    for(i=0;i<size;i++)
	  array[i]=numbers[position+i].float_value;
          
        for (int c = 0 ; c < size; c++)
        {
            for (int d = 0 ; d < size-1 ; d++)
            {
			if (array[d] > array[d+1]) 
                {
                   swap       = array[d];
                   array[d]   = array[d+1];
                   array[d+1] = swap;
                }
            }
        }
		for(i=0;i<size;i++)
	 numbers[position+i].float_value=  array[i];
		
		}		
}

void SortingDes (int position, char *name )
{
 if (strcmp(numbers[position].var_type,"int")==0)
  {int size,swap,c,d,i;
  size=numbers[position].float_value;
 
  int array[size];
    for(i=0;i<size;i++)
	  array[i]=numbers[position+i].int_value;
          
        for ( c = 0 ; c < size; c++)
        {
            for ( d = 0 ; d < size-1 ; d++)
            {
                if (array[d] < array[d+1]) 
                {
                   swap       = array[d];
                   array[d]   = array[d+1];
                   array[d+1] = swap;
                }
            }
        }
	for(i=0;i<size;i++)
	 numbers[position+i].int_value=  array[i];
		}
else
{int size,c,d,i;
float swap;
  size=numbers[position].int_value;
  float array[size];
    for(i=0;i<size;i++)
	  array[i]=numbers[position+i].float_value;
          
        for (int c = 0 ; c < size; c++)
        {
            for (int d = 0 ; d < size-1 ; d++)
            {
			if (array[d] < array[d+1]) 
                {
                   swap       = array[d];
                   array[d]   = array[d+1];
                   array[d+1] = swap;
                }
            }
        }
		for(i=0;i<size;i++)
	 numbers[position+i].float_value=  array[i];
		
		}	
}		
int Length(int position)
{ 
int aa;
aa=strlen(numbers[position].char_value);
aa=aa-2;
return aa;
}
void Display (int position)
{
if(strcmp(numbers[position].var_type,"float")==0)
{
printf("%f ",numbers[position].float_value);
}
else if(strcmp(numbers[position].var_type,"int")==0)
{
printf("%d ",numbers[position].int_value);
}
else
{

int length= strlen(numbers[position].char_value);
int i;
for(i=1;i<length-1;i++)
{

printf("%c",numbers[position].char_value[i]);
}
printf(" ");
}
}

void Display_sentences (char *sentences)
{ 
int length= strlen(sentences);
int i;
char a,c;
for(i=1;i<length-1;i++)
{
/*a=sentences[i];
c=sentences[i+1];
if(strcmp(a,"|")==0 && strcmp(c,"n")==0)
{
printf("\n");
i++;
}
else
{
printf("%c",sentences[i]);
}*/


printf("%c",sentences[i]);
}
}


int yywrap()
{
return 1;
}
int yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}
int main(void) {
  freopen("input.txt", "r", stdin);
    yyparse();
}         
