/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "js.y" /* yacc.c:339  */


	#define YYDEBUG 1

	#include "js.h"

	void LOG(const char *str)
	{
		printf("%s\n", str);
	}
    //int yydebug = 1;

#line 79 "y.tab.c" /* yacc.c:339  */

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
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    l_await = 258,
    l_break = 259,
    l_case = 260,
    l_catch = 261,
    l_class = 262,
    l_const = 263,
    l_continue = 264,
    l_debugger = 265,
    l_default = 266,
    l_delete = 267,
    l_do = 268,
    l_else = 269,
    l_enum = 270,
    l_export = 271,
    l_extends = 272,
    l_false = 273,
    l_finally = 274,
    l_for = 275,
    l_function = 276,
    l_if = 277,
    l_import = 278,
    l_in = 279,
    l_instanceof = 280,
    l_let = 281,
    l_name = 282,
    l_new = 283,
    l_null = 284,
    l_num = 285,
    l_return = 286,
    l_str = 287,
    l_super = 288,
    l_switch = 289,
    l_symb = 290,
    l_this = 291,
    l_throw = 292,
    l_true = 293,
    l_try = 294,
    l_typeof = 295,
    l_var = 296,
    l_void = 297,
    l_while = 298,
    l_with = 299,
    l_yield = 300,
    l_constructor = 301,
    l_get = 302,
    l_set = 303,
    l_static = 304,
    l_any_char = 305,
    l_from = 306,
    l_async = 307,
    o_addeq = 308,
    o_and = 309,
    o_andeq = 310,
    o_arrow = 311,
    o_dblcolon = 312,
    o_dec = 313,
    o_diveq = 314,
    o_eqeq = 315,
    o_inc = 316,
    o_lesseq = 317,
    o_lsh = 318,
    o_lsheq = 319,
    o_mlteq = 320,
    o_modeq = 321,
    o_moreeq = 322,
    o_noteq = 323,
    o_or = 324,
    o_oreq = 325,
    o_rsh = 326,
    o_rsheq = 327,
    o_subeq = 328,
    o_xoreq = 329,
    o_noteqeq = 330,
    o_eqeqeq = 331,
    o_rshsh = 332,
    o_rshsheq = 333
  };
#endif
/* Tokens.  */
#define l_await 258
#define l_break 259
#define l_case 260
#define l_catch 261
#define l_class 262
#define l_const 263
#define l_continue 264
#define l_debugger 265
#define l_default 266
#define l_delete 267
#define l_do 268
#define l_else 269
#define l_enum 270
#define l_export 271
#define l_extends 272
#define l_false 273
#define l_finally 274
#define l_for 275
#define l_function 276
#define l_if 277
#define l_import 278
#define l_in 279
#define l_instanceof 280
#define l_let 281
#define l_name 282
#define l_new 283
#define l_null 284
#define l_num 285
#define l_return 286
#define l_str 287
#define l_super 288
#define l_switch 289
#define l_symb 290
#define l_this 291
#define l_throw 292
#define l_true 293
#define l_try 294
#define l_typeof 295
#define l_var 296
#define l_void 297
#define l_while 298
#define l_with 299
#define l_yield 300
#define l_constructor 301
#define l_get 302
#define l_set 303
#define l_static 304
#define l_any_char 305
#define l_from 306
#define l_async 307
#define o_addeq 308
#define o_and 309
#define o_andeq 310
#define o_arrow 311
#define o_dblcolon 312
#define o_dec 313
#define o_diveq 314
#define o_eqeq 315
#define o_inc 316
#define o_lesseq 317
#define o_lsh 318
#define o_lsheq 319
#define o_mlteq 320
#define o_modeq 321
#define o_moreeq 322
#define o_noteq 323
#define o_or 324
#define o_oreq 325
#define o_rsh 326
#define o_rsheq 327
#define o_subeq 328
#define o_xoreq 329
#define o_noteqeq 330
#define o_eqeqeq 331
#define o_rshsh 332
#define o_rshsheq 333

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 286 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  244
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3984

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  343
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  646

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   333

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    79,     2,     2,     2,    80,    81,     2,
      82,    83,    84,    85,    86,    87,    88,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    90,    91,
      92,    93,    94,    95,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    96,    97,    98,    99,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   100,   101,   102,   103,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    61,    61,    64,    65,    68,    69,    72,    73,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   113,   114,   115,   116,   119,   120,
     121,   122,   125,   126,   129,   132,   133,   136,   137,   140,
     141,   142,   143,   144,   145,   146,   147,   150,   152,   155,
     158,   159,   162,   163,   166,   167,   168,   169,   172,   173,
     174,   177,   178,   179,   180,   181,   182,   185,   186,   187,
     188,   191,   192,   194,   195,   198,   199,   200,   201,   202,
     203,   204,   205,   208,   209,   210,   213,   214,   215,   216,
     217,   218,   219,   220,   223,   224,   225,   228,   229,   230,
     233,   234,   235,   236,   237,   240,   241,   242,   243,   246,
     247,   250,   251,   252,   255,   256,   259,   260,   263,   264,
     265,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   280,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   365,   366,   368,
     369,   371,   372,   373,   374,   375,   376,   378,   379,   381,
     382,   383,   384,   385,   386,   387,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     485,   486,   487,   488
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "l_await", "l_break", "l_case",
  "l_catch", "l_class", "l_const", "l_continue", "l_debugger", "l_default",
  "l_delete", "l_do", "l_else", "l_enum", "l_export", "l_extends",
  "l_false", "l_finally", "l_for", "l_function", "l_if", "l_import",
  "l_in", "l_instanceof", "l_let", "l_name", "l_new", "l_null", "l_num",
  "l_return", "l_str", "l_super", "l_switch", "l_symb", "l_this",
  "l_throw", "l_true", "l_try", "l_typeof", "l_var", "l_void", "l_while",
  "l_with", "l_yield", "l_constructor", "l_get", "l_set", "l_static",
  "l_any_char", "l_from", "l_async", "o_addeq", "o_and", "o_andeq",
  "o_arrow", "o_dblcolon", "o_dec", "o_diveq", "o_eqeq", "o_inc",
  "o_lesseq", "o_lsh", "o_lsheq", "o_mlteq", "o_modeq", "o_moreeq",
  "o_noteq", "o_or", "o_oreq", "o_rsh", "o_rsheq", "o_subeq", "o_xoreq",
  "o_noteqeq", "o_eqeqeq", "o_rshsh", "o_rshsheq", "'!'", "'%'", "'&'",
  "'('", "')'", "'*'", "'+'", "','", "'-'", "'.'", "'/'", "':'", "';'",
  "'<'", "'='", "'>'", "'?'", "'['", "'\\\\'", "']'", "'^'", "'{'", "'|'",
  "'}'", "'~'", "$accept", "START", "CODE", "INTERNAL_CODE",
  "CODE_MARK_LIST", "ANYTHING", "EXPORT_DEF", "IMPORT_DEF", "NAME_LIST",
  "TRY_CATCH_DEF", "IF_DEF", "EMPTY_OR_EXPR", "FOR_DEF", "DO_WHILE_DEF",
  "WHILE_DEF", "SWITCH_DEF", "SWITCH_INTERNAL", "SWITCH_UNIT", "CLASS_DEF",
  "CLASS_INTERNAL", "CLASS_UNIT", "CLASS_GSET_UNIT", "CLASS_FUNC",
  "CLASS_CONSTRUCT", "FUNC_DEF", "VAR_DEF", "VAR_DEF_LIST", "OBJECT",
  "OBJECT_FLD_LIST", "OBJECT_FLD", "KEY_NAME", "ARRAY", "ARRAY_EXPR_LIST",
  "EXPR_LIST", "EXPR", "FUNC_EXPR", "FUNC_OBJ", "INEXPR", "NUM_EXPR",
  "TERM", "VAR_TERM", "REGSTR", "REGSTRSYMB_INS", "REGSTRSYMB", "REG_SET",
  "REG_SET_SYMB", "SOME_LEXEMS", "UNOOP", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,    33,
      37,    38,    40,    41,    42,    43,    44,    45,    46,    47,
      58,    59,    60,    61,    62,    63,    91,    92,    93,    94,
     123,   124,   125,   126
};
# endif

