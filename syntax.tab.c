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
#include "hashtbl.h"

extern FILE *yyin;
extern int yylex();
extern void yyerror(const char* error);

HASHTBL *hashtbl;
int scope = 0;


#line 86 "syntax.tab.c"

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
  YYSYMBOL_LOWER_THAN_ELSE = 54,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_program = 56,                   /* program  */
  YYSYMBOL_header = 57,                    /* header  */
  YYSYMBOL_declarations = 58,              /* declarations  */
  YYSYMBOL_constdefs = 59,                 /* constdefs  */
  YYSYMBOL_constant_defs = 60,             /* constant_defs  */
  YYSYMBOL_expression = 61,                /* expression  */
  YYSYMBOL_variable = 62,                  /* variable  */
  YYSYMBOL_expressions = 63,               /* expressions  */
  YYSYMBOL_constant = 64,                  /* constant  */
  YYSYMBOL_setexpression = 65,             /* setexpression  */
  YYSYMBOL_elexpressions = 66,             /* elexpressions  */
  YYSYMBOL_elexpression = 67,              /* elexpression  */
  YYSYMBOL_typedefs = 68,                  /* typedefs  */
  YYSYMBOL_type_defs = 69,                 /* type_defs  */
  YYSYMBOL_type_def = 70,                  /* type_def  */
  YYSYMBOL_dims = 71,                      /* dims  */
  YYSYMBOL_limits = 72,                    /* limits  */
  YYSYMBOL_limit = 73,                     /* limit  */
  YYSYMBOL_typename = 74,                  /* typename  */
  YYSYMBOL_standard_type = 75,             /* standard_type  */
  YYSYMBOL_fields = 76,                    /* fields  */
  YYSYMBOL_field = 77,                     /* field  */
  YYSYMBOL_identifiers = 78,               /* identifiers  */
  YYSYMBOL_vardefs = 79,                   /* vardefs  */
  YYSYMBOL_variable_defs = 80,             /* variable_defs  */
  YYSYMBOL_subprograms = 81,               /* subprograms  */
  YYSYMBOL_subprogram = 82,                /* subprogram  */
  YYSYMBOL_sub_header = 83,                /* sub_header  */
  YYSYMBOL_formal_parameters = 84,         /* formal_parameters  */
  YYSYMBOL_parameter_list = 85,            /* parameter_list  */
  YYSYMBOL_pass = 86,                      /* pass  */
  YYSYMBOL_comp_statement = 87,            /* comp_statement  */
  YYSYMBOL_statements = 88,                /* statements  */
  YYSYMBOL_statement = 89,                 /* statement  */
  YYSYMBOL_assignment = 90,                /* assignment  */
  YYSYMBOL_if_statement = 91,              /* if_statement  */
  YYSYMBOL_if_tail = 92,                   /* if_tail  */
  YYSYMBOL_while_statement = 93,           /* while_statement  */
  YYSYMBOL_for_statement = 94,             /* for_statement  */
  YYSYMBOL_iter_space = 95,                /* iter_space  */
  YYSYMBOL_with_statement = 96,            /* with_statement  */
  YYSYMBOL_subprogram_call = 97,           /* subprogram_call  */
  YYSYMBOL_io_statement = 98,              /* io_statement  */
  YYSYMBOL_read_list = 99,                 /* read_list  */
  YYSYMBOL_read_item = 100,                /* read_item  */
  YYSYMBOL_write_list = 101,               /* write_list  */
  YYSYMBOL_write_item = 102                /* write_item  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   423

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  252

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   309


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   101,   101,   103,   104,   105,   106,   108,   110,   111,
     113,   114,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   130,   131,   132,   134,   135,
     137,   138,   139,   140,   142,   143,   144,   145,   146,   147,
     148,   150,   151,   153,   154,   156,   157,   159,   160,   162,
     163,   164,   165,   166,   168,   169,   171,   172,   174,   175,
     176,   177,   178,   179,   181,   182,   184,   184,   184,   184,
     186,   187,   189,   191,   192,   194,   195,   197,   198,   200,
     201,   203,   204,   206,   207,   208,   210,   211,   213,   214,
     216,   216,   218,   220,   221,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   234,   235,   236,   237,   238,   239,
     240,   243,   245,   246,   248,   250,   252,   253,   255,   257,
     258,   260,   261,   263,   264,   266,   268,   269,   271,   272
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
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
  "\"=\"", "\":\"", "\"[\"", "\"]\"", "\":=\"", "\"..\"",
  "LOWER_THAN_ELSE", "$accept", "program", "header", "declarations",
  "constdefs", "constant_defs", "expression", "variable", "expressions",
  "constant", "setexpression", "elexpressions", "elexpression", "typedefs",
  "type_defs", "type_def", "dims", "limits", "limit", "typename",
  "standard_type", "fields", "field", "identifiers", "vardefs",
  "variable_defs", "subprograms", "subprogram", "sub_header",
  "formal_parameters", "parameter_list", "pass", "comp_statement",
  "statements", "statement", "assignment", "if_statement", "if_tail",
  "while_statement", "for_statement", "iter_space", "with_statement",
  "subprogram_call", "io_statement", "read_list", "read_item",
  "write_list", "write_item", YY_NULLPTR
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
     305,   306,   307,   308,   309
};
#endif

#define YYPACT_NINF (-170)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-120)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     155,    -9,     9,    46,    72,    38,    74,     6,  -170,   103,
    -170,   135,  -170,  -170,  -170,  -170,    50,   101,   119,   122,
     160,   308,   158,   162,   166,   365,   132,   161,   134,   165,
     169,   201,  -170,    93,   178,  -170,  -170,  -170,  -170,   308,
     308,   308,   209,   164,    15,  -170,  -170,   186,    -1,   195,
     181,   308,   308,   227,   237,   226,   231,    -6,     3,  -170,
      -4,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
      55,  -170,   366,   251,  -170,   143,   256,  -170,   146,    26,
    -170,   308,   264,  -170,   375,   128,  -170,     5,   308,   308,
     308,   308,   308,   308,   273,   308,   308,   296,   261,  -170,
     230,   -13,    67,   259,  -170,    12,   237,   244,   308,   265,
     287,  -170,   365,  -170,  -170,   262,   305,   201,  -170,  -170,
    -170,  -170,   -20,   201,  -170,   263,   266,   286,   240,   201,
     308,   308,  -170,   164,    48,  -170,  -170,  -170,  -170,    -5,
     264,   264,  -170,    -5,    -5,  -170,    34,   164,  -170,    19,
     201,   275,  -170,   164,   334,   334,   308,   334,    15,    53,
    -170,  -170,   164,    63,  -170,    98,  -170,   164,   185,  -170,
     164,  -170,   119,   192,   240,    -2,  -170,   149,  -170,  -170,
     104,   216,   366,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,   190,   164,  -170,  -170,   308,  -170,  -170,   296,   236,
    -170,   301,  -170,    75,   302,  -170,  -170,   237,  -170,   244,
    -170,  -170,   272,    71,  -170,   278,  -170,  -170,   201,   240,
    -170,  -170,  -170,   240,   164,   201,   240,   334,  -170,   308,
     308,   334,  -170,  -170,   192,   320,   216,  -170,  -170,  -170,
     246,  -170,  -170,   164,   164,  -170,  -170,   240,  -170,   240,
    -170,  -170
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     9,     0,     0,     0,     1,     0,
      80,    46,     4,     5,     6,     3,     0,     0,     0,     0,
      76,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     0,    25,    30,    31,    32,    33,     0,
       0,     0,     0,    11,    20,    22,    24,     0,    85,    87,
       0,     0,     0,     0,     0,     0,     0,    25,     0,   102,
       0,    94,    95,    96,    97,    98,    99,   100,   101,    79,
       9,     2,     0,    45,    74,     0,     0,    39,    44,     0,
      42,     0,    18,    19,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    84,
       0,     0,     0,     0,    25,     0,     0,     0,     0,     0,
       0,    92,     0,    81,    80,     0,     0,     0,    63,    60,
      62,    61,     0,     0,    48,     0,     0,     0,     0,    75,
       0,     0,    36,    29,     0,    23,    37,    38,    34,    12,
      16,    15,    17,    14,    13,    26,     0,    10,    90,     0,
       0,     0,   108,   106,     0,     0,     0,     0,   125,     0,
     124,   129,   128,     0,   127,     0,   109,   107,     0,   105,
     104,    93,     0,     0,     0,     0,    71,     0,    59,    58,
       0,     0,     0,    73,    66,    67,    68,    69,    65,    78,
      64,     0,    43,    41,    21,     0,    27,    86,    91,     0,
      83,   113,   114,     0,     0,   118,   121,     0,   122,     0,
     120,    82,    57,     0,    55,     0,    50,    51,     0,     0,
      52,    53,    47,     0,    28,     0,     0,     0,   111,     0,
       0,     0,   123,   126,     0,     0,     0,    70,    72,    77,
       0,    89,   112,   117,   116,   115,    54,     0,    56,     0,
      49,    88
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -170,  -170,  -170,   268,  -170,  -170,   -21,   -16,   -81,  -170,
    -170,   290,   202,  -170,  -170,   152,  -170,   102,  -152,  -169,
     193,  -170,   129,   -30,  -170,  -170,   232,  -170,  -170,   300,
    -170,   157,   -15,  -170,  -110,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,   153,  -170,   141
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    10,    11,    17,    78,    44,   134,    45,
      46,    79,    80,    20,    30,   124,   213,   214,   125,   189,
     190,   175,   176,   177,    32,    76,    18,    26,    27,    98,
     149,   150,    59,    60,    61,    62,    63,   228,    64,    65,
     204,    66,    67,    68,   159,   160,   163,   164
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    75,   171,    28,   109,   216,   137,    14,   154,    58,
       6,   178,   179,  -119,   146,   111,  -119,   217,    82,    83,
      84,   215,     5,    88,    89,    90,    91,   165,    92,   221,
     101,   102,    89,    90,    91,    93,   157,   108,   105,  -119,
       7,   112,    97,   218,   201,   202,     8,   205,   -87,    94,
     238,    15,   131,    95,   239,   110,   138,   241,    94,     9,
     133,    94,    95,   197,   198,    95,   113,   139,   140,   141,
     142,   143,   144,   131,   133,   147,     9,   132,   250,   153,
     251,   195,   215,    12,   248,   196,   162,   133,   167,   170,
     158,   155,   194,   180,    33,   195,    58,   206,    21,   191,
     207,   229,   230,    88,    89,    90,    91,   208,    92,   192,
     209,    88,    89,    90,    91,    93,    92,   242,   234,    13,
     199,   245,   235,    93,    34,    35,    36,    37,    38,    33,
      39,    23,    24,    40,    16,   203,    41,    25,    58,    58,
      19,    58,   210,    42,    77,   195,    22,   -40,   220,   -40,
     -40,   127,   -40,    29,   -40,   -40,     1,   211,     2,    34,
      35,    36,    37,    38,   -40,    39,   -40,   -40,    40,   -40,
      31,    41,   -40,   -40,   224,   -40,   -40,    69,    42,   136,
      71,   -40,    88,    89,    90,    91,    33,    92,   162,    47,
     127,   158,   128,    48,    93,   240,   127,    49,   219,   130,
      88,    89,    90,    91,  -110,    92,    70,  -110,   243,   244,
      85,    58,    93,    72,    73,    58,    34,    35,    36,    37,
      38,    81,    39,   212,   119,    40,   120,   121,    41,   122,
    -110,    33,    74,   100,    96,    42,    77,   127,    97,   223,
      34,    35,    36,    37,    38,    33,    39,   118,   119,    40,
     120,   121,    41,   122,   184,   185,   186,   187,   103,    42,
      86,    34,    35,    36,    37,    38,    33,    39,   104,   106,
      40,   188,   152,    41,   107,    34,    35,    36,    37,    38,
      42,    39,   126,   127,    40,   226,   161,    41,   168,   184,
     185,   186,   187,   127,    42,   249,    34,    35,    36,    37,
      38,   129,    39,    91,   145,    40,   148,   166,    41,    33,
     151,   156,   173,   174,   182,    42,   181,   183,    34,    35,
      36,    37,    38,   227,    39,   -63,   231,    40,   247,   169,
      41,   236,    87,   193,   222,    50,   246,    42,   114,    34,
      35,    36,    37,    38,   200,    39,   172,   237,    40,    99,
     233,    41,    25,  -103,    51,   225,  -103,    52,    42,    53,
     232,     0,    54,    55,    56,    57,    50,     0,     0,     0,
       0,     0,   115,   116,     0,   117,     0,     0,     0,  -103,
       0,     0,     0,    25,  -103,    51,     0,     0,    52,     0,
      53,     0,     0,    54,    55,    56,    57,   118,   119,     0,
     120,   121,     0,   122,     0,     0,     0,     0,     0,   123,
    -103,    88,    89,    90,    91,     0,    92,     0,     0,   135,
       0,     0,     0,    93
};

static const yytype_int16 yycheck[] =
{
      21,    31,   112,    18,     1,   174,     1,     1,    21,    25,
       1,    31,    32,    19,    95,    19,    22,    19,    39,    40,
      41,   173,    31,    36,    37,    38,    39,   108,    41,   181,
      51,    52,    37,    38,    39,    48,    24,    43,    54,    45,
      31,    45,    43,    45,   154,   155,     0,   157,    49,    46,
     219,    45,    47,    50,   223,    52,    51,   226,    46,     4,
      81,    46,    50,    44,    45,    50,    11,    88,    89,    90,
      91,    92,    93,    47,    95,    96,     4,    51,   247,   100,
     249,    47,   234,    45,   236,    51,   107,   108,   109,   110,
     106,    24,    44,   123,     1,    47,   112,    44,    48,   129,
      47,    26,    27,    36,    37,    38,    39,    44,    41,   130,
      47,    36,    37,    38,    39,    48,    41,   227,    47,    45,
     150,   231,    51,    48,    31,    32,    33,    34,    35,     1,
      37,    12,    13,    40,    31,   156,    43,    18,   154,   155,
       5,   157,    44,    50,    51,    47,    45,    19,    44,    21,
      22,    47,    24,    31,    26,    27,     1,   172,     3,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      10,    43,    44,    45,   195,    47,    48,    45,    50,    51,
      46,    53,    36,    37,    38,    39,     1,    41,   209,    31,
      47,   207,    49,    31,    48,   225,    47,    31,    49,    53,
      36,    37,    38,    39,    19,    41,    45,    22,   229,   230,
       1,   227,    48,    48,    45,   231,    31,    32,    33,    34,
      35,    43,    37,    31,    32,    40,    34,    35,    43,    37,
      45,     1,    31,    52,    48,    50,    51,    47,    43,    49,
      31,    32,    33,    34,    35,     1,    37,    31,    32,    40,
      34,    35,    43,    37,    14,    15,    16,    17,    31,    50,
      51,    31,    32,    33,    34,    35,     1,    37,    31,    43,
      40,    31,    42,    43,    43,    31,    32,    33,    34,    35,
      50,    37,    31,    47,    40,    49,    42,    43,     1,    14,
      15,    16,    17,    47,    50,    49,    31,    32,    33,    34,
      35,    45,    37,    39,    31,    40,    10,    42,    43,     1,
      49,    52,    50,     8,    48,    50,    53,    31,    31,    32,
      33,    34,    35,    22,    37,    53,    24,    40,     8,    42,
      43,    53,    42,   131,   182,     1,   234,    50,    70,    31,
      32,    33,    34,    35,   151,    37,   114,   218,    40,    49,
     209,    43,    18,    19,    20,   198,    22,    23,    50,    25,
     207,    -1,    28,    29,    30,    31,     1,    -1,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    18,    19,    20,    -1,    -1,    23,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    31,    32,    -1,
      34,    35,    -1,    37,    -1,    -1,    -1,    -1,    -1,    43,
      45,    36,    37,    38,    39,    -1,    41,    -1,    -1,    44,
      -1,    -1,    -1,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,    56,    57,    31,     1,    31,     0,     4,
      58,    59,    45,    45,     1,    45,    31,    60,    81,     5,
      68,    48,    45,    12,    13,    18,    82,    83,    87,    31,
      69,    10,    79,     1,    31,    32,    33,    34,    35,    37,
      40,    43,    50,    61,    62,    64,    65,    31,    31,    31,
       1,    20,    23,    25,    28,    29,    30,    31,    62,    87,
      88,    89,    90,    91,    93,    94,    96,    97,    98,    45,
      45,    46,    48,    45,    31,    78,    80,    51,    61,    66,
      67,    43,    61,    61,    61,     1,    51,    66,    36,    37,
      38,    39,    41,    48,    46,    50,    48,    43,    84,    84,
      52,    61,    61,    31,    31,    62,    43,    43,    43,     1,
      52,    19,    45,    11,    58,     6,     7,     9,    31,    32,
      34,    35,    37,    43,    70,    73,    31,    47,    49,    45,
      53,    47,    51,    61,    63,    44,    51,     1,    51,    61,
      61,    61,    61,    61,    61,    31,    63,    61,    10,    85,
      86,    49,    42,    61,    21,    24,    52,    24,    62,    99,
     100,    42,    61,   101,   102,    63,    42,    61,     1,    42,
      61,    89,    81,    50,     8,    76,    77,    78,    31,    32,
      78,    53,    48,    31,    14,    15,    16,    17,    31,    74,
      75,    78,    61,    67,    44,    47,    51,    44,    45,    78,
      75,    89,    89,    61,    95,    89,    44,    47,    44,    47,
      44,    87,    31,    71,    72,    73,    74,    19,    45,    49,
      44,    73,    70,    49,    61,    86,    49,    22,    92,    26,
      27,    24,   100,   102,    47,    51,    53,    77,    74,    74,
      78,    74,    89,    61,    61,    89,    72,     8,    73,    49,
      74,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    57,    57,    57,    58,    59,    59,
      60,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    62,    62,    62,    63,    63,
      64,    64,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    70,    70,    70,    71,    71,    72,    72,    73,    73,
      73,    73,    73,    73,    74,    74,    75,    75,    75,    75,
      76,    76,    77,    78,    78,    79,    79,    80,    80,    81,
      81,    82,    82,    83,    83,    83,    84,    84,    85,    85,
      86,    86,    87,    88,    88,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    90,    90,    90,    90,
      90,    91,    92,    92,    93,    94,    95,    95,    96,    97,
      97,    98,    98,    99,    99,   100,   101,   101,   102,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     3,     3,     3,     3,     3,     3,     0,
       5,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     4,     1,     3,     1,     1,     3,     4,     3,     1,
       1,     1,     1,     1,     3,     2,     3,     3,     3,     2,
       2,     3,     1,     3,     1,     3,     0,     5,     3,     6,
       3,     3,     3,     3,     3,     1,     3,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     3,     1,     3,     0,     5,     3,     3,
       0,     3,     5,     5,     3,     2,     3,     0,     6,     4,
       1,     0,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     3,     3,     3,     3,     3,
       3,     5,     2,     0,     4,     6,     3,     3,     4,     1,
       4,     4,     4,     3,     1,     1,     3,     1,     1,     1
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 3: /* header: "program" "id" ";"  */
#line 103 "syntax.y"
                                        { hashtbl_insert(hashtbl, (yyvsp[-1].strval), NULL, scope); }
#line 1658 "syntax.tab.c"
    break;

  case 4: /* header: error "id" ";"  */
#line 104 "syntax.y"
                                        { yyerror("Wrong use of headers"); yyerrok; }
#line 1664 "syntax.tab.c"
    break;

  case 5: /* header: "program" error ";"  */
#line 105 "syntax.y"
                                        { yyerror("Wrong use of headers"); yyerrok; }
#line 1670 "syntax.tab.c"
    break;

  case 6: /* header: "program" "id" error  */
#line 106 "syntax.y"
                                        { yyerror("Wrong use of headers"); yyerrok; }
#line 1676 "syntax.tab.c"
    break;

  case 10: /* constant_defs: constant_defs ";" "id" "=" expression  */
#line 113 "syntax.y"
                                                          { hashtbl_insert(hashtbl, (yyvsp[-2].strval), NULL, scope); }
#line 1682 "syntax.tab.c"
    break;

  case 11: /* constant_defs: "id" "=" expression  */
#line 114 "syntax.y"
                                                          { hashtbl_insert(hashtbl, (yyvsp[-2].strval), NULL, scope); }
#line 1688 "syntax.tab.c"
    break;

  case 21: /* expression: "id" "(" expressions ")"  */
#line 125 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope); }
#line 1694 "syntax.tab.c"
    break;

  case 25: /* variable: "id"  */
#line 130 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1700 "syntax.tab.c"
    break;

  case 26: /* variable: variable "." "id"  */
#line 131 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1706 "syntax.tab.c"
    break;

  case 36: /* setexpression: error elexpressions "]"  */
#line 144 "syntax.y"
                                                 { yyerror("Wrong use of set expression"); yyerrok; }
#line 1712 "syntax.tab.c"
    break;

  case 37: /* setexpression: "[" error "]"  */
#line 145 "syntax.y"
                                                 { yyerror("Wrong use of set expression"); yyerrok; }
#line 1718 "syntax.tab.c"
    break;

  case 38: /* setexpression: "[" elexpressions error  */
#line 146 "syntax.y"
                                                 { yyerror("Wrong use of set expression"); yyerrok; }
#line 1724 "syntax.tab.c"
    break;

  case 39: /* setexpression: error "]"  */
#line 147 "syntax.y"
                                                 { yyerror("Wrong use of set expression"); yyerrok; }
#line 1730 "syntax.tab.c"
    break;

  case 40: /* setexpression: "[" error  */
#line 148 "syntax.y"
                                                 { yyerror("Wrong use of set expression"); yyerrok; }
#line 1736 "syntax.tab.c"
    break;

  case 47: /* type_defs: type_defs ";" "id" "=" type_def  */
