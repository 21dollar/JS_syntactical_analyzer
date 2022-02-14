/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
