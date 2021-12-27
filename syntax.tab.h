/* A Bison parser, made by GNU Bison 3.7.4.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    T_EOF = 0,                     /* "EOF"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_PROGRAM = 258,               /* "program"  */
    T_CONST = 259,                 /* "const"  */
    T_TYPE = 260,                  /* "type"  */
    T_ARRAY = 261,                 /* "array"  */
    T_SET = 262,                   /* "set"  */
    T_OF = 263,                    /* "of"  */
    T_RECORD = 264,                /* "record"  */
    T_VAR = 265,                   /* "var"  */
    T_FORWARD = 266,               /* "forward"  */
    T_FUNCTION = 267,              /* "function"  */
    T_PROCEDURE = 268,             /* "procedure"  */
    T_INTEGER = 269,               /* "integer"  */
    T_REAL = 270,                  /* "real"  */
    T_BOOLEAN = 271,               /* "boolean"  */
    T_CHAR = 272,                  /* "char"  */
    T_BEGIN = 273,                 /* "begin"  */
    T_END = 274,                   /* "end"  */
    T_IF = 275,                    /* "if"  */
    T_THEN = 276,                  /* "then"  */
    T_ELSE = 277,                  /* "else"  */
    T_WHILE = 278,                 /* "while"  */
    T_DO = 279,                    /* "do"  */
    T_FOR = 280,                   /* "for"  */
    T_DOWNTO = 281,                /* "downto"  */
    T_TO = 282,                    /* "to"  */
    T_WITH = 283,                  /* "with"  */
    T_READ = 284,                  /* "read"  */
    T_WRITE = 285,                 /* "write"  */
    T_ID = 286,                    /* "id"  */
    T_ICONST = 287,                /* "iconst"  */
    T_RCONST = 288,                /* "rconst"  */
    T_BCONST = 289,                /* "bconst"  */
    T_CCONST = 290,                /* "cconst"  */
    T_RELOP = 291,                 /* "> or >= or < or <= or <>"  */
    T_ADDOP = 292,                 /* "+ or -"  */
    T_OROP = 293,                  /* "or"  */
    T_MULDIVANDOP = 294,           /* "* or / or div or mod or and"  */
    T_NOTOP = 295,                 /* "not"  */
    T_INOP = 296,                  /* "in"  */
    T_STRING = 297,                /* "string"  */
    T_LPAREN = 298,                /* "("  */
    T_RPAREN = 299,                /* ")"  */
    T_SEMI = 300,                  /* ";"  */
    T_DOT = 301,                   /* "."  */
    T_COMMA = 302,                 /* ","  */
    T_EQU = 303,                   /* "="  */
    T_COLON = 304,                 /* ":"  */
    T_LBRACK = 305,                /* "["  */
    T_RBRACK = 306,                /* "]"  */
    T_ASSIGN = 307,                /* ":="  */
    T_DOTDOT = 308                 /* ".."  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "syntax.y"

    int intval;
    float floatval;
    int boolean;
    char charval;
    char* strval;

#line 125 "syntax.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */
