/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    KW_AND = 258,
    KW_OR = 259,
    KW_NOT = 260,
    KW_LIST = 261,
    KW_DISP = 262,
    KW_LOAD = 263,
    KW_FALSE = 264,
    KW_SET = 265,
    KW_SETQ = 266,
    KW_DEFFUN = 267,
    KW_DEFVAR = 268,
    KW_EQUAL = 269,
    KW_LESS = 270,
    KW_IF = 271,
    KW_EXIT = 272,
    KW_NIL = 273,
    KW_TRUE = 274,
    KW_APPEND = 275,
    KW_CONCAT = 276,
    KW_FOR = 277,
    KW_FLOAT = 278,
    OP_PLUS = 279,
    OP_MINUS = 280,
    OP_DIV = 281,
    OP_MULT = 282,
    OP_DBLMULT = 283,
    OP_OP = 284,
    OP_CP = 285,
    OP_COMMA = 286,
    OP_OC = 287,
    OP_CC = 288,
    COMMA = 289,
    NUMBER = 290,
    IDENTIFIER = 291,
    KW_WHILE = 292,
    INTEGER = 293,
    KW_FILE = 294,
    KW_COMMENT = 295,
    KW_LISTQUOTES = 296
  };
#endif
/* Tokens.  */
#define KW_AND 258
#define KW_OR 259
#define KW_NOT 260
#define KW_LIST 261
#define KW_DISP 262
#define KW_LOAD 263
#define KW_FALSE 264
#define KW_SET 265
#define KW_SETQ 266
#define KW_DEFFUN 267
#define KW_DEFVAR 268
#define KW_EQUAL 269
#define KW_LESS 270
#define KW_IF 271
#define KW_EXIT 272
#define KW_NIL 273
#define KW_TRUE 274
#define KW_APPEND 275
#define KW_CONCAT 276
#define KW_FOR 277
#define KW_FLOAT 278
#define OP_PLUS 279
#define OP_MINUS 280
#define OP_DIV 281
#define OP_MULT 282
#define OP_DBLMULT 283
#define OP_OP 284
#define OP_CP 285
#define OP_COMMA 286
#define OP_OC 287
#define OP_CC 288
#define COMMA 289
#define NUMBER 290
#define IDENTIFIER 291
#define KW_WHILE 292
#define INTEGER 293
#define KW_FILE 294
#define KW_COMMENT 295
#define KW_LISTQUOTES 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
