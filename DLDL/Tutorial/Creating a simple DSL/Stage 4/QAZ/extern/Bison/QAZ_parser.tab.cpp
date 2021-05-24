/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         QAZparse
#define yylex           QAZlex
#define yyerror         QAZerror
#define yydebug         QAZdebug
#define yynerrs         QAZnerrs
#define yylval          QAZlval
#define yychar          QAZchar

/* First part of user prologue.  */
#line 1 "./QAZ_parser.y"

#include <iostream>
#include <vector>
#include <cstring>
#include <stdio.h>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include <Deamer/External/Cpp/Ast/Node.h>
#include "QAZ/Bison/Parser.h"
#include "Flex/QAZ_lexer.h"
#include "QAZ/Ast/Enum/Type.h"
#include "QAZ/Ast/Node/EQUAL_EQUAL.h"
#include "QAZ/Ast/Node/EQUAL.h"
#include "QAZ/Ast/Node/PLUS.h"
#include "QAZ/Ast/Node/MINUS.h"
#include "QAZ/Ast/Node/MULTIPLY.h"
#include "QAZ/Ast/Node/DIVIDE.h"
#include "QAZ/Ast/Node/LEFT_PARENTHESIS.h"
#include "QAZ/Ast/Node/RIGHT_PARENTHESIS.h"
#include "QAZ/Ast/Node/LEFT_BRACKET.h"
#include "QAZ/Ast/Node/RIGHT_BRACKET.h"
#include "QAZ/Ast/Node/LEFT_SQUARE_BRACKET.h"
#include "QAZ/Ast/Node/RIGHT_SQUARE_BRACKET.h"
#include "QAZ/Ast/Node/COMMA.h"
#include "QAZ/Ast/Node/SEMICOLON.h"
#include "QAZ/Ast/Node/INTEGER_TYPE.h"
#include "QAZ/Ast/Node/STRING_TYPE.h"
#include "QAZ/Ast/Node/RETURN.h"
#include "QAZ/Ast/Node/VARNAME.h"
#include "QAZ/Ast/Node/DECIMAL.h"
#include "QAZ/Ast/Node/NUMBER.h"
#include "QAZ/Ast/Node/SPACES.h"
#include "QAZ/Ast/Node/ESCAPE_CHARS.h"

#include "QAZ/Ast/Node/program.h"
#include "QAZ/Ast/Node/stmts.h"
#include "QAZ/Ast/Node/stmt.h"
#include "QAZ/Ast/Node/declaration.h"
#include "QAZ/Ast/Node/global_call.h"
#include "QAZ/Ast/Node/call.h"
#include "QAZ/Ast/Node/function_call.h"
#include "QAZ/Ast/Node/variable_call.h"
#include "QAZ/Ast/Node/assignment.h"
#include "QAZ/Ast/Node/expression.h"
#include "QAZ/Ast/Node/variable_declaration.h"
#include "QAZ/Ast/Node/function_declaration.h"
#include "QAZ/Ast/Node/variable_assignment.h"
#include "QAZ/Ast/Node/return_assignment.h"
#include "QAZ/Ast/Node/function_parameters.h"
#include "QAZ/Ast/Node/function_arguments.h"
#include "QAZ/Ast/Node/function_block.h"
#include "QAZ/Ast/Node/function_parameter.h"
#include "QAZ/Ast/Node/function_argument.h"
#include "QAZ/Ast/Node/function_name.h"
#include "QAZ/Ast/Node/return_type.h"
#include "QAZ/Ast/Node/variable.h"
#include "QAZ/Ast/Node/type.h"
#include "QAZ/Ast/Node/value.h"

#ifndef YY_parse_NERRS
#define YY_parse_NERRS QAZnerrs
#endif //YY_parse_NERRS
#ifndef YY_parse_LLOC
#define YY_parse_LLOC QAZlloc
#endif //YY_parse_LLOC
#define YYERROR_VERBOSE

void QAZerror(const char* s);
int QAZlex();
static ::deamer::external::cpp::ast::Tree* outputTree = nullptr;

#line 149 "QAZ_parser.tab.c"

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

#include "QAZ_parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_EQUAL_EQUAL = 3,                /* EQUAL_EQUAL  */
  YYSYMBOL_EQUAL = 4,                      /* EQUAL  */
  YYSYMBOL_PLUS = 5,                       /* PLUS  */
  YYSYMBOL_MINUS = 6,                      /* MINUS  */
  YYSYMBOL_MULTIPLY = 7,                   /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 8,                     /* DIVIDE  */
  YYSYMBOL_LEFT_PARENTHESIS = 9,           /* LEFT_PARENTHESIS  */
  YYSYMBOL_RIGHT_PARENTHESIS = 10,         /* RIGHT_PARENTHESIS  */
  YYSYMBOL_LEFT_BRACKET = 11,              /* LEFT_BRACKET  */
  YYSYMBOL_RIGHT_BRACKET = 12,             /* RIGHT_BRACKET  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 13,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 14,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_COMMA = 15,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 16,                 /* SEMICOLON  */
  YYSYMBOL_INTEGER_TYPE = 17,              /* INTEGER_TYPE  */
  YYSYMBOL_STRING_TYPE = 18,               /* STRING_TYPE  */
  YYSYMBOL_RETURN = 19,                    /* RETURN  */
  YYSYMBOL_VARNAME = 20,                   /* VARNAME  */
  YYSYMBOL_DECIMAL = 21,                   /* DECIMAL  */
  YYSYMBOL_NUMBER = 22,                    /* NUMBER  */
  YYSYMBOL_YYACCEPT = 23,                  /* $accept  */
  YYSYMBOL_program = 24,                   /* program  */
  YYSYMBOL_stmts = 25,                     /* stmts  */
  YYSYMBOL_stmt = 26,                      /* stmt  */
  YYSYMBOL_declaration = 27,               /* declaration  */
  YYSYMBOL_global_call = 28,               /* global_call  */
  YYSYMBOL_call = 29,                      /* call  */
  YYSYMBOL_function_call = 30,             /* function_call  */
  YYSYMBOL_variable_call = 31,             /* variable_call  */
  YYSYMBOL_assignment = 32,                /* assignment  */
  YYSYMBOL_expression = 33,                /* expression  */
  YYSYMBOL_variable_declaration = 34,      /* variable_declaration  */
  YYSYMBOL_function_declaration = 35,      /* function_declaration  */
  YYSYMBOL_variable_assignment = 36,       /* variable_assignment  */
  YYSYMBOL_return_assignment = 37,         /* return_assignment  */
  YYSYMBOL_function_parameters = 38,       /* function_parameters  */
  YYSYMBOL_function_arguments = 39,        /* function_arguments  */
  YYSYMBOL_function_block = 40,            /* function_block  */
  YYSYMBOL_function_parameter = 41,        /* function_parameter  */
  YYSYMBOL_function_argument = 42,         /* function_argument  */
  YYSYMBOL_function_name = 43,             /* function_name  */
  YYSYMBOL_return_type = 44,               /* return_type  */
  YYSYMBOL_variable = 45,                  /* variable  */
  YYSYMBOL_type = 46,                      /* type  */
  YYSYMBOL_value = 47                      /* value  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   83

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  23
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  43
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  77

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   277


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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   173,   173,   181,   185,   192,   196,   200,   207,   211,
     218,   225,   229,   236,   243,   250,   257,   261,   265,   269,
     273,   277,   281,   288,   295,   302,   309,   316,   320,   324,
     331,   335,   339,   346,   353,   360,   367,   374,   381,   388,
     392,   396,   403,   407
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
  "\"end of file\"", "error", "\"invalid token\"", "EQUAL_EQUAL", "EQUAL",
  "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "LEFT_PARENTHESIS",
  "RIGHT_PARENTHESIS", "LEFT_BRACKET", "RIGHT_BRACKET",
  "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", "COMMA", "SEMICOLON",
  "INTEGER_TYPE", "STRING_TYPE", "RETURN", "VARNAME", "DECIMAL", "NUMBER",
  "$accept", "program", "stmts", "stmt", "declaration", "global_call",
  "call", "function_call", "variable_call", "assignment", "expression",
  "variable_declaration", "function_declaration", "variable_assignment",
  "return_assignment", "function_parameters", "function_arguments",
  "function_block", "function_parameter", "function_argument",
  "function_name", "return_type", "variable", "type", "value", YY_NULLPTR
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
     275,   276,   277
};
#endif

#define YYPACT_NINF (-44)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-42)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      55,   -44,   -44,     3,     8,   -44,    55,   -44,   -44,    -6,
     -44,   -44,   -44,   -44,   -44,    -2,     2,    17,    34,    19,
     -44,   -44,   -44,   -44,    22,   -44,    46,     4,   -44,    39,
     -44,    47,     7,    59,     4,    50,   -44,   -44,   -44,    24,
     -44,     4,   -44,    22,   -44,   -44,    54,    43,    33,    44,
       4,     4,     4,     4,   -44,    28,   -44,    67,    59,   -44,
     -44,   -44,    63,    63,    63,    63,   -44,    55,   -44,   -44,
      61,    62,    53,     4,   -44,    40,   -44
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,    39,    40,    14,     0,     2,     4,     5,     6,     0,
      11,    12,     7,     8,     9,     0,     0,     0,     0,     0,
       1,     3,    10,    15,    32,    36,     0,     0,    38,     0,
      35,     0,    32,    29,     0,    14,    43,    42,    22,     0,
      21,     0,    13,    32,    31,    41,     0,    29,     0,     0,
       0,     0,     0,     0,    25,     0,    30,     0,    29,    28,
      34,    20,    19,    18,    16,    17,    23,     4,    24,    27,
       0,     0,     0,     0,    33,     0,    26
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -44,   -44,    -5,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -32,   -44,   -44,   -44,   -44,   -43,   -27,   -44,   -44,   -44,
      57,   -44,    64,   -30,   -44
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,     7,     8,    38,    10,    11,    12,
      39,    13,    14,    15,    72,    46,    31,    68,    47,    32,
      16,    17,    18,    19,    40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       9,    21,    49,    48,    59,    44,     9,   -38,    20,    55,
      22,    24,   -36,    34,    23,    69,    56,    48,    62,    63,
      64,    65,    43,   -41,    35,    36,    37,    30,    48,    50,
      51,    52,    53,    50,    51,    52,    53,    25,    27,    28,
      54,    75,    30,    41,    66,    50,    51,    52,    53,    50,
      51,    52,    53,    60,    61,    33,    76,    42,    58,   -36,
       1,     2,    70,    45,    57,    74,    73,     9,    50,    51,
      52,    53,     1,     2,    26,     3,     1,     2,    67,    45,
      71,     0,     0,    29
};

static const yytype_int8 yycheck[] =
{
       0,     6,    34,    33,    47,    32,     6,     4,     0,    41,
      16,     9,     9,     9,    16,    58,    43,    47,    50,    51,
      52,    53,    15,    20,    20,    21,    22,    20,    58,     5,
       6,     7,     8,     5,     6,     7,     8,    20,     4,    20,
      16,    73,    20,     4,    16,     5,     6,     7,     8,     5,
       6,     7,     8,    20,    10,     9,    16,    10,    15,     9,
      17,    18,    67,    20,    10,    12,     4,    67,     5,     6,
       7,     8,    17,    18,    17,    20,    17,    18,    11,    20,
      19,    -1,    -1,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    18,    20,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    34,    35,    36,    43,    44,    45,    46,
       0,    25,    16,    16,     9,    20,    43,     4,    20,    45,
      20,    39,    42,     9,     9,    20,    21,    22,    29,    33,
      47,     4,    10,    15,    39,    20,    38,    41,    46,    33,
       5,     6,     7,     8,    16,    33,    39,    10,    15,    38,
      20,    10,    33,    33,    33,    33,    16,    11,    40,    38,
      25,    19,    37,     4,    12,    33,    16
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    23,    24,    25,    25,    26,    26,    26,    27,    27,
      28,    29,    29,    30,    31,    32,    33,    33,    33,    33,
      33,    33,    33,    34,    35,    36,    37,    38,    38,    38,
      39,    39,    39,    40,    41,    42,    43,    44,    45,    46,
      46,    46,    47,    47
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       2,     1,     1,     4,     1,     2,     3,     3,     3,     3,
       3,     1,     1,     5,     6,     4,     4,     3,     2,     0,
       3,     2,     0,     4,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1
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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
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
  case 2: /* program: stmts  */
#line 173 "./QAZ_parser.y"
              {
		auto* const newNode = new QAZ::ast::node::program({::QAZ::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].QAZ_stmts) });
		(yyval.QAZ_program) = newNode;
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
#line 1246 "QAZ_parser.tab.c"
    break;

  case 3: /* stmts: stmt stmts  */
#line 181 "./QAZ_parser.y"
                   {
		auto* const newNode = new QAZ::ast::node::stmts({::QAZ::ast::Type::stmts, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].QAZ_stmt), (yyvsp[0].QAZ_stmts) });
		(yyval.QAZ_stmts) = newNode;
	}
#line 1255 "QAZ_parser.tab.c"
    break;

  case 4: /* stmts: %empty  */
#line 185 "./QAZ_parser.y"
          {
		auto* const newNode = new QAZ::ast::node::stmts({::QAZ::ast::Type::stmts, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.QAZ_stmts) = newNode;
	}
#line 1264 "QAZ_parser.tab.c"
    break;

  case 5: /* stmt: declaration  */
#line 192 "./QAZ_parser.y"
                    {
		auto* const newNode = new QAZ::ast::node::stmt({::QAZ::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].QAZ_declaration) });
		(yyval.QAZ_stmt) = newNode;
	}
#line 1273 "QAZ_parser.tab.c"
    break;

  case 6: /* stmt: global_call  */
#line 196 "./QAZ_parser.y"
                      {
		auto* const newNode = new QAZ::ast::node::stmt({::QAZ::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].QAZ_global_call) });
		(yyval.QAZ_stmt) = newNode;
	}
#line 1282 "QAZ_parser.tab.c"
    break;

  case 7: /* stmt: assignment  */
#line 200 "./QAZ_parser.y"
                     {
		auto* const newNode = new QAZ::ast::node::stmt({::QAZ::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].QAZ_assignment) });
		(yyval.QAZ_stmt) = newNode;
	}
#line 1291 "QAZ_parser.tab.c"
    break;

  case 8: /* declaration: variable_declaration  */
#line 207 "./QAZ_parser.y"
                             {
		auto* const newNode = new QAZ::ast::node::declaration({::QAZ::ast::Type::declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].QAZ_variable_declaration) });
		(yyval.QAZ_declaration) = newNode;
	}
#line 1300 "QAZ_parser.tab.c"
    break;

  case 9: /* declaration: function_declaration  */
#line 211 "./QAZ_parser.y"
                               {
		auto* const newNode = new QAZ::ast::node::declaration({::QAZ::ast::Type::declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].QAZ_function_declaration) });
		(yyval.QAZ_declaration) = newNode;
	}
#line 1309 "QAZ_parser.tab.c"
    break;

  case 10: /* global_call: call SEMICOLON  */
#line 218 "./QAZ_parser.y"
                       {
		auto* const newNode = new QAZ::ast::node::global_call({::QAZ::ast::Type::global_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].QAZ_call), new QAZ::ast::node::SEMICOLON({::QAZ::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_global_call) = newNode;
	}
#line 1318 "QAZ_parser.tab.c"
    break;

  case 11: /* call: function_call  */
#line 225 "./QAZ_parser.y"
                      {
		auto* const newNode = new QAZ::ast::node::call({::QAZ::ast::Type::call, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].QAZ_function_call) });
		(yyval.QAZ_call) = newNode;
	}
#line 1327 "QAZ_parser.tab.c"
    break;

  case 12: /* call: variable_call  */
#line 229 "./QAZ_parser.y"
                        {
		auto* const newNode = new QAZ::ast::node::call({::QAZ::ast::Type::call, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].QAZ_variable_call) });
		(yyval.QAZ_call) = newNode;
	}
#line 1336 "QAZ_parser.tab.c"
    break;

  case 13: /* function_call: function_name LEFT_PARENTHESIS function_arguments RIGHT_PARENTHESIS  */
#line 236 "./QAZ_parser.y"
                                                                            {
		auto* const newNode = new QAZ::ast::node::function_call({::QAZ::ast::Type::function_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-3].QAZ_function_name), new QAZ::ast::node::LEFT_PARENTHESIS({::QAZ::ast::Type::LEFT_PARENTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].QAZ_function_arguments), new QAZ::ast::node::RIGHT_PARENTHESIS({::QAZ::ast::Type::RIGHT_PARENTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_function_call) = newNode;
	}
#line 1345 "QAZ_parser.tab.c"
    break;

  case 14: /* variable_call: VARNAME  */
#line 243 "./QAZ_parser.y"
                {
		auto* const newNode = new QAZ::ast::node::variable_call({::QAZ::ast::Type::variable_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::VARNAME({::QAZ::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_variable_call) = newNode;
	}
#line 1354 "QAZ_parser.tab.c"
    break;

  case 15: /* assignment: variable_assignment SEMICOLON  */
#line 250 "./QAZ_parser.y"
                                      {
		auto* const newNode = new QAZ::ast::node::assignment({::QAZ::ast::Type::assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].QAZ_variable_assignment), new QAZ::ast::node::SEMICOLON({::QAZ::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_assignment) = newNode;
	}
#line 1363 "QAZ_parser.tab.c"
    break;

  case 16: /* expression: expression MULTIPLY expression  */
#line 257 "./QAZ_parser.y"
                                       {
		auto* const newNode = new QAZ::ast::node::expression({::QAZ::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].QAZ_expression), new QAZ::ast::node::MULTIPLY({::QAZ::ast::Type::MULTIPLY, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].QAZ_expression) });
		(yyval.QAZ_expression) = newNode;
	}
#line 1372 "QAZ_parser.tab.c"
    break;

  case 17: /* expression: expression DIVIDE expression  */
#line 261 "./QAZ_parser.y"
                                       {
		auto* const newNode = new QAZ::ast::node::expression({::QAZ::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].QAZ_expression), new QAZ::ast::node::DIVIDE({::QAZ::ast::Type::DIVIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].QAZ_expression) });
		(yyval.QAZ_expression) = newNode;
	}
#line 1381 "QAZ_parser.tab.c"
    break;

  case 18: /* expression: expression MINUS expression  */
#line 265 "./QAZ_parser.y"
                                      {
		auto* const newNode = new QAZ::ast::node::expression({::QAZ::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].QAZ_expression), new QAZ::ast::node::MINUS({::QAZ::ast::Type::MINUS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].QAZ_expression) });
		(yyval.QAZ_expression) = newNode;
	}
#line 1390 "QAZ_parser.tab.c"
    break;

  case 19: /* expression: expression PLUS expression  */
#line 269 "./QAZ_parser.y"
                                     {
		auto* const newNode = new QAZ::ast::node::expression({::QAZ::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].QAZ_expression), new QAZ::ast::node::PLUS({::QAZ::ast::Type::PLUS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].QAZ_expression) });
		(yyval.QAZ_expression) = newNode;
	}
#line 1399 "QAZ_parser.tab.c"
    break;

  case 20: /* expression: LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  */
#line 273 "./QAZ_parser.y"
                                                        {
		auto* const newNode = new QAZ::ast::node::expression({::QAZ::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {4, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::LEFT_PARENTHESIS({::QAZ::ast::Type::LEFT_PARENTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].QAZ_expression), new QAZ::ast::node::RIGHT_PARENTHESIS({::QAZ::ast::Type::RIGHT_PARENTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_expression) = newNode;
	}
#line 1408 "QAZ_parser.tab.c"
    break;

  case 21: /* expression: value  */
#line 277 "./QAZ_parser.y"
                {
		auto* const newNode = new QAZ::ast::node::expression({::QAZ::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {5, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].QAZ_value) });
		(yyval.QAZ_expression) = newNode;
	}
#line 1417 "QAZ_parser.tab.c"
    break;

  case 22: /* expression: call  */
#line 281 "./QAZ_parser.y"
               {
		auto* const newNode = new QAZ::ast::node::expression({::QAZ::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {6, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].QAZ_call) });
		(yyval.QAZ_expression) = newNode;
	}
#line 1426 "QAZ_parser.tab.c"
    break;

  case 23: /* variable_declaration: type variable EQUAL expression SEMICOLON  */
#line 288 "./QAZ_parser.y"
                                                 {
		auto* const newNode = new QAZ::ast::node::variable_declaration({::QAZ::ast::Type::variable_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-4].QAZ_type), (yyvsp[-3].QAZ_variable), new QAZ::ast::node::EQUAL({::QAZ::ast::Type::EQUAL, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].QAZ_expression), new QAZ::ast::node::SEMICOLON({::QAZ::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_variable_declaration) = newNode;
	}
#line 1435 "QAZ_parser.tab.c"
    break;

  case 24: /* function_declaration: return_type function_name LEFT_PARENTHESIS function_parameters RIGHT_PARENTHESIS function_block  */
#line 295 "./QAZ_parser.y"
                                                                                                        {
		auto* const newNode = new QAZ::ast::node::function_declaration({::QAZ::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-5].QAZ_return_type), (yyvsp[-4].QAZ_function_name), new QAZ::ast::node::LEFT_PARENTHESIS({::QAZ::ast::Type::LEFT_PARENTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal)}), (yyvsp[-2].QAZ_function_parameters), new QAZ::ast::node::RIGHT_PARENTHESIS({::QAZ::ast::Type::RIGHT_PARENTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].QAZ_function_block) });
		(yyval.QAZ_function_declaration) = newNode;
	}
#line 1444 "QAZ_parser.tab.c"
    break;

  case 25: /* variable_assignment: variable EQUAL expression SEMICOLON  */
#line 302 "./QAZ_parser.y"
                                            {
		auto* const newNode = new QAZ::ast::node::variable_assignment({::QAZ::ast::Type::variable_assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-3].QAZ_variable), new QAZ::ast::node::EQUAL({::QAZ::ast::Type::EQUAL, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].QAZ_expression), new QAZ::ast::node::SEMICOLON({::QAZ::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_variable_assignment) = newNode;
	}
#line 1453 "QAZ_parser.tab.c"
    break;

  case 26: /* return_assignment: RETURN EQUAL expression SEMICOLON  */
#line 309 "./QAZ_parser.y"
                                          {
		auto* const newNode = new QAZ::ast::node::return_assignment({::QAZ::ast::Type::return_assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::RETURN({::QAZ::ast::Type::RETURN, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal)}), new QAZ::ast::node::EQUAL({::QAZ::ast::Type::EQUAL, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].QAZ_expression), new QAZ::ast::node::SEMICOLON({::QAZ::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_return_assignment) = newNode;
	}
#line 1462 "QAZ_parser.tab.c"
    break;

  case 27: /* function_parameters: function_parameter COMMA function_parameters  */
#line 316 "./QAZ_parser.y"
                                                     {
		auto* const newNode = new QAZ::ast::node::function_parameters({::QAZ::ast::Type::function_parameters, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].QAZ_function_parameter), new QAZ::ast::node::COMMA({::QAZ::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].QAZ_function_parameters) });
		(yyval.QAZ_function_parameters) = newNode;
	}
#line 1471 "QAZ_parser.tab.c"
    break;

  case 28: /* function_parameters: function_parameter function_parameters  */
#line 320 "./QAZ_parser.y"
                                                 {
		auto* const newNode = new QAZ::ast::node::function_parameters({::QAZ::ast::Type::function_parameters, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].QAZ_function_parameter), (yyvsp[0].QAZ_function_parameters) });
		(yyval.QAZ_function_parameters) = newNode;
	}
#line 1480 "QAZ_parser.tab.c"
    break;

  case 29: /* function_parameters: %empty  */
#line 324 "./QAZ_parser.y"
          {
		auto* const newNode = new QAZ::ast::node::function_parameters({::QAZ::ast::Type::function_parameters, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.QAZ_function_parameters) = newNode;
	}
#line 1489 "QAZ_parser.tab.c"
    break;

  case 30: /* function_arguments: function_argument COMMA function_arguments  */
#line 331 "./QAZ_parser.y"
                                                   {
		auto* const newNode = new QAZ::ast::node::function_arguments({::QAZ::ast::Type::function_arguments, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].QAZ_function_argument), new QAZ::ast::node::COMMA({::QAZ::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].QAZ_function_arguments) });
		(yyval.QAZ_function_arguments) = newNode;
	}
#line 1498 "QAZ_parser.tab.c"
    break;

  case 31: /* function_arguments: function_argument function_arguments  */
#line 335 "./QAZ_parser.y"
                                               {
		auto* const newNode = new QAZ::ast::node::function_arguments({::QAZ::ast::Type::function_arguments, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].QAZ_function_argument), (yyvsp[0].QAZ_function_arguments) });
		(yyval.QAZ_function_arguments) = newNode;
	}
#line 1507 "QAZ_parser.tab.c"
    break;

  case 32: /* function_arguments: %empty  */
