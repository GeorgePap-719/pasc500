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
  YYSYMBOL_57_1 = 57,                      /* $@1  */
  YYSYMBOL_header = 58,                    /* header  */
  YYSYMBOL_declarations = 59,              /* declarations  */
  YYSYMBOL_constdefs = 60,                 /* constdefs  */
  YYSYMBOL_constant_defs = 61,             /* constant_defs  */
  YYSYMBOL_expression = 62,                /* expression  */
  YYSYMBOL_variable = 63,                  /* variable  */
  YYSYMBOL_expressions = 64,               /* expressions  */
  YYSYMBOL_constant = 65,                  /* constant  */
  YYSYMBOL_setexpression = 66,             /* setexpression  */
  YYSYMBOL_elexpressions = 67,             /* elexpressions  */
  YYSYMBOL_elexpression = 68,              /* elexpression  */
  YYSYMBOL_typedefs = 69,                  /* typedefs  */
  YYSYMBOL_type_defs = 70,                 /* type_defs  */
  YYSYMBOL_type_def = 71,                  /* type_def  */
  YYSYMBOL_dims = 72,                      /* dims  */
  YYSYMBOL_limits = 73,                    /* limits  */
  YYSYMBOL_limit = 74,                     /* limit  */
  YYSYMBOL_typename = 75,                  /* typename  */
  YYSYMBOL_standard_type = 76,             /* standard_type  */
  YYSYMBOL_fields = 77,                    /* fields  */
  YYSYMBOL_field = 78,                     /* field  */
  YYSYMBOL_identifiers = 79,               /* identifiers  */
  YYSYMBOL_vardefs = 80,                   /* vardefs  */
  YYSYMBOL_variable_defs = 81,             /* variable_defs  */
  YYSYMBOL_subprograms = 82,               /* subprograms  */
  YYSYMBOL_subprogram = 83,                /* subprogram  */
  YYSYMBOL_sub_header = 84,                /* sub_header  */
  YYSYMBOL_formal_parameters = 85,         /* formal_parameters  */
  YYSYMBOL_parameter_list = 86,            /* parameter_list  */
  YYSYMBOL_pass = 87,                      /* pass  */
  YYSYMBOL_comp_statement = 88,            /* comp_statement  */
  YYSYMBOL_89_2 = 89,                      /* $@2  */
  YYSYMBOL_statements = 90,                /* statements  */
  YYSYMBOL_statement = 91,                 /* statement  */
  YYSYMBOL_assignment = 92,                /* assignment  */
  YYSYMBOL_if_statement = 93,              /* if_statement  */
  YYSYMBOL_94_3 = 94,                      /* $@3  */
  YYSYMBOL_if_tail = 95,                   /* if_tail  */
  YYSYMBOL_while_statement = 96,           /* while_statement  */
  YYSYMBOL_97_4 = 97,                      /* $@4  */
  YYSYMBOL_for_statement = 98,             /* for_statement  */
  YYSYMBOL_99_5 = 99,                      /* $@5  */
  YYSYMBOL_iter_space = 100,               /* iter_space  */
  YYSYMBOL_with_statement = 101,           /* with_statement  */
  YYSYMBOL_subprogram_call = 102,          /* subprogram_call  */
  YYSYMBOL_io_statement = 103,             /* io_statement  */
  YYSYMBOL_read_list = 104,                /* read_list  */
  YYSYMBOL_read_item = 105,                /* read_item  */
  YYSYMBOL_write_list = 106,               /* write_list  */
  YYSYMBOL_write_item = 107                /* write_item  */
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
#define YYLAST   348

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  250

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
       0,   103,   103,   103,   106,   107,   108,   109,   112,   115,
     116,   119,   120,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   138,   139,   140,   143,
     144,   147,   148,   149,   150,   153,   154,   158,   159,   162,
     163,   166,   167,   170,   171,   174,   175,   176,   177,   178,
     181,   182,   185,   186,   189,   190,   191,   192,   193,   194,
     197,   198,   201,   201,   201,   201,   204,   205,   208,   211,
     212,   215,   216,   219,   220,   223,   224,   227,   228,   231,
     232,   233,   236,   237,   240,   241,   244,   244,   247,   247,
     250,   251,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   266,   267,   268,   269,   270,   271,   272,   276,   276,
     279,   280,   283,   283,   286,   286,   290,   291,   294,   297,
     298,   301,   302,   305,   306,   309,   312,   313,   316,   317
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
  "LOWER_THAN_ELSE", "$accept", "program", "$@1", "header", "declarations",
  "constdefs", "constant_defs", "expression", "variable", "expressions",
  "constant", "setexpression", "elexpressions", "elexpression", "typedefs",
  "type_defs", "type_def", "dims", "limits", "limit", "typename",
  "standard_type", "fields", "field", "identifiers", "vardefs",
  "variable_defs", "subprograms", "subprogram", "sub_header",
  "formal_parameters", "parameter_list", "pass", "comp_statement", "$@2",
  "statements", "statement", "assignment", "if_statement", "$@3",
  "if_tail", "while_statement", "$@4", "for_statement", "$@5",
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
     305,   306,   307,   308,   309
};
#endif