#define YYPACT_NINF -398

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-398)))

#define YYTABLE_NINF -151

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1701,    31,  1781,    11,    -6,   -64,    31,   -45,    -3,  -398,
     -20,    -5,     5,     6,    -6,  -398,    31,  -398,  -398,  1861,
     -19,  -398,    17,  -398,  1941,  -398,   -21,  3154,    -6,  3154,
      19,  2021,  -398,     9,    31,    31,  -398,  2101,  -398,  -398,
    1398,  -398,  2182,  1499,  -398,   136,  1701,  -398,  -398,  -398,
    -398,  -398,  -398,    65,  -398,  -398,  -398,  3654,    71,  -398,
    -398,    32,  -398,  -398,    91,  -398,  3606,  -398,   746,  -398,
    3154,   -19,  3234,  1724,    75,  -398,  -398,    33,    -7,    95,
     162,   162,   109,  -398,    75,  1701,   145,   162,   255,   115,
    2263,  3234,   178,   162,   109,    75,  -398,    96,   204,  3234,
    -398,   126,  1701,   226,    91,  -398,   164,   109,  -398,  3234,
    -398,   130,     2,    91,    84,    75,    75,   193,   159,   176,
     144,   300,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
     842,   994,  -398,  -398,  -398,  -398,  -398,  -398,  1095,  -398,
    -398,  -398,   -66,  -398,    79,   236,   151,   182,    51,    51,
      24,   231,  2182,  -398,  1701,   -13,    68,  -398,  -398,  -398,
    -398,   163,   189,    21,  -398,  -398,  -398,  -398,  3234,  -398,
    2344,  3154,  3154,  3154,  3154,  3154,  3154,  3154,  3154,  3154,
    3154,  3154,  3154,  3154,  3154,  3154,  3154,  3154,  3154,  3154,
    3154,  3154,  3154,  3154,  3154,  3154,  3154,  3314,  -398,  3154,
    -398,  3154,  3154,  3154,  3154,  3154,  3154,  3154,  3154,  2425,
     156,  3234,  3154,  -398,   165,  -398,  -398,  -398,  -398,  3234,
    -398,    31,  1804,  3234,  -398,   -58,   -34,   259,  1600,   258,
     -29,    -4,    12,  3234,   201,   203,   221,   137,   237,  2506,
     235,   186,   188,   289,   -27,  -398,  -398,   215,  -398,  1701,
     234,   301,   217,  -398,   261,  3394,   285,  -398,   267,  -398,
    -398,  -398,  1196,  1297,  -398,  -398,  -398,  -398,  -398,  -398,
     330,  -398,  3234,  -398,  2587,  -398,   277,  -398,    51,    51,
    -398,  -398,   263,   276,  -398,   208,  -398,  -398,  -398,  -398,
     128,  2668,  3234,  -398,  -398,   228,   327,   897,   327,  3742,
    1586,   327,   356,   327,  1586,  3702,   356,  1586,  1586,   356,
    -398,  3890,  -398,   125,   125,  -398,   327,   327,  3504,  3836,
    3782,  3606,  3606,  1499,  -398,  3606,  3606,  3606,  3606,  3606,
    3606,  3606,  3606,  3606,  -398,   247,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  3606,  3558,  -398,   263,   227,
    -398,  3838,  -398,   345,   281,   293,   295,   335,  -398,   351,
      29,    41,   326,   332,  3234,  3234,  3234,  3234,  1701,   325,
     262,  1701,   328,  1701,  -398,   375,   329,   426,   352,  1701,
    2749,  1499,  -398,  3474,  2830,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,   342,   264,  2911,  -398,  -398,  -398,  1701,
    -398,    82,  -398,  -398,    59,   344,   270,  -398,  -398,  3154,
    3154,   333,  -398,  -398,  1884,  -398,  -398,  3234,  3234,  3234,
     364,   415,  3234,  3234,  3234,   358,   359,   361,   363,  -398,
    1701,   355,   360,  1701,   443,   428,    69,   376,  2992,  -398,
     367,   287,   366,  1499,  -398,  -398,   296,  1701,   371,   372,
     310,  1701,  3073,  1701,   377,  3606,  -398,  -398,  3845,  -398,
    -398,  -398,  3234,  -398,   380,   392,   393,  3234,  3234,  3234,
    3234,   379,  1701,  -398,   381,  1701,  -398,  3234,   388,     8,
    -398,  3234,   382,   314,  1701,   387,  -398,   391,  -398,   395,
    1701,  1701,   389,   390,   323,   396,  1701,  -398,   341,  1701,
    1701,  1701,   411,   412,   416,   417,  -398,   399,  -398,  -398,
     413,  1701,  -398,  -398,   419,  1701,   405,   402,  1701,  -398,
    -398,   406,   407,  1701,  1701,   414,  -398,   409,  -398,  -398,
    -398,  -398,  1701,  1701,  1701,  1701,  -398,  1701,  -398,   418,
     410,  1701,  -398,   420,  -398,  -398,   423,   424,  1701,  -398,
    -398,  -398,  -398,  -398,  -398,  1701,  -398,   430,  -398,  -398,
    -398,   432,   433,  -398,  -398,  -398
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    24,     0,     0,    22,     0,     0,     0,   194,
       0,     0,     0,     0,     0,   207,     0,   192,   189,    30,
     190,   209,     0,   208,    28,   193,     0,     0,     0,     0,
       0,    26,   226,     0,     0,     0,   342,     0,   341,   340,
       0,    43,     0,     0,   343,     0,     2,     3,    42,    41,
      20,    19,    18,    40,    17,    16,    15,    14,    10,   212,
     211,    13,   134,   137,   138,   176,   136,   152,   195,   191,
       0,     0,     0,     0,   205,    23,   150,    32,     0,   106,
       0,     0,   105,    21,   204,     0,    44,     0,     0,     0,
       0,     0,    48,     0,   104,   203,    29,    38,     0,     0,
      27,    36,     5,     0,   206,   202,   195,   103,   201,     0,
      25,    34,     0,   139,     0,   197,   196,     0,     0,   137,
     206,   136,   247,   248,   249,   250,   251,   252,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   268,   269,   270,   271,   272,   290,   273,   274,   246,
     275,   338,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   253,   267,   276,   277,   339,   320,
     329,   327,   306,   312,   317,   305,   321,   308,   310,   309,
     323,   330,   302,   333,   292,   293,   301,   300,   316,   295,
     332,   304,   299,   298,   334,   331,   328,   326,   325,   324,
     322,   319,   318,   315,   313,   314,   311,   307,   303,   297,
       0,     0,   337,   296,   336,   294,   335,   291,     0,   229,
     231,   129,     0,   131,   207,   189,   190,     0,     0,     0,
       0,    43,     0,   114,     7,     0,     0,    78,    85,    81,
      82,     0,   117,   120,     1,     4,    39,     9,     0,    12,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   199,     0,
     198,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   200,     0,   125,   126,   127,    86,     0,
      31,     0,     0,     0,    52,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,   150,     0,     0,   176,     0,
       0,     0,     0,     0,     0,    37,   210,     0,    35,     6,
       0,     0,     0,    33,     0,     0,   225,   147,     0,   224,
     245,   244,     0,     0,   237,   239,   234,   233,   235,   232,
     227,   230,   133,   130,     0,    87,     0,    88,     0,     0,
      83,    84,   131,     0,    11,     0,   116,    80,    85,   115,
     118,     0,     0,   135,   102,     0,   151,   195,   175,   160,
     171,   170,   161,   169,   172,   154,   155,   174,   173,   166,
     159,   164,   163,   162,   165,   158,   167,   168,     0,   157,
     156,   184,   186,     0,   148,   182,   178,   185,   187,   179,
     181,   183,   180,   188,   221,     0,   219,   213,   218,   216,
     214,   215,   217,   220,   140,   177,     0,   225,     0,     0,
      74,     0,   107,     0,   108,   110,   112,     0,    45,    46,
     106,   106,     0,    58,    57,    57,    57,    57,     0,     0,
       0,     5,     0,     0,    49,    50,     0,     0,     0,     0,
       0,     0,   143,     0,     0,   242,   241,   243,   240,   236,
     238,   228,   132,     0,     0,     0,    89,    90,   128,     0,
      79,     0,   124,   119,   120,     0,     0,   121,   101,     0,
       0,     0,   222,   223,     0,    75,    53,     0,     0,     0,
       0,     0,     0,     0,    57,     0,     0,     0,     0,    64,
       5,     0,     0,     5,    55,     0,     0,     0,     0,    68,
       0,     0,     0,     0,   144,   100,     0,     5,     0,     0,
       0,     8,     0,     5,     0,   153,   149,    76,     0,   109,
     111,   113,     0,    47,     0,     0,     0,    57,    57,    57,
      57,     0,     5,   141,     0,     0,    51,     0,     0,     0,
      70,     0,     0,     0,     5,     0,   145,     0,    99,     0,
       5,     5,     0,     0,     0,     0,     5,    77,     0,     0,
       0,     0,     0,     0,     0,     0,    95,     0,   142,    56,
       0,     5,    69,    71,     0,     5,     0,     0,     5,   146,
      93,     0,     0,     5,     5,     0,    91,     0,    67,    66,
      65,    59,     0,     0,     0,     0,    96,     5,    73,     0,
       0,     5,    95,     0,    94,    91,     0,     0,     5,    92,
      63,    62,    60,    61,    72,     5,    97,     0,    96,    92,
     122,     0,     0,    98,   123,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -398,  -398,     1,  -385,  -398,   -40,  -398,  -398,   -56,  -398,
    -398,  -397,  -398,  -398,  -398,  -398,  -398,   -53,   429,  -294,
    -233,   -39,  -213,   286,     0,   431,    -2,  -398,   150,  -398,
     -38,  -398,  -398,   102,   -33,   -30,   459,   442,   506,   108,
     404,  -398,  -398,   303,  -398,   194,  -199,  -398
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    45,   329,   330,   235,    47,    48,    49,   305,    50,
      51,   442,    52,    53,    54,    55,   559,   560,    56,   236,
     237,   368,   239,   240,    76,    58,    94,    59,   241,   242,
     356,    60,   222,    61,    62,    63,    64,    65,    66,    67,
      68,    69,   218,   219,   343,   344,   220,    70
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    46,    82,   367,   238,   243,   245,   119,   431,   223,
     301,   345,   349,   557,   363,   355,   357,   360,   491,   558,
     352,    79,    89,   440,    86,   306,   107,    83,   433,   334,
     112,   310,   353,    92,   238,   243,    15,   324,    78,   441,
     434,    71,    21,    57,   234,    23,    57,   505,   506,   507,
     508,   295,   433,   502,   296,    85,   297,   433,    15,   433,
      32,   103,    88,    71,    21,   503,   512,    23,   435,    98,
     227,   358,   359,   439,   557,   455,   522,    90,   295,   102,
     558,   296,    32,   297,    90,    57,   308,    91,   315,   364,
      80,    37,    80,   302,    81,   295,    81,    87,   296,    99,
     297,   109,    57,   371,    77,    42,    93,   546,    80,    73,
     592,   372,    81,    72,   227,   228,   229,   230,   248,   248,
     299,    97,   303,   249,   300,   551,   101,    42,   554,   358,
     359,    73,   480,   111,   303,   105,   244,   108,   567,   118,
     277,   532,   569,   468,   345,   476,   477,   299,   575,   372,
     582,   583,   584,   585,   365,   295,   246,   289,   296,   298,
     297,  -125,   247,   290,   299,  -125,   289,   587,   416,  -125,
     366,   292,   290,   250,   294,   228,   229,   481,   293,   597,
     292,  -125,   248,   417,   418,   601,   602,   325,   303,   304,
     317,   607,   321,   322,   245,   307,   309,   319,   367,   362,
     538,   327,   419,   420,   421,   264,   618,   422,   423,   266,
     620,   332,   248,   623,   269,   373,   248,   328,   626,   627,
     277,   333,   278,   248,   299,   280,   250,   338,   447,   323,
    -138,   326,   634,  -127,    57,   295,   637,  -127,   296,    98,
     297,  -127,   336,   641,   404,   248,   289,   331,   427,   335,
     642,   248,   290,  -127,   227,   228,   229,   230,     1,   337,
     292,   424,     3,     4,   354,   369,   428,     6,   245,   452,
     432,   453,   248,     9,   248,   370,    11,   -86,   -86,   -86,
     -86,   311,    15,    16,    17,    18,   436,    20,    21,   245,
     438,    23,   444,    25,   445,    27,   312,    29,   456,   298,
     459,   248,   462,   248,   299,   367,    32,    33,    57,   289,
     107,   488,   446,    34,   248,   290,    35,   -86,  -126,   472,
     448,   454,  -126,   292,   251,   252,  -126,   494,   458,    57,
     492,   482,   484,   248,    36,   451,   457,    37,  -126,   487,
      38,   463,    39,   460,    40,   511,   313,   528,   248,   464,
     248,    42,   375,   534,   253,    73,   248,   471,    44,   475,
     254,   478,   255,   256,   238,   243,   479,   257,   258,   259,
     565,   260,   496,   248,   497,   261,   262,   263,   500,   568,
     264,   265,   248,   339,   266,   267,   498,   268,   499,   269,
     256,   415,   270,   572,   271,   272,   248,   596,   260,   273,
     248,   274,   501,    57,   263,    74,   605,   264,   509,   248,
      84,   266,   267,   514,   268,   443,   269,   504,   248,   519,
      95,   450,   238,   243,   608,   510,   515,   248,   513,   516,
     524,   106,   517,   106,   518,   536,   264,   114,   115,   116,
     266,   267,   527,   268,   533,   269,   542,   543,    57,   547,
     548,    57,   549,    57,   550,   552,   474,   555,   561,    57,
     556,    57,   553,   579,   539,   540,   541,   564,   566,   544,
     545,   570,   571,   486,   106,   580,   581,   576,   591,    57,
     531,   586,   595,   588,   238,   243,   104,   598,   104,   603,
     604,   245,   113,   599,   612,   613,   120,   600,   606,   614,
     615,   616,   619,   617,   622,   621,   593,     0,   624,   625,
      57,   629,   636,    57,   628,   589,   361,   314,   635,   316,
     483,   351,   638,    57,   590,   639,   640,    57,   594,   104,
     318,    57,   643,    57,   644,   645,     0,   470,     0,   609,
     610,   611,     0,   121,     0,     0,   443,   443,   443,   443,
       0,     0,    57,     0,     0,    57,     0,     0,     0,     0,
       0,     0,   521,     0,    57,     0,   526,     0,     0,     0,
      57,    57,   630,   631,   632,   633,    57,   530,   121,    57,
      57,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,     0,     0,    57,     0,     0,    57,     0,
       0,     0,     0,    57,    57,     0,   443,     0,     0,     0,
       0,     0,    57,    57,    57,    57,     0,    57,     0,     0,
     563,    57,     0,     0,     0,     0,     0,     0,    57,     0,
       0,     0,     0,     0,   574,    57,     0,     0,     0,     0,
       0,     0,     0,     0,   578,     0,     0,     0,     0,   443,
     443,   443,   443,     0,     0,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,     0,     0,   377,     0,   377,   377,   377,   377,   377,
     377,   377,   377,     0,     0,     0,   377,     0,     0,     0,
       0,     0,     0,     0,     0,   429,     0,     0,     0,     0,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,     0,     0,   104,     0,
     104,   104,   104,   104,   104,   104,   104,   104,     0,     0,
       0,   104,     0,     0,     0,     0,     0,   376,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,     0,     0,   405,     0,   406,   407,   408,
     409,   410,   411,   412,   413,     0,     0,   425,   426,   275,
       0,   276,   277,     0,   278,   279,     0,   280,     0,     0,
     281,   282,   283,     0,     0,     0,   284,     0,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,   289,     0,
       0,     0,     0,     0,   290,     0,     0,     0,     0,   291,
       0,     0,   292,     0,     0,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,     0,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   377,   377,   169,   170,   171,   172,   173,
     174,     0,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   340,   204,   205,   206,   207,   208,   209,   341,   342,
     212,   213,   214,   215,   216,   217,     0,     0,   104,   104,
     275,     0,   276,   277,     0,   278,   279,     0,   280,     0,
       0,   281,   282,   283,     0,     0,     0,   284,     0,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,   289,
       0,     0,     0,     0,     0,   290,     0,     0,     0,     0,
     489,     0,     0,   292,     0,   425,   535,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,     0,     0,   169,   170,   171,
     172,   173,   174,     0,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   346,   204,   205,   206,   207,   208,   209,
     347,   348,   212,   213,   214,   215,   216,   217,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       0,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,     0,     0,   169,   170,
     171,   172,   173,   174,     0,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   350,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,     0,     0,   169,
     170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   465,   204,   205,   206,   207,
     208,   209,   466,   467,   212,   213,   214,   215,   216,   217,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     0,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,     0,     0,
     169,   170,   171,   172,   173,   174,     0,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   340,   204,   205,   206,
     207,   208,   209,   341,   342,   469,   213,   214,   215,   216,
     217,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     0,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,     0,
       0,   169,   170,   171,   172,   173,   174,     0,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,     0,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,     1,     2,     0,     0,     3,     4,     5,     0,
       0,     6,     7,     0,     0,     8,     0,     9,     0,    10,
      11,    12,    13,     0,     0,    14,   224,    16,    17,   225,
      19,   226,    21,    22,     0,    23,    24,    25,    26,    27,
      28,    29,    30,     0,    31,   227,   228,   229,   230,     0,
      32,    33,     0,     0,     0,     0,     0,    34,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
       0,    37,     0,     0,    38,     0,    39,     0,    40,     0,
     231,     0,     0,     0,     0,   232,     0,     0,     0,    43,
       0,   233,    44,     1,     2,     0,     0,     3,     4,     5,
     251,   252,     6,     7,     0,     0,     8,     0,     9,     0,
      10,    11,    12,    13,     0,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    23,    24,    25,    26,
      27,    28,    29,    30,     0,    31,     0,     0,   255,   256,
       0,    32,    33,   257,     0,     0,     0,   260,    34,     0,
       0,    35,     0,   263,     0,     0,   264,     0,     0,     0,
     266,   267,     0,   268,     0,   269,     0,     0,   270,    36,
     271,     0,    37,     0,     0,    38,     0,    39,     0,    40,
       0,    41,     0,     0,     0,     0,    42,     0,     0,     0,
      43,     0,   437,    44,     1,     2,     0,     0,     3,     4,
       5,     0,     0,     6,     7,     0,     0,     8,     0,     9,
       0,    10,    11,    12,    13,     0,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    23,    24,    25,
      26,    27,    28,    29,    30,     0,    31,     0,     0,     0,
       0,   295,    32,    33,   296,     0,   297,     0,     0,    34,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
     227,   228,   229,   230,     0,     0,     0,     0,     0,     0,
      36,     0,     0,    37,     1,     0,    38,     0,    39,     0,
      40,     0,    41,     6,     0,     0,     0,    42,     0,     9,
       0,    43,    11,     0,    44,     0,     0,     0,    15,    16,
      17,    18,     0,    20,    21,   298,     0,    23,     0,    25,
     299,    27,     0,    29,     0,     0,   233,     0,     0,     0,
       0,   295,    32,    33,   296,     0,   297,     0,     0,    34,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
     227,   228,   229,   230,     0,     0,     0,     0,     0,     0,
      36,     0,     0,    37,     1,     0,    38,     0,    39,     0,
      40,     0,    75,     6,     0,     0,     0,    42,     0,     9,
       0,    73,    11,     0,    44,     0,     0,     0,    15,    16,
      17,    18,     0,    20,    21,   298,     0,    23,     0,    25,
     299,    27,     0,    29,     0,     0,   430,     0,     0,     0,
       0,   295,    32,    33,   296,     0,   297,     0,     0,    34,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
     227,   228,   229,   230,     0,     0,     0,     0,     0,     0,
      36,     0,     0,    37,     1,     0,    38,     0,    39,     0,
      40,     0,    96,     6,     0,     0,     0,    42,     0,     9,
       0,    73,    11,     0,    44,     0,     0,     0,    15,    16,
      17,    18,     0,    20,    21,   298,     0,    23,     0,    25,
     299,    27,     0,    29,     0,     0,   537,     0,     0,     0,
       0,     0,    32,    33,     0,     0,     0,     0,     0,    34,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     0,    37,     1,     0,    38,     0,    39,     0,
      40,     0,   100,     6,     0,     0,     0,    42,     0,     9,
       0,    73,    11,     0,    44,     0,     0,     0,    15,    16,
      17,    18,     0,    20,    21,     0,     0,    23,     0,    25,
       0,    27,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,     0,     0,     0,     0,     0,    34,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     0,    37,     1,     0,    38,     0,    39,     0,
      40,     0,   110,     6,     0,     0,     0,    42,     0,     9,
       0,    73,    11,     0,    44,     0,     0,     0,    15,    16,
      17,    18,     0,    20,    21,     0,     0,    23,     0,    25,
       0,    27,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,     0,     0,     0,     0,     0,    34,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     0,    37,   117,     1,    38,     0,    39,     0,
      40,     0,     0,     0,     6,     0,     0,    42,     0,     0,
       9,    73,     0,    11,    44,     0,     0,     0,     0,    15,
      16,    17,    18,     0,    20,    21,     0,     0,    23,     0,
      25,     0,    27,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,     0,     0,     0,     0,     0,
      34,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,     0,    37,     0,     1,    38,     0,    39,
       0,    40,     0,     0,     0,     6,     0,     0,    42,     0,
     221,     9,    73,     0,    11,    44,     0,     0,     0,     0,
      15,    16,    17,    18,     0,    20,    21,     0,     0,    23,
       0,    25,     0,    27,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,     0,     0,     0,     0,
       0,    34,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,     0,     0,    37,   320,     1,    38,     0,
      39,     0,    40,     0,     0,     0,     6,     0,     0,    42,
       0,     0,     9,    73,     0,    11,    44,     0,     0,     0,
       0,    15,    16,    17,    18,     0,    20,    21,     0,     0,
      23,     0,    25,     0,    27,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,     0,     0,     0,
       0,     0,    34,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,     0,    37,   374,     1,    38,
       0,    39,     0,    40,     0,     0,     0,     6,     0,     0,
      42,     0,     0,     9,    73,     0,    11,    44,     0,     0,
       0,     0,    15,    16,    17,    18,     0,    20,    21,     0,
       0,    23,     0,    25,     0,    27,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,    34,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,     0,     0,    37,   414,     1,
      38,     0,    39,     0,    40,     0,     0,     0,     6,     0,
       0,    42,     0,     0,     9,    73,     0,    11,    44,     0,
       0,     0,     0,    15,    16,    17,    18,     0,    20,    21,
       0,     0,    23,     0,    25,     0,    27,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    33,     0,
       0,     0,     0,     0,    34,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,     0,     0,    37,   449,
       1,    38,     0,    39,     0,    40,     0,     0,     0,     6,
       0,     0,    42,     0,     0,     9,    73,     0,    11,    44,
       0,     0,     0,     0,    15,    16,    17,    18,     0,    20,
      21,     0,     0,    23,     0,    25,     0,    27,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,    34,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,     0,     0,    37,
     473,     1,    38,     0,    39,     0,    40,     0,     0,     0,
       6,     0,     0,    42,     0,     0,     9,    73,     0,    11,
      44,     0,     0,     0,     0,    15,    16,    17,    18,     0,
      20,    21,     0,     0,    23,     0,    25,     0,    27,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,     0,     0,     0,     0,     0,    34,     0,     0,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,     0,
      37,   485,     1,    38,     0,    39,     0,    40,     0,     0,
       0,     6,     0,     0,    42,     0,     0,     9,    73,     0,
      11,    44,     0,     0,     0,     0,    15,    16,    17,    18,
       0,    20,    21,     0,     0,    23,     0,    25,     0,    27,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,    34,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
       0,    37,   520,     1,    38,     0,    39,     0,    40,     0,
       0,     0,     6,     0,     0,    42,     0,     0,     9,    73,
       0,    11,    44,     0,     0,     0,     0,    15,    16,    17,
      18,     0,    20,    21,     0,     0,    23,     0,    25,     0,
      27,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,     0,     0,     0,     0,     0,    34,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,     0,    37,   525,     1,    38,     0,    39,     0,    40,
       0,     0,     0,     6,     0,     0,    42,     0,     0,     9,
      73,     0,    11,    44,     0,     0,     0,     0,    15,    16,
      17,    18,     0,    20,    21,     0,     0,    23,     0,    25,
       0,    27,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,     0,     0,     0,     0,     0,    34,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     0,    37,   529,     1,    38,     0,    39,     0,
      40,     0,     0,     0,     6,     0,     0,    42,     0,     0,
       9,    73,     0,    11,    44,     0,     0,     0,     0,    15,
      16,    17,    18,     0,    20,    21,     0,     0,    23,     0,
      25,     0,    27,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,     0,     0,     0,     0,     0,
      34,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,     0,    37,   562,     1,    38,     0,    39,
       0,    40,     0,     0,     0,     6,     0,     0,    42,     0,
       0,     9,    73,     0,    11,    44,     0,     0,     0,     0,
      15,    16,    17,    18,     0,    20,    21,     0,     0,    23,
       0,    25,     0,    27,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,     0,     0,     0,     0,
       0,    34,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,     0,     0,    37,   573,     1,    38,     0,
      39,     0,    40,     0,     0,     0,     6,     0,     0,    42,
       0,     0,     9,    73,     0,    11,    44,     0,     0,     0,
       0,    15,    16,    17,    18,     0,    20,    21,     0,     0,
      23,     0,    25,     0,    27,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,    32,   103,     0,     0,     0,
       0,     0,    34,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,     0,    37,     1,     0,    38,
       0,    39,     0,    40,     0,     0,     6,     0,     0,     0,
      42,     0,     9,     0,    73,    11,     0,    44,     0,     0,
       0,    15,    16,    17,    18,     0,    20,    21,     0,     0,
      23,     0,    25,     0,    27,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,     0,     0,     0,
       0,     0,    34,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,     0,    37,     1,     0,    38,
       0,    39,     0,    40,     0,     0,     6,     0,     0,     0,
      42,     0,     9,     0,    73,    11,     0,    44,     0,     0,
       0,    15,    16,    17,    18,     0,    20,    21,     0,     0,
      23,     0,    25,     0,    27,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,     0,     0,     0,
       0,     0,    34,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,     0,    37,     1,     0,    38,
       0,    39,     0,    40,     0,     0,     6,     0,     0,     0,
      42,     0,     9,     0,   403,    11,     0,    44,     0,     0,
       0,    15,    16,    17,    18,     0,    20,    21,     0,     0,
      23,     0,    25,     0,    27,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,     0,     0,     0,
       0,     0,    34,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,     0,    37,     1,     0,    38,
       0,    39,     0,    40,     0,     0,     6,     0,     0,     0,
      42,     0,     9,     0,   461,    11,     0,    44,     0,     0,
       0,    15,    16,    17,    18,     0,    20,    21,     0,     0,
      23,     0,    25,     0,    27,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,     0,   251,   252,
       0,     0,    34,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,     0,    37,     0,   253,    38,
       0,    39,     0,    40,   254,     0,   255,   256,     0,     0,
      42,   257,   258,   259,   523,   260,     0,    44,     0,   261,
     262,   263,   251,   252,   264,   265,     0,     0,   266,   267,
       0,   268,     0,   269,   490,     0,   270,     0,   271,   272,
       0,     0,     0,   273,     0,   274,     0,     0,     0,     0,
       0,     0,   253,     0,     0,     0,     0,     0,   254,     0,
     255,   256,     0,     0,     0,   257,   258,   259,     0,   260,
     251,   252,     0,   261,   262,   263,     0,     0,   264,   265,
       0,     0,   266,   267,     0,   268,     0,   269,     0,     0,
     270,     0,   271,   272,     0,     0,   493,   273,     0,   274,
     253,     0,     0,     0,     0,     0,   254,     0,   255,   256,
       0,     0,     0,   257,   258,   259,     0,   260,  -150,  -150,
       0,   261,   262,   263,     0,     0,   264,   265,     0,     0,
     266,   267,     0,   268,     0,   269,     0,     0,   270,     0,
     271,   272,     0,     0,     0,   273,     0,   274,  -150,     0,
       0,     0,     0,     0,  -150,     0,  -150,  -150,     0,     0,
       0,  -150,  -150,  -150,     0,  -150,   251,   252,     0,  -150,
    -150,  -150,     0,     0,  -150,  -150,     0,     0,  -150,     0,
    -150,     0,     0,     0,     0,     0,  -150,     0,  -150,  -150,
       0,     0,     0,  -150,     0,  -150,   253,     0,     0,     0,
       0,     0,   254,     0,   255,   256,   251,   252,     0,   257,
     258,     0,     0,   260,     0,     0,     0,   261,   262,   263,
       0,     0,   264,   265,     0,     0,   266,   267,     0,   268,
       0,   269,     0,     0,   270,     0,   271,     0,     0,     0,
       0,   273,   254,   274,   255,   256,   251,   252,     0,   257,
     258,     0,     0,   260,     0,     0,     0,   261,   262,   263,
       0,     0,   264,   265,     0,     0,   266,   267,     0,   268,
       0,   269,     0,     0,   270,     0,   271,     0,     0,     0,
       0,   273,   254,   274,   255,   256,     0,     0,     0,   257,
     258,     0,     0,   260,     0,     0,     0,   261,   262,   263,
     251,   252,   264,   265,     0,   295,   266,   267,   296,   268,
     297,   269,   295,     0,   270,   296,   271,   297,     0,     0,
       0,   273,     0,     0,   227,   228,   229,   230,     0,     0,
       0,   227,   228,   229,   230,     0,   254,     0,   255,   256,
       0,     0,     0,   257,   258,     0,     0,   260,     0,     0,
       0,   261,   262,   263,   251,   252,   264,   265,     0,     0,
     266,   267,     0,   268,   365,   269,     0,     0,   270,   298,
     271,   365,     0,     0,   299,     0,   298,     0,     0,     0,
     495,   299,     0,     0,     0,     0,     0,   577,     0,     0,
     254,     0,   255,   256,     0,     0,     0,   257,   258,     0,
       0,   260,     0,     0,     0,   261,   262,   263,     0,     0,
     264,     0,     0,     0,   266,   267,     0,   268,     0,   269,
       0,     0,   270,     0,   271
};

