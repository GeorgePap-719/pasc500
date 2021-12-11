/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntax.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



extern FILE *yyin;
extern int yylex();
extern void yyerror(const char* error);


#line 84 "syntax.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "EOF"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_PROGRAM = 3,                  /* "program"  */
  YYSYMBOL_T_CONST = 4,                    /* "const"  */
  YYSYMBOL_T_TYPE = 5,                     /* "type"  */
  YYSYMBOL_T_ARRAY = 6,                    /* "array"  */
  YYSYMBOL_T_SET = 7,                      /* "set"  */
  YYSYMBOL_T_OF = 8,                       /* "of"  */
  YYSYMBOL_T_RECORD = 9,                   /* "record"  */
  YYSYMBOL_T_VAR = 10,                     /* "var"  */
  YYSYMBOL_T_FORWARD = 11,                 /* "forward"  */
  YYSYMBOL_T_FUNCTION = 12,                /* "function"  */
  YYSYMBOL_T_PROCEDURE = 13,               /* "procedure"  */
  YYSYMBOL_T_INTEGER = 14,                 /* "integer"  */
  YYSYMBOL_T_REAL = 15,                    /* "real"  */
  YYSYMBOL_T_BOOLEAN = 16,                 /* "boolean"  */
  YYSYMBOL_T_CHAR = 17,                    /* "char"  */
  YYSYMBOL_T_BEGIN = 18,                   /* "begin"  */
  YYSYMBOL_T_END = 19,                     /* "end"  */
  YYSYMBOL_T_IF = 20,                      /* "if"  */
  YYSYMBOL_T_THEN = 21,                    /* "then"  */
  YYSYMBOL_T_ELSE = 22,                    /* "else"  */
  YYSYMBOL_T_WHILE = 23,                   /* "while"  */
  YYSYMBOL_T_DO = 24,                      /* "do"  */
  YYSYMBOL_T_FOR = 25,                     /* "for"  */
  YYSYMBOL_T_DOWNTO = 26,                  /* "downto"  */
  YYSYMBOL_T_TO = 27,                      /* "to"  */
  YYSYMBOL_T_WITH = 28,                    /* "with"  */
  YYSYMBOL_T_READ = 29,                    /* "read"  */
  YYSYMBOL_T_WRITE = 30,                   /* "write"  */
  YYSYMBOL_T_ID = 31,                      /* "id"  */
  YYSYMBOL_T_ICONST = 32,                  /* "iconst"  */
  YYSYMBOL_T_RCONST = 33,                  /* "rconst"  */
  YYSYMBOL_T_BCONST = 34,                  /* "bconst"  */
  YYSYMBOL_T_CCONST = 35,                  /* "cconst"  */
  YYSYMBOL_T_RELOP = 36,                   /* "> or >= or < or <= or <>"  */
  YYSYMBOL_T_ADDOP = 37,                   /* "+ or -"  */
  YYSYMBOL_T_OROP = 38,                    /* "or"  */
  YYSYMBOL_T_MULDIVANDOP = 39,             /* "* or / or div or mod or and"  */
  YYSYMBOL_T_NOTOP = 40,                   /* "not"  */
  YYSYMBOL_T_INOP = 41,                    /* "in"  */
  YYSYMBOL_T_STRING = 42,                  /* "string"  */
  YYSYMBOL_T_LPAREN = 43,                  /* "("  */
  YYSYMBOL_T_RPAREN = 44,                  /* ")"  */
  YYSYMBOL_T_SEMI = 45,                    /* ";"  */
  YYSYMBOL_T_DOT = 46,                     /* "."  */
  YYSYMBOL_T_COMMA = 47,                   /* ","  */
  YYSYMBOL_T_EQU = 48,                     /* "="  */
  YYSYMBOL_T_COLON = 49,                   /* ":"  */
  YYSYMBOL_T_LBRACK = 50,                  /* "["  */
  YYSYMBOL_T_RBRACK = 51,                  /* "]"  */
  YYSYMBOL_T_ASSIGN = 52,                  /* ":="  */
  YYSYMBOL_T_DOTDOT = 53,                  /* ".."  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_program = 55,                   /* program  */
  YYSYMBOL_header = 56,                    /* header  */
  YYSYMBOL_declarations = 57,              /* declarations  */
  YYSYMBOL_constdefs = 58,                 /* constdefs  */
  YYSYMBOL_constant_defs = 59,             /* constant_defs  */
  YYSYMBOL_expression = 60,                /* expression  */
  YYSYMBOL_variable = 61,                  /* variable  */
  YYSYMBOL_expressions = 62,               /* expressions  */
  YYSYMBOL_constant = 63,                  /* constant  */
  YYSYMBOL_setexpression = 64,             /* setexpression  */
  YYSYMBOL_elexpressions = 65,             /* elexpressions  */
  YYSYMBOL_elexpression = 66,              /* elexpression  */
  YYSYMBOL_typedefs = 67,                  /* typedefs  */
  YYSYMBOL_type_defs = 68,                 /* type_defs  */
  YYSYMBOL_type_def = 69,                  /* type_def  */
  YYSYMBOL_dims = 70,                      /* dims  */
  YYSYMBOL_limits = 71,                    /* limits  */
  YYSYMBOL_limit = 72,                     /* limit  */
  YYSYMBOL_typename = 73,                  /* typename  */
  YYSYMBOL_standard_type = 74,             /* standard_type  */
  YYSYMBOL_fields = 75,                    /* fields  */
  YYSYMBOL_field = 76,                     /* field  */
  YYSYMBOL_identifiers = 77,               /* identifiers  */
  YYSYMBOL_vardefs = 78,                   /* vardefs  */
  YYSYMBOL_variable_defs = 79,             /* variable_defs  */
  YYSYMBOL_subprograms = 80,               /* subprograms  */
  YYSYMBOL_subprogram = 81,                /* subprogram  */
  YYSYMBOL_sub_header = 82,                /* sub_header  */
  YYSYMBOL_formal_parameters = 83,         /* formal_parameters  */
  YYSYMBOL_parameter_list = 84,            /* parameter_list  */
  YYSYMBOL_pass = 85,                      /* pass  */
  YYSYMBOL_comp_statement = 86,            /* comp_statement  */
  YYSYMBOL_statements = 87,                /* statements  */
  YYSYMBOL_statement = 88,                 /* statement  */
  YYSYMBOL_assignment = 89,                /* assignment  */
  YYSYMBOL_if_statement = 90,              /* if_statement  */
  YYSYMBOL_if_tail = 91,                   /* if_tail  */
  YYSYMBOL_while_statement = 92,           /* while_statement  */
  YYSYMBOL_for_statement = 93,             /* for_statement  */
  YYSYMBOL_iter_space = 94,                /* iter_space  */
  YYSYMBOL_with_statement = 95,            /* with_statement  */
  YYSYMBOL_subprogram_call = 96,           /* subprogram_call  */
  YYSYMBOL_io_statement = 97,              /* io_statement  */
  YYSYMBOL_read_list = 98,                 /* read_list  */
  YYSYMBOL_read_item = 99,                 /* read_item  */
  YYSYMBOL_write_list = 100,               /* write_list  */
  YYSYMBOL_write_item = 101                /* write_item  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   281

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  231

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    86,    86,    88,    90,    92,    93,    95,    96,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   112,   113,   114,   116,   117,   119,   120,   121,
     122,   124,   125,   127,   128,   130,   131,   133,   134,   136,
     137,   139,   140,   141,   142,   143,   145,   146,   148,   149,
     151,   152,   153,   154,   155,   156,   158,   159,   161,   161,
     161,   161,   163,   164,   166,   168,   169,   171,   172,   174,
     175,   177,   178,   180,   181,   183,   184,   185,   187,   188,
     190,   191,   193,   193,   195,   197,   198,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   210,   211,   213,   215,
     216,   218,   220,   222,   223,   225,   227,   228,   230,   231,
     233,   234,   236,   238,   239,   241,   242
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"EOF\"", "error", "\"invalid token\"", "\"program\"", "\"const\"",
  "\"type\"", "\"array\"", "\"set\"", "\"of\"", "\"record\"", "\"var\"",
  "\"forward\"", "\"function\"", "\"procedure\"", "\"integer\"",
  "\"real\"", "\"boolean\"", "\"char\"", "\"begin\"", "\"end\"", "\"if\"",
  "\"then\"", "\"else\"", "\"while\"", "\"do\"", "\"for\"", "\"downto\"",
  "\"to\"", "\"with\"", "\"read\"", "\"write\"", "\"id\"", "\"iconst\"",
  "\"rconst\"", "\"bconst\"", "\"cconst\"", "\"> or >= or < or <= or <>\"",
  "\"+ or -\"", "\"or\"", "\"* or / or div or mod or and\"", "\"not\"",
  "\"in\"", "\"string\"", "\"(\"", "\")\"", "\";\"", "\".\"", "\",\"",
  "\"=\"", "\":\"", "\"[\"", "\"]\"", "\":=\"", "\"..\"", "$accept",
  "program", "header", "declarations", "constdefs", "constant_defs",
  "expression", "variable", "expressions", "constant", "setexpression",
  "elexpressions", "elexpression", "typedefs", "type_defs", "type_def",
  "dims", "limits", "limit", "typename", "standard_type", "fields",
  "field", "identifiers", "vardefs", "variable_defs", "subprograms",
  "subprogram", "sub_header", "formal_parameters", "parameter_list",
  "pass", "comp_statement", "statements", "statement", "assignment",
  "if_statement", "if_tail", "while_statement", "for_statement",
  "iter_space", "with_statement", "subprogram_call", "io_statement",
  "read_list", "read_item", "write_list", "write_item", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
#endif

#define YYPACT_NINF (-151)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-107)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      23,   -25,    51,    75,    24,  -151,    53,  -151,   104,  -151,
      64,    73,    -3,    99,   138,   197,   129,   140,   146,   158,
     121,   145,   139,   143,   147,   165,  -151,   154,  -151,  -151,
    -151,  -151,   197,   197,   197,   118,    98,     0,  -151,  -151,
     150,    11,   162,   197,   197,   176,   177,   167,   170,     2,
      35,  -151,    -8,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,    19,  -151,    65,   190,  -151,   -42,   179,   197,
      98,    98,   205,  -151,    20,    42,  -151,   197,   197,   197,
     197,   197,   197,   191,   197,   197,   217,   186,  -151,    -5,
      83,   184,  -151,     3,   177,   169,   197,   183,  -151,   158,
    -151,  -151,   188,   231,   165,  -151,  -151,  -151,  -151,     8,
     165,  -151,   192,   200,   219,   148,   165,    98,    54,  -151,
     197,   197,  -151,    98,    98,    98,    98,    98,    98,  -151,
      43,    98,  -151,    59,   165,   251,   158,   158,   197,   158,
       0,    69,  -151,  -151,    98,    70,  -151,   112,  -151,    98,
    -151,    -3,   220,   148,    -7,  -151,    80,  -151,  -151,   123,
     227,    65,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
      91,  -151,   197,    98,  -151,  -151,  -151,   217,   125,  -151,
     234,  -151,   106,   236,  -151,  -151,   177,  -151,   169,  -151,
    -151,   210,    44,  -151,   216,  -151,  -151,   165,   148,  -151,
    -151,  -151,   148,    98,   165,   148,   158,  -151,   197,   197,
     158,  -151,  -151,   220,   262,   227,  -151,  -151,  -151,   135,
    -151,  -151,    98,    98,  -151,  -151,   148,  -151,   148,  -151,
    -151
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     6,     0,     1,     0,    72,    38,     3,
       0,     0,     0,     0,    68,     0,     5,     0,     0,    95,
       0,     0,     0,     0,     0,     0,     4,    22,    27,    28,
      29,    30,     0,     0,     0,     0,     8,    17,    19,    21,
       0,    77,    79,     0,     0,     0,     0,     0,     0,    22,
       0,    94,     0,    86,    87,    88,    89,    90,    91,    92,
      93,    71,     6,     2,     0,    37,    66,     0,     0,     0,
      15,    16,     0,    32,    36,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,    76,     0,
       0,     0,    22,     0,     0,     0,     0,     0,    84,    95,
      73,    72,     0,     0,     0,    55,    52,    54,    53,     0,
       0,    40,     0,     0,     0,     0,    67,    26,     0,    20,
       0,     0,    31,     9,    13,    12,    14,    11,    10,    23,
       0,     7,    82,     0,     0,     0,    95,    95,     0,    95,
     112,     0,   111,   116,   115,     0,   114,     0,    97,    96,
      85,     0,     0,     0,     0,    63,     0,    51,    50,     0,
       0,     0,    65,    58,    59,    60,    61,    57,    70,    56,
       0,    18,     0,    35,    33,    24,    78,    83,     0,    75,
     100,   101,     0,     0,   105,   108,     0,   109,     0,   107,
      74,    49,     0,    47,     0,    42,    43,     0,     0,    44,
      45,    39,     0,    25,     0,     0,    95,    98,     0,     0,
      95,   110,   113,     0,     0,     0,    62,    64,    69,     0,
      81,    99,   104,   103,   102,    46,     0,    48,     0,    41,
      80
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,  -151,   209,  -151,  -151,   -15,   -11,   -71,  -151,
    -151,  -151,   151,  -151,  -151,   113,  -151,    60,  -138,  -150,
     141,  -151,    78,   -24,  -151,  -151,   178,  -151,  -151,   235,
    -151,   101,   -10,  -151,   -95,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,    94,  -151,    93
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     8,    11,   117,    37,   118,    38,
      39,    75,    76,    14,    24,   111,   192,   193,   112,   168,
     169,   154,   155,   156,    26,    68,    12,    20,    21,    87,
     133,   134,    51,    52,    53,    54,    55,   207,    56,    57,
     183,    58,    59,    60,   141,   142,   145,   146
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    67,    22,   195,   150,   114,     4,   115,    50,    17,
      18,    98,   196,   130,   194,    19,   136,    70,    71,    72,
      74,  -106,   200,     6,  -106,   147,     1,   139,    89,    90,
     100,    77,    78,    79,    80,    93,    81,    99,   197,   157,
     158,   180,   181,    82,   184,    96,    83,  -106,   217,    83,
      84,     5,   218,    84,    86,   220,    77,    78,    79,    80,
     -79,    81,   123,   124,   125,   126,   127,   128,    82,     9,
     131,   102,   103,   120,   104,   194,   229,   227,   230,     6,
     144,    83,   149,   140,    10,    84,   159,    97,    50,   121,
     172,   213,   170,   122,   175,   214,   105,   106,   171,   107,
     108,   172,   109,   176,   177,   173,    74,   137,   110,    13,
     178,   221,    15,   185,   187,   224,   186,   188,    16,    77,
      78,    79,    80,   182,    81,    50,    50,   114,    50,   198,
      23,    82,   208,   209,    77,    78,    79,    80,   114,    81,
     202,   190,    77,    78,    79,    80,    82,    81,    25,    27,
      28,    29,    30,    31,    82,    32,   189,   203,    33,   172,
      40,    34,   163,   164,   165,   166,    61,   199,    35,    73,
     114,    41,   114,   144,   205,   140,    19,    42,    43,   167,
     219,    44,   114,    45,   228,    63,    46,    47,    48,    49,
      62,    64,    65,   222,   223,    50,    66,    69,    85,    50,
      27,    28,    29,    30,    31,    86,    32,    91,    92,    33,
      94,   143,    34,    95,    27,    28,    29,    30,    31,    35,
      32,   113,   129,    33,   116,   148,    34,   132,    27,    28,
      29,    30,    31,    35,    32,   135,   138,    33,   152,   153,
      34,    77,    78,    79,    80,   160,    81,    35,   161,   119,
     162,   191,   106,    82,   107,   108,   206,   109,   105,   106,
     210,   107,   108,   -55,   109,   163,   164,   165,   166,   215,
     226,   101,   174,   225,   201,   216,   179,    88,   204,   151,
     211,   212
};

static const yytype_uint8 yycheck[] =
{
      15,    25,    12,   153,    99,    47,    31,    49,    19,    12,
      13,    19,    19,    84,   152,    18,    21,    32,    33,    34,
      35,    19,   160,     4,    22,    96,     3,    24,    43,    44,
      11,    36,    37,    38,    39,    46,    41,    45,    45,    31,
      32,   136,   137,    48,   139,    43,    46,    45,   198,    46,
      50,     0,   202,    50,    43,   205,    36,    37,    38,    39,
      49,    41,    77,    78,    79,    80,    81,    82,    48,    45,
      85,     6,     7,    53,     9,   213,   226,   215,   228,     4,
      95,    46,    97,    94,    31,    50,   110,    52,    99,    47,
      47,    47,   116,    51,    51,    51,    31,    32,    44,    34,
      35,    47,    37,    44,    45,   120,   121,    24,    43,     5,
     134,   206,    48,    44,    44,   210,    47,    47,    45,    36,
      37,    38,    39,   138,    41,   136,   137,    47,   139,    49,
      31,    48,    26,    27,    36,    37,    38,    39,    47,    41,
      49,   151,    36,    37,    38,    39,    48,    41,    10,    31,
      32,    33,    34,    35,    48,    37,    44,   172,    40,    47,
      31,    43,    14,    15,    16,    17,    45,    44,    50,    51,
      47,    31,    47,   188,    49,   186,    18,    31,    20,    31,
     204,    23,    47,    25,    49,    46,    28,    29,    30,    31,
      45,    48,    45,   208,   209,   206,    31,    43,    48,   210,
      31,    32,    33,    34,    35,    43,    37,    31,    31,    40,
      43,    42,    43,    43,    31,    32,    33,    34,    35,    50,
      37,    31,    31,    40,    45,    42,    43,    10,    31,    32,
      33,    34,    35,    50,    37,    49,    52,    40,    50,     8,
      43,    36,    37,    38,    39,    53,    41,    50,    48,    44,
      31,    31,    32,    48,    34,    35,    22,    37,    31,    32,
      24,    34,    35,    53,    37,    14,    15,    16,    17,    53,
       8,    62,   121,   213,   161,   197,   135,    42,   177,   101,
     186,   188
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    55,    56,    31,     0,     4,    57,    58,    45,
      31,    59,    80,     5,    67,    48,    45,    12,    13,    18,
      81,    82,    86,    31,    68,    10,    78,    31,    32,    33,
      34,    35,    37,    40,    43,    50,    60,    61,    63,    64,
      31,    31,    31,    20,    23,    25,    28,    29,    30,    31,
      61,    86,    87,    88,    89,    90,    92,    93,    95,    96,
      97,    45,    45,    46,    48,    45,    31,    77,    79,    43,
      60,    60,    60,    51,    60,    65,    66,    36,    37,    38,
      39,    41,    48,    46,    50,    48,    43,    83,    83,    60,
      60,    31,    31,    61,    43,    43,    43,    52,    19,    45,
      11,    57,     6,     7,     9,    31,    32,    34,    35,    37,
      43,    69,    72,    31,    47,    49,    45,    60,    62,    44,
      53,    47,    51,    60,    60,    60,    60,    60,    60,    31,
      62,    60,    10,    84,    85,    49,    21,    24,    52,    24,
      61,    98,    99,    42,    60,   100,   101,    62,    42,    60,
      88,    80,    50,     8,    75,    76,    77,    31,    32,    77,
      53,    48,    31,    14,    15,    16,    17,    31,    73,    74,
      77,    44,    47,    60,    66,    51,    44,    45,    77,    74,
      88,    88,    60,    94,    88,    44,    47,    44,    47,    44,
      86,    31,    70,    71,    72,    73,    19,    45,    49,    44,
      72,    69,    49,    60,    85,    49,    22,    91,    26,    27,
      24,    99,   101,    47,    51,    53,    76,    73,    73,    77,
      73,    88,    60,    60,    88,    71,     8,    72,    49,    73,
      73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    57,    58,    58,    59,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    61,    61,    61,    62,    62,    63,    63,    63,
      63,    64,    64,    65,    65,    66,    66,    67,    67,    68,
      68,    69,    69,    69,    69,    69,    70,    70,    71,    71,
      72,    72,    72,    72,    72,    72,    73,    73,    74,    74,
      74,    74,    75,    75,    76,    77,    77,    78,    78,    79,
      79,    80,    80,    81,    81,    82,    82,    82,    83,    83,
      84,    84,    85,    85,    86,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    89,    89,    90,    91,
      91,    92,    93,    94,    94,    95,    96,    96,    97,    97,
      98,    98,    99,   100,   100,   101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     3,     3,     3,     0,     5,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     1,     4,     1,
       3,     1,     1,     3,     4,     3,     1,     1,     1,     1,
       1,     3,     2,     3,     1,     3,     1,     3,     0,     5,
       3,     6,     3,     3,     3,     3,     3,     1,     3,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     3,     1,     3,     0,     5,
       3,     3,     0,     3,     5,     5,     3,     2,     3,     0,
       6,     4,     1,     0,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     3,     5,     2,
       0,     4,     6,     3,     3,     4,     1,     4,     4,     4,
       3,     1,     1,     3,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= T_EOF)
    {
      yychar = T_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

#line 1345 "syntax.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= T_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == T_EOF)
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 244 "syntax.y"



int main(int argc, char* argv[]) {
 int token;

    if(argc > 1){
        yyin = fopen(argv[1], "r");
        if (yyin == NULL){
            perror ("Error opening file"); return -1;
        }
    }

    yyparse();

    printf("Program analyzed successfully\n");

    fclose(yyin);
    return 0;
}