#define YYPACT_NINF (-143)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-120)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,     0,     6,    42,  -143,    -1,     7,     9,  -143,    62,
    -143,  -143,  -143,  -143,    69,  -143,   100,    68,    65,   102,
     108,   147,   271,   136,   141,   145,  -143,   137,   142,   135,
     148,   150,   168,  -143,   163,  -143,  -143,  -143,  -143,   271,
     271,   271,   208,   300,   -18,  -143,  -143,   165,    18,   172,
     189,  -143,    11,  -143,   195,   185,  -143,    16,   179,   271,
     186,  -143,   287,  -143,   279,    66,  -143,   271,   271,   271,
     271,   271,   271,   197,   271,   271,   221,   187,  -143,   181,
     271,   271,   204,   206,   201,   203,    19,     5,  -143,    -5,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
     199,   239,   168,  -143,  -143,  -143,  -143,   -20,   168,  -143,
     200,   202,   223,    64,   168,   300,   -14,  -143,   271,   271,
    -143,   184,   186,   186,  -143,   184,   184,  -143,    89,   300,
    -143,    99,   168,   146,   229,   -12,    70,   205,  -143,    10,
     206,   243,   271,   257,    92,  -143,   189,   102,    54,    64,
      24,  -143,    27,  -143,  -143,    43,   157,   195,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,    81,  -143,   271,   300,
    -143,  -143,  -143,   221,   106,  -143,  -143,   300,  -143,  -143,
     271,   155,   -18,   107,  -143,  -143,   300,   122,  -143,   124,
    -143,   300,  -143,  -143,   300,  -143,  -143,   212,    94,  -143,
     214,  -143,  -143,   168,    64,  -143,  -143,  -143,    64,   300,
     168,    64,   155,   155,   111,   228,  -143,  -143,   206,  -143,
     243,  -143,    54,   247,   157,  -143,  -143,  -143,   156,  -143,
     234,  -143,   271,   271,  -143,  -143,  -143,  -143,    64,  -143,
      64,   155,  -143,   300,   300,   155,  -143,  -143,  -143,  -143
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     0,     0,     0,     1,    10,
       5,     6,     7,     4,     0,    76,    42,     0,     0,     0,
       0,    72,     0,     9,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     8,    26,    31,    32,    33,    34,     0,
       0,     0,     0,    12,    21,    23,    25,     0,    81,    83,
       0,    75,    10,     3,     0,    41,    70,     0,     0,     0,
      19,    20,     0,    36,    40,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,    80,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    99,     0,
      91,    92,    93,    94,    95,    96,    97,    98,    77,    76,
       0,     0,     0,    59,    56,    58,    57,     0,     0,    44,
       0,     0,     0,     0,    71,    30,     0,    24,     0,     0,
      35,    13,    17,    16,    18,    15,    14,    27,     0,    11,
      86,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,    89,     0,     0,     0,     0,
       0,    67,     0,    55,    54,     0,     0,     0,    69,    62,
      63,    64,    65,    61,    74,    60,     0,    22,     0,    39,
      37,    28,    82,    87,     0,    79,   105,   103,   108,   112,
       0,     0,   125,     0,   124,   129,   128,     0,   127,     0,
     106,   104,   107,   102,   101,    90,    78,    53,     0,    51,
       0,    46,    47,     0,     0,    48,    49,    43,     0,    29,
       0,     0,     0,     0,     0,     0,   118,   121,     0,   122,
       0,   120,     0,     0,     0,    66,    68,    73,     0,    85,
     111,   113,     0,     0,   114,   123,   126,    50,     0,    52,
       0,     0,   109,   117,   116,     0,    45,    84,   110,   115
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,  -143,  -143,   216,  -143,  -143,   -22,   -48,   -69,
    -143,  -143,  -143,   151,  -143,  -143,   116,  -143,    59,  -140,
    -136,   149,  -143,    84,   -31,  -143,  -143,   196,  -143,  -143,
     235,  -143,   123,   -16,  -143,  -143,  -142,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
      80,  -143,    90
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     9,     4,    15,    16,    18,   115,    44,   116,
      45,    46,    65,    66,    21,    31,   109,   198,   199,   110,
     164,   165,   150,   151,   152,    33,    58,    19,    27,    28,
      77,   131,   132,    88,    50,    89,    90,    91,    92,   212,
     242,    93,   213,    94,   245,   215,    95,    96,    97,   183,
     184,   187,   188
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    57,    87,    29,   195,   128,   143,     6,   200,   178,
      12,   153,   154,   201,   145,    14,   206,    60,    61,    62,
      64,     1,    98,     2,    67,    68,    69,    70,    73,    71,
     167,     5,    74,   168,   181,   139,    72,     7,  -119,   216,
     146,  -119,     8,   202,    10,   121,   122,   123,   124,   125,
     126,    73,    11,   129,    13,    74,    73,   144,   135,   136,
      74,    76,   142,   112,  -119,   113,    14,   -83,   226,   203,
     230,   231,   227,   189,   112,   229,   204,   155,   159,   160,
     161,   162,   200,   166,   239,   197,   104,   205,   105,   106,
     112,   107,   182,   192,   179,   163,   169,    64,    87,   248,
      17,   174,   246,   249,   247,    20,    67,    68,    69,    70,
      23,    71,   177,   119,    24,    25,    22,   120,    72,   186,
      26,   191,   194,    34,    35,    36,    37,    38,   112,    39,
     208,   196,    40,    87,   193,    41,   168,   232,   233,    30,
     171,   222,    42,   172,   173,   223,   209,    67,    68,    69,
      70,   217,    71,   112,   218,   211,    79,    32,   214,    72,
     159,   160,   161,   162,    87,    87,   219,    47,   221,   220,
     182,   168,    48,    26,  -100,    80,    49,  -100,    81,   228,
      82,    53,    51,    83,    84,    85,    86,    52,   103,   104,
      79,   105,   106,    87,   107,    55,    54,    87,   186,    56,
    -100,   100,   101,   112,   102,   240,    59,    26,  -100,    80,
     243,   244,    81,    75,    82,    76,   111,    83,    84,    85,
      86,    68,    69,    70,   114,    70,   103,   104,   127,   105,
     106,   130,   107,   134,  -100,   137,   133,   138,   108,    34,
      35,    36,    37,    38,   140,    39,   141,   149,    40,   148,
     157,    41,   234,   156,   158,   238,   241,   180,    42,    63,
      34,    35,    36,    37,    38,   -59,    39,   224,    99,    40,
     170,   176,    41,   207,    34,    35,    36,    37,    38,    42,
      39,   237,   175,    40,    78,   185,    41,   225,    34,    35,
      36,    37,    38,    42,    39,   147,   210,    40,   235,   190,
      41,     0,    34,    35,    36,    37,    38,    42,    39,     0,
     236,    40,     0,     0,    41,    67,    68,    69,    70,     0,
      71,    42,     0,    67,    68,    69,    70,    72,    71,     0,
       0,   117,   118,     0,     0,    72,    67,    68,    69,    70,
       0,    71,     0,     0,     0,     0,     0,     0,    72
};