#line 339 "./QAZ_parser.y"
          {
		auto* const newNode = new QAZ::ast::node::function_arguments({::QAZ::ast::Type::function_arguments, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.QAZ_function_arguments) = newNode;
	}
#line 1516 "QAZ_parser.tab.c"
    break;

  case 33: /* function_block: LEFT_BRACKET stmts return_assignment RIGHT_BRACKET  */
#line 346 "./QAZ_parser.y"
                                                           {
		auto* const newNode = new QAZ::ast::node::function_block({::QAZ::ast::Type::function_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::LEFT_BRACKET({::QAZ::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal)}), (yyvsp[-2].QAZ_stmts), (yyvsp[-1].QAZ_return_assignment), new QAZ::ast::node::RIGHT_BRACKET({::QAZ::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_function_block) = newNode;
	}
#line 1525 "QAZ_parser.tab.c"
    break;

  case 34: /* function_parameter: type VARNAME  */
#line 353 "./QAZ_parser.y"
                     {
		auto* const newNode = new QAZ::ast::node::function_parameter({::QAZ::ast::Type::function_parameter, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].QAZ_type), new QAZ::ast::node::VARNAME({::QAZ::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_function_parameter) = newNode;
	}
#line 1534 "QAZ_parser.tab.c"
    break;

  case 35: /* function_argument: VARNAME  */
#line 360 "./QAZ_parser.y"
                {
		auto* const newNode = new QAZ::ast::node::function_argument({::QAZ::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::VARNAME({::QAZ::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_function_argument) = newNode;
	}
#line 1543 "QAZ_parser.tab.c"
    break;

  case 36: /* function_name: VARNAME  */
#line 367 "./QAZ_parser.y"
                {
		auto* const newNode = new QAZ::ast::node::function_name({::QAZ::ast::Type::function_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::VARNAME({::QAZ::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_function_name) = newNode;
	}
#line 1552 "QAZ_parser.tab.c"
    break;

  case 37: /* return_type: type  */
#line 374 "./QAZ_parser.y"
             {
		auto* const newNode = new QAZ::ast::node::return_type({::QAZ::ast::Type::return_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].QAZ_type) });
		(yyval.QAZ_return_type) = newNode;
	}
#line 1561 "QAZ_parser.tab.c"
    break;

  case 38: /* variable: VARNAME  */
#line 381 "./QAZ_parser.y"
                {
		auto* const newNode = new QAZ::ast::node::variable({::QAZ::ast::Type::variable, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::VARNAME({::QAZ::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_variable) = newNode;
	}
#line 1570 "QAZ_parser.tab.c"
    break;

  case 39: /* type: INTEGER_TYPE  */
#line 388 "./QAZ_parser.y"
                     {
		auto* const newNode = new QAZ::ast::node::type({::QAZ::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::INTEGER_TYPE({::QAZ::ast::Type::INTEGER_TYPE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_type) = newNode;
	}
#line 1579 "QAZ_parser.tab.c"
    break;

  case 40: /* type: STRING_TYPE  */
#line 392 "./QAZ_parser.y"
                      {
		auto* const newNode = new QAZ::ast::node::type({::QAZ::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::STRING_TYPE({::QAZ::ast::Type::STRING_TYPE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_type) = newNode;
	}
#line 1588 "QAZ_parser.tab.c"
    break;

  case 41: /* type: VARNAME  */
#line 396 "./QAZ_parser.y"
                  {
		auto* const newNode = new QAZ::ast::node::type({::QAZ::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::VARNAME({::QAZ::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_type) = newNode;
	}
#line 1597 "QAZ_parser.tab.c"
    break;

  case 42: /* value: NUMBER  */
#line 403 "./QAZ_parser.y"
               {
		auto* const newNode = new QAZ::ast::node::value({::QAZ::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::NUMBER({::QAZ::ast::Type::NUMBER, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_value) = newNode;
	}
#line 1606 "QAZ_parser.tab.c"
    break;

  case 43: /* value: DECIMAL  */
#line 407 "./QAZ_parser.y"
                  {
		auto* const newNode = new QAZ::ast::node::value({::QAZ::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::DECIMAL({::QAZ::ast::Type::DECIMAL, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.QAZ_value) = newNode;
	}
#line 1615 "QAZ_parser.tab.c"
    break;


#line 1619 "QAZ_parser.tab.c"

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

#line 413 "./QAZ_parser.y"


void QAZerror(const char* s)
{
	std::cout << "Syntax error on line: " << s << '\n';
}

deamer::external::cpp::ast::Tree* QAZ::parser::Parser::Parse(const std::string& text) const
{
	outputTree = nullptr;
	YY_BUFFER_STATE buf;
	buf = QAZ_scan_string(text.c_str());
	QAZparse();
	QAZ_delete_buffer(buf);
	QAZlex_destroy();

	return outputTree;
}