static const yytype_int16 yycheck[] =
{
       0,     0,     4,   236,    43,    43,    46,    37,   302,    42,
      17,   210,   211,     5,    27,   228,   229,   230,   403,    11,
      86,    27,    27,    27,    27,    81,    28,    91,    86,    27,
      21,    87,    98,    27,    73,    73,    27,    93,    27,    27,
      98,    32,    33,    43,    43,    36,    46,   444,   445,   446,
     447,    27,    86,    24,    30,   100,    32,    86,    27,    86,
      51,    52,    82,    32,    33,    24,   451,    36,   102,    88,
      46,    47,    48,   102,     5,   102,   461,    82,    27,   100,
      11,    30,    51,    32,    82,    85,    85,    82,    88,   102,
      96,    82,    96,   100,   100,    27,   100,   100,    30,    82,
      32,    82,   102,    82,     2,    96,   100,   504,    96,   100,
     102,    90,   100,    82,    46,    47,    48,    49,    86,    86,
      96,    19,    93,    91,    91,   510,    24,    96,   513,    47,
      48,   100,   365,    31,    93,    27,     0,    29,   523,    37,
      56,    82,   527,   342,   343,   358,   359,    96,   533,    90,
     547,   548,   549,   550,    86,    27,    91,    82,    30,    91,
      32,    82,    91,    88,    96,    86,    82,   552,    12,    90,
     102,    96,    88,    82,    72,    47,    48,    49,    70,   564,
      96,   102,    86,    27,    28,   570,   571,    91,    93,    27,
      88,   576,    90,    91,   234,    86,    51,    82,   431,   232,
     494,    99,    46,    47,    48,    80,   591,    51,    52,    84,
     595,   109,    86,   598,    89,   248,    86,    91,   603,   604,
      56,    91,    58,    86,    96,    61,    82,    83,    91,    51,
      86,    27,   617,    82,   234,    27,   621,    86,    30,    88,
      32,    90,    83,   628,   277,    86,    82,    21,    83,    56,
     635,    86,    88,   102,    46,    47,    48,    49,     3,    83,
      96,   291,     7,     8,    82,   102,   299,    12,   308,    83,
     303,    83,    86,    18,    86,    86,    21,    46,    47,    48,
      49,    26,    27,    28,    29,    30,    27,    32,    33,   329,
      32,    36,    91,    38,    91,    40,    41,    42,    83,    91,
      83,    86,   335,    86,    96,   538,    51,    52,   308,    82,
     312,    83,    91,    58,    86,    88,    61,    86,    82,   352,
      83,    32,    86,    96,    24,    25,    90,   100,    27,   329,
      83,   370,   370,    86,    79,   100,   102,    82,   102,   372,
      85,    56,    87,    82,    89,    83,    91,    83,    86,    82,
      86,    96,   250,    83,    54,   100,    86,    27,   103,    82,
      60,    98,    62,    63,   403,   403,    90,    67,    68,    69,
      83,    71,    27,    86,    93,    75,    76,    77,    43,    83,
      80,    81,    86,    83,    84,    85,    93,    87,    93,    89,
      63,   289,    92,    83,    94,    95,    86,    83,    71,    99,
      86,   101,    51,   403,    77,     1,    83,    80,   448,    86,
       6,    84,    85,   453,    87,   313,    89,    91,    86,   459,
      16,   319,   461,   461,    83,   100,    51,    86,   100,   100,
     463,    27,     6,    29,    82,   102,    80,    33,    34,    35,
      84,    85,   100,    87,   100,    89,    82,    32,   448,    91,
      91,   451,    91,   453,    91,   100,   354,    14,    82,   459,
      32,   461,   102,    83,   497,   498,   499,   100,   102,   502,
     503,   100,   100,   371,    70,    83,    83,   100,    90,   479,
     479,   102,   100,   102,   523,   523,    27,   100,    29,   100,
     100,   531,    33,   102,    83,    83,    37,   102,   102,    83,
      83,   102,    83,    90,   102,   100,   559,    -1,   102,   102,
     510,   102,   102,   513,   100,   555,   230,    88,   100,    88,
     370,   218,   102,   523,   557,   102,   102,   527,   561,    70,
      88,   531,   102,   533,   102,   102,    -1,   343,    -1,   579,
     580,   581,    -1,    37,    -1,    -1,   444,   445,   446,   447,
      -1,    -1,   552,    -1,    -1,   555,    -1,    -1,    -1,    -1,
      -1,    -1,   460,    -1,   564,    -1,   464,    -1,    -1,    -1,
     570,   571,   612,   613,   614,   615,   576,   475,    72,   579,
     580,   581,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   591,    -1,    -1,    -1,   595,    -1,    -1,   598,    -1,
      -1,    -1,    -1,   603,   604,    -1,   504,    -1,    -1,    -1,
      -1,    -1,   612,   613,   614,   615,    -1,   617,    -1,    -1,
     518,   621,    -1,    -1,    -1,    -1,    -1,    -1,   628,    -1,
      -1,    -1,    -1,    -1,   532,   635,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   542,    -1,    -1,    -1,    -1,   547,
     548,   549,   550,    -1,    -1,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,    -1,    -1,   279,    -1,   281,   282,   283,   284,   285,
     286,   287,   288,    -1,    -1,    -1,   292,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   301,    -1,    -1,    -1,    -1,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,    -1,    -1,   279,    -1,
     281,   282,   283,   284,   285,   286,   287,   288,    -1,    -1,
      -1,   292,    -1,    -1,    -1,    -1,    -1,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,    -1,    -1,   279,    -1,   281,   282,   283,
     284,   285,   286,   287,   288,    -1,    -1,   291,   292,    53,
      -1,    55,    56,    -1,    58,    59,    -1,    61,    -1,    -1,
      64,    65,    66,    -1,    -1,    -1,    70,    -1,    72,    73,
      74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    96,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,   489,   490,    53,    54,    55,    56,    57,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,   489,   490,
      53,    -1,    55,    56,    -1,    58,    59,    -1,    61,    -1,
      -1,    64,    65,    66,    -1,    -1,    -1,    70,    -1,    72,
      73,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    96,    -1,   489,   490,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    57,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56,    57,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    56,    57,    58,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    57,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     3,     4,    -1,    -1,     7,     8,     9,    -1,
      -1,    12,    13,    -1,    -1,    16,    -1,    18,    -1,    20,
      21,    22,    23,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    82,    -1,    -1,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,   100,
      -1,   102,   103,     3,     4,    -1,    -1,     7,     8,     9,
      24,    25,    12,    13,    -1,    -1,    16,    -1,    18,    -1,
      20,    21,    22,    23,    -1,    -1,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    45,    -1,    -1,    62,    63,
      -1,    51,    52,    67,    -1,    -1,    -1,    71,    58,    -1,
      -1,    61,    -1,    77,    -1,    -1,    80,    -1,    -1,    -1,
      84,    85,    -1,    87,    -1,    89,    -1,    -1,    92,    79,
      94,    -1,    82,    -1,    -1,    85,    -1,    87,    -1,    89,
      -1,    91,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
     100,    -1,   102,   103,     3,     4,    -1,    -1,     7,     8,
       9,    -1,    -1,    12,    13,    -1,    -1,    16,    -1,    18,
      -1,    20,    21,    22,    23,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,
      -1,    27,    51,    52,    30,    -1,    32,    -1,    -1,    58,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,     3,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    12,    -1,    -1,    -1,    96,    -1,    18,
      -1,   100,    21,    -1,   103,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    32,    33,    91,    -1,    36,    -1,    38,
      96,    40,    -1,    42,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    27,    51,    52,    30,    -1,    32,    -1,    -1,    58,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,     3,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    12,    -1,    -1,    -1,    96,    -1,    18,
      -1,   100,    21,    -1,   103,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    32,    33,    91,    -1,    36,    -1,    38,
      96,    40,    -1,    42,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    27,    51,    52,    30,    -1,    32,    -1,    -1,    58,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,     3,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    12,    -1,    -1,    -1,    96,    -1,    18,
      -1,   100,    21,    -1,   103,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    32,    33,    91,    -1,    36,    -1,    38,
      96,    40,    -1,    42,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,     3,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    12,    -1,    -1,    -1,    96,    -1,    18,
      -1,   100,    21,    -1,   103,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    32,    33,    -1,    -1,    36,    -1,    38,
      -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,     3,    -1,    85,    -1,    87,    -1,
      89,    -1,    91,    12,    -1,    -1,    -1,    96,    -1,    18,
      -1,   100,    21,    -1,   103,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    32,    33,    -1,    -1,    36,    -1,    38,
      -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,    83,     3,    85,    -1,    87,    -1,
      89,    -1,    -1,    -1,    12,    -1,    -1,    96,    -1,    -1,
      18,   100,    -1,    21,   103,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    32,    33,    -1,    -1,    36,    -1,
      38,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    82,    -1,     3,    85,    -1,    87,
      -1,    89,    -1,    -1,    -1,    12,    -1,    -1,    96,    -1,
      98,    18,   100,    -1,    21,   103,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    32,    33,    -1,    -1,    36,
      -1,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82,    83,     3,    85,    -1,
      87,    -1,    89,    -1,    -1,    -1,    12,    -1,    -1,    96,
      -1,    -1,    18,   100,    -1,    21,   103,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    32,    33,    -1,    -1,
      36,    -1,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,    83,     3,    85,
      -1,    87,    -1,    89,    -1,    -1,    -1,    12,    -1,    -1,
      96,    -1,    -1,    18,   100,    -1,    21,   103,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    32,    33,    -1,
      -1,    36,    -1,    38,    -1,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    83,     3,
      85,    -1,    87,    -1,    89,    -1,    -1,    -1,    12,    -1,
      -1,    96,    -1,    -1,    18,   100,    -1,    21,   103,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    32,    33,
      -1,    -1,    36,    -1,    38,    -1,    40,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    83,
       3,    85,    -1,    87,    -1,    89,    -1,    -1,    -1,    12,
      -1,    -1,    96,    -1,    -1,    18,   100,    -1,    21,   103,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    32,
      33,    -1,    -1,    36,    -1,    38,    -1,    40,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,
      83,     3,    85,    -1,    87,    -1,    89,    -1,    -1,    -1,
      12,    -1,    -1,    96,    -1,    -1,    18,   100,    -1,    21,
     103,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      32,    33,    -1,    -1,    36,    -1,    38,    -1,    40,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      82,    83,     3,    85,    -1,    87,    -1,    89,    -1,    -1,
      -1,    12,    -1,    -1,    96,    -1,    -1,    18,   100,    -1,
      21,   103,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    32,    33,    -1,    -1,    36,    -1,    38,    -1,    40,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    82,    83,     3,    85,    -1,    87,    -1,    89,    -1,
      -1,    -1,    12,    -1,    -1,    96,    -1,    -1,    18,   100,
      -1,    21,   103,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    32,    33,    -1,    -1,    36,    -1,    38,    -1,
      40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    83,     3,    85,    -1,    87,    -1,    89,
      -1,    -1,    -1,    12,    -1,    -1,    96,    -1,    -1,    18,
     100,    -1,    21,   103,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    32,    33,    -1,    -1,    36,    -1,    38,
      -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,    83,     3,    85,    -1,    87,    -1,
      89,    -1,    -1,    -1,    12,    -1,    -1,    96,    -1,    -1,
      18,   100,    -1,    21,   103,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    32,    33,    -1,    -1,    36,    -1,
      38,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    82,    83,     3,    85,    -1,    87,
      -1,    89,    -1,    -1,    -1,    12,    -1,    -1,    96,    -1,
      -1,    18,   100,    -1,    21,   103,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    32,    33,    -1,    -1,    36,
      -1,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82,    83,     3,    85,    -1,
      87,    -1,    89,    -1,    -1,    -1,    12,    -1,    -1,    96,
      -1,    -1,    18,   100,    -1,    21,   103,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    32,    33,    -1,    -1,
      36,    -1,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,     3,    -1,    85,
      -1,    87,    -1,    89,    -1,    -1,    12,    -1,    -1,    -1,
      96,    -1,    18,    -1,   100,    21,    -1,   103,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    32,    33,    -1,    -1,
      36,    -1,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,     3,    -1,    85,
      -1,    87,    -1,    89,    -1,    -1,    12,    -1,    -1,    -1,
      96,    -1,    18,    -1,   100,    21,    -1,   103,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    32,    33,    -1,    -1,
      36,    -1,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,     3,    -1,    85,
      -1,    87,    -1,    89,    -1,    -1,    12,    -1,    -1,    -1,
      96,    -1,    18,    -1,   100,    21,    -1,   103,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    32,    33,    -1,    -1,
      36,    -1,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,     3,    -1,    85,
      -1,    87,    -1,    89,    -1,    -1,    12,    -1,    -1,    -1,
      96,    -1,    18,    -1,   100,    21,    -1,   103,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    32,    33,    -1,    -1,
      36,    -1,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    24,    25,
      -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    54,    85,
      -1,    87,    -1,    89,    60,    -1,    62,    63,    -1,    -1,
      96,    67,    68,    69,   100,    71,    -1,   103,    -1,    75,
      76,    77,    24,    25,    80,    81,    -1,    -1,    84,    85,
      -1,    87,    -1,    89,    90,    -1,    92,    -1,    94,    95,
      -1,    -1,    -1,    99,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      62,    63,    -1,    -1,    -1,    67,    68,    69,    -1,    71,
      24,    25,    -1,    75,    76,    77,    -1,    -1,    80,    81,
      -1,    -1,    84,    85,    -1,    87,    -1,    89,    -1,    -1,
      92,    -1,    94,    95,    -1,    -1,    98,    99,    -1,   101,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    62,    63,
      -1,    -1,    -1,    67,    68,    69,    -1,    71,    24,    25,
      -1,    75,    76,    77,    -1,    -1,    80,    81,    -1,    -1,
      84,    85,    -1,    87,    -1,    89,    -1,    -1,    92,    -1,
      94,    95,    -1,    -1,    -1,    99,    -1,   101,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    62,    63,    -1,    -1,
      -1,    67,    68,    69,    -1,    71,    24,    25,    -1,    75,
      76,    77,    -1,    -1,    80,    81,    -1,    -1,    84,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    94,    95,
      -1,    -1,    -1,    99,    -1,   101,    54,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    62,    63,    24,    25,    -1,    67,
      68,    -1,    -1,    71,    -1,    -1,    -1,    75,    76,    77,
      -1,    -1,    80,    81,    -1,    -1,    84,    85,    -1,    87,
      -1,    89,    -1,    -1,    92,    -1,    94,    -1,    -1,    -1,
      -1,    99,    60,   101,    62,    63,    24,    25,    -1,    67,
      68,    -1,    -1,    71,    -1,    -1,    -1,    75,    76,    77,
      -1,    -1,    80,    81,    -1,    -1,    84,    85,    -1,    87,
      -1,    89,    -1,    -1,    92,    -1,    94,    -1,    -1,    -1,
      -1,    99,    60,   101,    62,    63,    -1,    -1,    -1,    67,
      68,    -1,    -1,    71,    -1,    -1,    -1,    75,    76,    77,
      24,    25,    80,    81,    -1,    27,    84,    85,    30,    87,
      32,    89,    27,    -1,    92,    30,    94,    32,    -1,    -1,
      -1,    99,    -1,    -1,    46,    47,    48,    49,    -1,    -1,
      -1,    46,    47,    48,    49,    -1,    60,    -1,    62,    63,
      -1,    -1,    -1,    67,    68,    -1,    -1,    71,    -1,    -1,
      -1,    75,    76,    77,    24,    25,    80,    81,    -1,    -1,
      84,    85,    -1,    87,    86,    89,    -1,    -1,    92,    91,
      94,    86,    -1,    -1,    96,    -1,    91,    -1,    -1,    -1,
     102,    96,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      60,    -1,    62,    63,    -1,    -1,    -1,    67,    68,    -1,
      -1,    71,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,
      80,    -1,    -1,    -1,    84,    85,    -1,    87,    -1,    89,
      -1,    -1,    92,    -1,    94
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     7,     8,     9,    12,    13,    16,    18,
      20,    21,    22,    23,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    36,    37,    38,    39,    40,    41,    42,
      43,    45,    51,    52,    58,    61,    79,    82,    85,    87,
      89,    91,    96,   100,   103,   105,   106,   109,   110,   111,
     113,   114,   116,   117,   118,   119,   122,   128,   129,   131,
     135,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     151,    32,    82,   100,   144,    91,   128,   137,    27,    27,
      96,   100,   130,    91,   144,   100,    27,   100,    82,    27,
      82,    82,    27,   100,   130,   144,    91,   137,    88,    82,
      91,   137,   100,    52,   140,   143,   144,   130,   143,    82,
      91,   137,    21,   140,   144,   144,   144,    83,   137,   139,
     140,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    53,
      54,    55,    56,    57,    58,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   146,   147,
     150,    98,   136,   138,    27,    30,    32,    46,    47,    48,
      49,    91,    96,   102,   106,   108,   123,   124,   125,   126,
     127,   132,   133,   134,     0,   109,    91,    91,    86,    91,
      82,    24,    25,    54,    60,    62,    63,    67,    68,    69,
      71,    75,    76,    77,    80,    81,    84,    85,    87,    89,
      92,    94,    95,    99,   101,    53,    55,    56,    58,    59,
      61,    64,    65,    66,    70,    72,    73,    74,    78,    82,
      88,    93,    96,   143,   137,    27,    30,    32,    91,    96,
      91,    17,   100,    93,    27,   112,   112,    86,   106,    51,
     112,    26,    41,    91,   122,   128,   129,   137,   141,    82,
      83,   137,   137,    51,   112,    91,    27,   137,    91,   106,
     107,    21,   137,    91,    27,    56,    83,    83,    83,    83,
      89,    96,    97,   148,   149,   150,    89,    96,    97,   150,
      89,   147,    86,    98,    82,   126,   134,   126,    47,    48,
     126,   127,   138,    27,   102,    86,   102,   124,   125,   102,
      86,    82,    90,   138,    83,   137,   142,   144,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   100,   138,   142,   142,   142,   142,   142,
     142,   142,   142,   142,    83,   137,    12,    27,    28,    46,
      47,    48,    51,    52,   139,   142,   142,    83,   138,   144,
     102,   123,   138,    86,    98,   102,    27,   102,    32,   102,
      27,    27,   115,   137,    91,    91,    91,    91,    83,    83,
     137,   100,    83,    83,    32,   102,    83,   102,    27,    83,
      82,   100,   138,    56,    82,    89,    96,    97,   150,    98,
     149,    27,   138,    83,   137,    82,   126,   126,    98,    90,
     124,    49,   125,   132,   134,    83,   137,   138,    83,    93,
      90,   107,    83,    98,   100,   102,    27,    93,    93,    93,
      43,    51,    24,    24,    91,   115,   115,   115,   115,   109,
     100,    83,   107,   100,   109,    51,   100,     6,    82,   109,
      83,   137,   107,   100,   138,    83,   137,   100,    83,    83,
     137,   106,    82,   100,    83,   142,   102,   102,   123,   138,
     138,   138,    82,    32,   138,   138,   115,    91,    91,    91,
      91,   107,   100,   102,   107,    14,    32,     5,    11,   120,
     121,    82,    83,   137,   100,    83,   102,   107,    83,   107,
     100,   100,    83,    83,   137,   107,   100,   102,   137,    83,
      83,    83,   115,   115,   115,   115,   102,   107,   102,   109,
     138,    90,   102,   121,   138,   100,    83,   107,   100,   102,
     102,   107,   107,   100,   100,    83,   102,   107,    83,   109,
     109,   109,    83,    83,    83,    83,   102,    90,   107,    83,
     107,   100,   102,   107,   102,   102,   107,   107,   100,   102,
     109,   109,   109,   109,   107,   100,   102,   107,   102,   102,
     102,   107,   107,   102,   102,   102
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   110,   110,   110,   110,   111,   111,
     111,   111,   112,   112,   113,   114,   114,   115,   115,   116,
     116,   116,   116,   116,   116,   116,   116,   117,   118,   119,
     120,   120,   121,   121,   122,   122,   122,   122,   123,   123,
     123,   124,   124,   124,   124,   124,   124,   125,   125,   125,
     125,   126,   126,   127,   127,   128,   128,   128,   128,   128,
     128,   128,   128,   129,   129,   129,   130,   130,   130,   130,
     130,   130,   130,   130,   131,   131,   131,   132,   132,   132,
     133,   133,   133,   133,   133,   134,   134,   134,   134,   135,
     135,   136,   136,   136,   137,   137,   138,   138,   139,   139,
     139,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   141,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   145,   145,   146,
     146,   147,   147,   147,   147,   147,   147,   148,   148,   149,
     149,   149,   149,   149,   149,   149,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     151,   151,   151,   151
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     0,     1,     1,     4,     2,
       1,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     3,     2,     3,     2,     3,     2,     3,     2,     2,
       1,     1,     1,     1,     2,     4,     4,     6,     2,     4,
       4,     6,     1,     3,    11,     5,     7,     0,     1,     8,
       9,     9,     9,     9,     5,     8,     8,     8,     5,     7,
       1,     2,     4,     3,     4,     5,     6,     7,     1,     3,
       2,     1,     1,     2,     2,     1,     1,     2,     2,     3,
       3,     6,     7,     6,     7,     7,     8,     8,     9,     6,
       5,     4,     3,     2,     2,     2,     1,     3,     3,     5,
       3,     5,     3,     5,     2,     3,     3,     1,     2,     3,
       1,     3,     6,     7,     1,     1,     1,     1,     3,     2,
       3,     1,     3,     2,     1,     3,     1,     1,     1,     2,
       3,     6,     7,     4,     5,     6,     7,     3,     3,     5,
       1,     3,     1,     5,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     4,     3,     3,     1,     3,     4,     1,
       2,     1,     2,     2,     2,     2,     3,     1,     2,     1,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
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
        case 225:
#line 361 "js.y" /* yacc.c:1646  */
    {/*danger*/}
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 366 "js.y" /* yacc.c:1646  */
    { /*l_name = 'yuisgm'*/ }
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2500 "y.tab.c" /* yacc.c:1646  */
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
#line 491 "js.y" /* yacc.c:1906  */