#line 159 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[-2].strval), NULL, scope); }
#line 1742 "syntax.tab.c"
    break;

  case 48: /* type_defs: "id" "=" type_def  */
#line 160 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1748 "syntax.tab.c"
    break;

  case 57: /* limits: "id"  */
#line 172 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1754 "syntax.tab.c"
    break;

  case 59: /* limit: "+ or -" "id"  */
#line 175 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1760 "syntax.tab.c"
    break;

  case 63: /* limit: "id"  */
#line 179 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1766 "syntax.tab.c"
    break;

  case 65: /* typename: "id"  */
#line 182 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1772 "syntax.tab.c"
    break;

  case 73: /* identifiers: identifiers "," "id"  */
#line 191 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1778 "syntax.tab.c"
    break;

  case 74: /* identifiers: "id"  */
#line 192 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1784 "syntax.tab.c"
    break;

  case 83: /* sub_header: "function" "id" formal_parameters ":" standard_type  */
#line 206 "syntax.y"
                                                                        { hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope); }
#line 1790 "syntax.tab.c"
    break;

  case 84: /* sub_header: "procedure" "id" formal_parameters  */
#line 207 "syntax.y"
                                                                        { hashtbl_insert(hashtbl, (yyvsp[-1].strval), NULL, scope); }