static const yytype_int16 yycheck[] =
{
      22,    32,    50,    19,   146,    74,     1,     1,   148,    21,
       1,    31,    32,   149,    19,     4,   156,    39,    40,    41,
      42,     1,    11,     3,    36,    37,    38,    39,    46,    41,
      44,    31,    50,    47,    24,    83,    48,    31,    19,   181,
      45,    22,     0,    19,    45,    67,    68,    69,    70,    71,
      72,    46,    45,    75,    45,    50,    46,    52,    80,    81,
      50,    43,    43,    47,    45,    49,     4,    49,   204,    45,
     212,   213,   208,   142,    47,   211,    49,   108,    14,    15,
      16,    17,   222,   114,   224,    31,    32,    44,    34,    35,
      47,    37,   140,     1,    24,    31,   118,   119,   146,   241,
      31,   132,   238,   245,   240,     5,    36,    37,    38,    39,
      45,    41,   134,    47,    12,    13,    48,    51,    48,   141,
      18,   143,   144,    31,    32,    33,    34,    35,    47,    37,
      49,   147,    40,   181,    42,    43,    47,    26,    27,    31,
      51,    47,    50,    44,    45,    51,   168,    36,    37,    38,
      39,    44,    41,    47,    47,    49,     1,    10,   180,    48,
      14,    15,    16,    17,   212,   213,    44,    31,    44,    47,
     218,    47,    31,    18,    19,    20,    31,    22,    23,   210,
      25,    46,    45,    28,    29,    30,    31,    45,    31,    32,
       1,    34,    35,   241,    37,    45,    48,   245,   220,    31,
      45,     6,     7,    47,     9,    49,    43,    18,    19,    20,
     232,   233,    23,    48,    25,    43,    31,    28,    29,    30,
      31,    37,    38,    39,    45,    39,    31,    32,    31,    34,
      35,    10,    37,    52,    45,    31,    49,    31,    43,    31,
      32,    33,    34,    35,    43,    37,    43,     8,    40,    50,
      48,    43,    24,    53,    31,     8,    22,    52,    50,    51,
      31,    32,    33,    34,    35,    53,    37,    53,    52,    40,
     119,    42,    43,   157,    31,    32,    33,    34,    35,    50,
      37,   222,   133,    40,    49,    42,    43,   203,    31,    32,
      33,    34,    35,    50,    37,    99,   173,    40,   218,    42,
      43,    -1,    31,    32,    33,    34,    35,    50,    37,    -1,
     220,    40,    -1,    -1,    43,    36,    37,    38,    39,    -1,
      41,    50,    -1,    36,    37,    38,    39,    48,    41,    -1,
      -1,    44,    53,    -1,    -1,    48,    36,    37,    38,    39,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,    56,    58,    31,     1,    31,     0,    57,
      45,    45,     1,    45,     4,    59,    60,    31,    61,    82,
       5,    69,    48,    45,    12,    13,    18,    83,    84,    88,
      31,    70,    10,    80,    31,    32,    33,    34,    35,    37,
      40,    43,    50,    62,    63,    65,    66,    31,    31,    31,
      89,    45,    45,    46,    48,    45,    31,    79,    81,    43,
      62,    62,    62,    51,    62,    67,    68,    36,    37,    38,
      39,    41,    48,    46,    50,    48,    43,    85,    85,     1,
      20,    23,    25,    28,    29,    30,    31,    63,    88,    90,
      91,    92,    93,    96,    98,   101,   102,   103,    11,    59,
       6,     7,     9,    31,    32,    34,    35,    37,    43,    71,
      74,    31,    47,    49,    45,    62,    64,    44,    53,    47,
      51,    62,    62,    62,    62,    62,    62,    31,    64,    62,
      10,    86,    87,    49,    52,    62,    62,    31,    31,    63,
      43,    43,    43,     1,    52,    19,    45,    82,    50,     8,
      77,    78,    79,    31,    32,    79,    53,    48,    31,    14,
      15,    16,    17,    31,    75,    76,    79,    44,    47,    62,
      68,    51,    44,    45,    79,    76,    42,    62,    21,    24,
      52,    24,    63,   104,   105,    42,    62,   106,   107,    64,
      42,    62,     1,    42,    62,    91,    88,    31,    72,    73,
      74,    75,    19,    45,    49,    44,    74,    71,    49,    62,
      87,    49,    94,    97,    62,   100,    91,    44,    47,    44,
      47,    44,    47,    51,    53,    78,    75,    75,    79,    75,
      91,    91,    26,    27,    24,   105,   107,    73,     8,    74,
      49,    22,    95,    62,    62,    99,    75,    75,    91,    91
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    57,    56,    58,    58,    58,    58,    59,    60,
      60,    61,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    63,    63,    63,    64,
      64,    65,    65,    65,    65,    66,    66,    67,    67,    68,
      68,    69,    69,    70,    70,    71,    71,    71,    71,    71,
      72,    72,    73,    73,    74,    74,    74,    74,    74,    74,
      75,    75,    76,    76,    76,    76,    77,    77,    78,    79,
      79,    80,    80,    81,    81,    82,    82,    83,    83,    84,
      84,    84,    85,    85,    86,    86,    87,    87,    89,    88,
      90,    90,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    92,    92,    92,    92,    92,    92,    92,    94,    93,
      95,    95,    97,    96,    99,    98,   100,   100,   101,   102,
     102,   103,   103,   104,   104,   105,   106,   106,   107,   107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     6,     3,     3,     3,     3,     3,     3,
       0,     5,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     1,     4,     1,     3,     1,     1,     3,     4,     3,
       1,     1,     1,     1,     1,     3,     2,     3,     1,     3,
       1,     3,     0,     5,     3,     6,     3,     3,     3,     3,
       3,     1,     3,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     3,
       1,     3,     0,     5,     3,     3,     0,     3,     5,     5,
       3,     2,     3,     0,     6,     4,     1,     0,     0,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     3,     3,     3,     3,     3,     3,     0,     6,
       2,     0,     0,     5,     0,     7,     3,     3,     4,     1,
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
  case 2: /* $@1: %empty  */
#line 103 "syntax.y"
                 { scope++; }
#line 1646 "syntax.tab.c"
    break;

  case 3: /* program: header $@1 declarations subprograms comp_statement "."  */
#line 103 "syntax.y"
                                                                            { hashtbl_get(hashtbl, scope--); }
#line 1652 "syntax.tab.c"
    break;

  case 4: /* header: "program" "id" ";"  */
#line 106 "syntax.y"
                                        { hashtbl_insert(hashtbl, (yyvsp[-1].strval), NULL, scope); }
#line 1658 "syntax.tab.c"
    break;

  case 5: /* header: error "id" ";"  */
#line 107 "syntax.y"
                                        { yyerror("Wrong use of headers"); yyerrok; }
#line 1664 "syntax.tab.c"
    break;

  case 6: /* header: "program" error ";"  */
#line 108 "syntax.y"
                                        { yyerror("Wrong use of headers"); yyerrok; }
#line 1670 "syntax.tab.c"
    break;

  case 7: /* header: "program" "id" error  */
#line 109 "syntax.y"
                                        { yyerror("Wrong use of headers"); yyerrok; }
#line 1676 "syntax.tab.c"
    break;

  case 11: /* constant_defs: constant_defs ";" "id" "=" expression  */
#line 119 "syntax.y"
                                                          { hashtbl_insert(hashtbl, (yyvsp[-2].strval), NULL, scope); }
#line 1682 "syntax.tab.c"
    break;

  case 12: /* constant_defs: "id" "=" expression  */
#line 120 "syntax.y"
                                                          { hashtbl_insert(hashtbl, (yyvsp[-2].strval), NULL, scope); }
#line 1688 "syntax.tab.c"
    break;

  case 22: /* expression: "id" "(" expressions ")"  */
#line 132 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope); }
#line 1694 "syntax.tab.c"
    break;

  case 26: /* variable: "id"  */
#line 138 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1700 "syntax.tab.c"
    break;

  case 27: /* variable: variable "." "id"  */
#line 139 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1706 "syntax.tab.c"
    break;

  case 43: /* type_defs: type_defs ";" "id" "=" type_def  */
#line 170 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[-2].strval), NULL, scope); }
#line 1712 "syntax.tab.c"
    break;

  case 44: /* type_defs: "id" "=" type_def  */
#line 171 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[-2].strval), NULL, scope); }
#line 1718 "syntax.tab.c"
    break;

  case 53: /* limits: "id"  */
#line 186 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1724 "syntax.tab.c"
    break;

  case 55: /* limit: "+ or -" "id"  */
#line 190 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1730 "syntax.tab.c"
    break;

  case 59: /* limit: "id"  */
#line 194 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1736 "syntax.tab.c"
    break;

  case 61: /* typename: "id"  */
#line 198 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1742 "syntax.tab.c"
    break;

  case 69: /* identifiers: identifiers "," "id"  */
#line 211 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1748 "syntax.tab.c"
    break;

  case 70: /* identifiers: "id"  */
#line 212 "syntax.y"
                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1754 "syntax.tab.c"
    break;

  case 79: /* sub_header: "function" "id" formal_parameters ":" standard_type  */
#line 231 "syntax.y"
                                                                        { hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope); }