#line 1796 "syntax.tab.c"
    break;

  case 85: /* sub_header: "function" "id"  */
#line 208 "syntax.y"
                                                                        { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1802 "syntax.tab.c"
    break;

  case 106: /* assignment: error ":=" expression  */
#line 236 "syntax.y"
                                         { yyerror("Wrong use of assignment"); yyerrok; }
#line 1808 "syntax.tab.c"
    break;

  case 107: /* assignment: variable error expression  */
#line 237 "syntax.y"
                                         { yyerror("Wrong use of assignment"); yyerrok; }
#line 1814 "syntax.tab.c"
    break;

  case 108: /* assignment: error ":=" "string"  */
#line 238 "syntax.y"
                                         { yyerror("Wrong use of assignment"); yyerrok; }
#line 1820 "syntax.tab.c"
    break;

  case 109: /* assignment: variable error "string"  */
#line 239 "syntax.y"
                                         { yyerror("Wrong use of assignment"); yyerrok; }
#line 1826 "syntax.tab.c"
    break;

  case 110: /* assignment: variable ":=" error  */
#line 240 "syntax.y"
                                         { yyerror("Wrong use of assignment"); yyerrok; }
#line 1832 "syntax.tab.c"
    break;

  case 115: /* for_statement: "for" "id" ":=" iter_space "do" statement  */
#line 250 "syntax.y"
                                                                        { hashtbl_insert(hashtbl, (yyvsp[-4].strval), NULL, scope); }
#line 1838 "syntax.tab.c"
    break;

  case 119: /* subprogram_call: "id"  */
#line 257 "syntax.y"
                                                                        { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1844 "syntax.tab.c"
    break;

  case 120: /* subprogram_call: "id" "(" expressions ")"  */
#line 258 "syntax.y"
                                                                        { hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope); }
#line 1850 "syntax.tab.c"
    break;


#line 1854 "syntax.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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


#if 1
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 274 "syntax.y"


int main(int argc, char* argv[]) {
 int token;

    if (!(hashtbl = hashtbl_create(10, NULL))) {
    	puts("Error, failed to initialize hashtbale");
    	exit(EXIT_FAILURE);
    }

    if(argc > 1){
        yyin = fopen(argv[1], "r");
        if (yyin == NULL){
            perror ("Error opening file"); return -1;
        }
    }

    yyparse();

    printf("Program analyzed successfully\n");

    fclose(yyin);
    hashtbl_destroy(hashtbl);
    return 0;
}