#line 1760 "syntax.tab.c"
    break;

  case 80: /* sub_header: "procedure" "id" formal_parameters  */
#line 232 "syntax.y"
                                                                        { hashtbl_insert(hashtbl, (yyvsp[-1].strval), NULL, scope); }
#line 1766 "syntax.tab.c"
    break;

  case 81: /* sub_header: "function" "id"  */
#line 233 "syntax.y"
                                                                        { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1772 "syntax.tab.c"
    break;

  case 88: /* $@2: %empty  */
#line 247 "syntax.y"
                        { scope++; }
#line 1778 "syntax.tab.c"
    break;

  case 89: /* comp_statement: "begin" $@2 statements "end"  */
#line 247 "syntax.y"
                                                        { hashtbl_get(hashtbl, scope--); }
#line 1784 "syntax.tab.c"
    break;

  case 103: /* assignment: error ":=" expression  */
#line 268 "syntax.y"
                                         { yyerror("Wrong use of assignment"); yyerrok; }
#line 1790 "syntax.tab.c"
    break;

  case 104: /* assignment: variable error expression  */
#line 269 "syntax.y"
                                         { yyerror("Wrong use of assignment"); yyerrok; }
#line 1796 "syntax.tab.c"
    break;

  case 105: /* assignment: error ":=" "string"  */
#line 270 "syntax.y"
                                         { yyerror("Wrong use of assignment"); yyerrok; }
#line 1802 "syntax.tab.c"
    break;

  case 106: /* assignment: variable error "string"  */
#line 271 "syntax.y"
                                         { yyerror("Wrong use of assignment"); yyerrok; }
#line 1808 "syntax.tab.c"
    break;

  case 107: /* assignment: variable ":=" error  */
#line 272 "syntax.y"
                                         { yyerror("Wrong use of assignment"); yyerrok; }
#line 1814 "syntax.tab.c"
    break;

  case 108: /* $@3: %empty  */
#line 276 "syntax.y"
                                     { scope++; }
#line 1820 "syntax.tab.c"
    break;

  case 109: /* if_statement: "if" expression "then" $@3 statement if_tail  */
#line 276 "syntax.y"
                                                                    { hashtbl_get(hashtbl, scope--); }
#line 1826 "syntax.tab.c"
    break;

  case 112: /* $@4: %empty  */
#line 283 "syntax.y"
                                         { scope++; }
#line 1832 "syntax.tab.c"
    break;

  case 113: /* while_statement: "while" expression "do" $@4 statement  */
#line 283 "syntax.y"
                                                                { hashtbl_get(hashtbl, scope--); }
#line 1838 "syntax.tab.c"
    break;

  case 114: /* $@5: %empty  */
#line 286 "syntax.y"
                                                   { scope++; }
#line 1844 "syntax.tab.c"
    break;

  case 115: /* for_statement: "for" "id" ":=" iter_space "do" $@5 statement  */
#line 286 "syntax.y"
                                                                          { hashtbl_insert(hashtbl, (yyvsp[-5].strval), NULL, scope);
 										hashtbl_get(hashtbl, scope--); }
#line 1851 "syntax.tab.c"
    break;

  case 119: /* subprogram_call: "id"  */
#line 297 "syntax.y"
                                                                        { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1857 "syntax.tab.c"
    break;

  case 120: /* subprogram_call: "id" "(" expressions ")"  */
#line 298 "syntax.y"
                                                                        { hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope); }
#line 1863 "syntax.tab.c"
    break;


#line 1867 "syntax.tab.c"

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

#line 320 "syntax.y"


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

