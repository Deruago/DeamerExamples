/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_QAZ_QAZ_PARSER_TAB_H_INCLUDED
# define YY_QAZ_QAZ_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int QAZdebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    EQUAL_EQUAL = 258,             /* EQUAL_EQUAL  */
    EQUAL = 259,                   /* EQUAL  */
    PLUS = 260,                    /* PLUS  */
    MINUS = 261,                   /* MINUS  */
    MULTIPLY = 262,                /* MULTIPLY  */
    DIVIDE = 263,                  /* DIVIDE  */
    LEFT_PARENTHESIS = 264,        /* LEFT_PARENTHESIS  */
    RIGHT_PARENTHESIS = 265,       /* RIGHT_PARENTHESIS  */
    LEFT_BRACKET = 266,            /* LEFT_BRACKET  */
    RIGHT_BRACKET = 267,           /* RIGHT_BRACKET  */
    LEFT_SQUARE_BRACKET = 268,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 269,    /* RIGHT_SQUARE_BRACKET  */
    COMMA = 270,                   /* COMMA  */
    SEMICOLON = 271,               /* SEMICOLON  */
    INTEGER_TYPE = 272,            /* INTEGER_TYPE  */
    STRING_TYPE = 273,             /* STRING_TYPE  */
    RETURN = 274,                  /* RETURN  */
    FUNCTION = 275,                /* FUNCTION  */
    VARNAME = 276,                 /* VARNAME  */
    DECIMAL = 277,                 /* DECIMAL  */
    NUMBER = 278                   /* NUMBER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 128 "./QAZ_parser.y"

	::deamer::external::cpp::lexer::TerminalObject* Terminal;
	::QAZ::ast::node::EQUAL_EQUAL* QAZ_EQUAL_EQUAL;
	::QAZ::ast::node::EQUAL* QAZ_EQUAL;
	::QAZ::ast::node::PLUS* QAZ_PLUS;
	::QAZ::ast::node::MINUS* QAZ_MINUS;
	::QAZ::ast::node::MULTIPLY* QAZ_MULTIPLY;
	::QAZ::ast::node::DIVIDE* QAZ_DIVIDE;
	::QAZ::ast::node::LEFT_PARENTHESIS* QAZ_LEFT_PARENTHESIS;
	::QAZ::ast::node::RIGHT_PARENTHESIS* QAZ_RIGHT_PARENTHESIS;
	::QAZ::ast::node::LEFT_BRACKET* QAZ_LEFT_BRACKET;
	::QAZ::ast::node::RIGHT_BRACKET* QAZ_RIGHT_BRACKET;
	::QAZ::ast::node::LEFT_SQUARE_BRACKET* QAZ_LEFT_SQUARE_BRACKET;
	::QAZ::ast::node::RIGHT_SQUARE_BRACKET* QAZ_RIGHT_SQUARE_BRACKET;
	::QAZ::ast::node::COMMA* QAZ_COMMA;
	::QAZ::ast::node::SEMICOLON* QAZ_SEMICOLON;
	::QAZ::ast::node::INTEGER_TYPE* QAZ_INTEGER_TYPE;
	::QAZ::ast::node::STRING_TYPE* QAZ_STRING_TYPE;
	::QAZ::ast::node::RETURN* QAZ_RETURN;
	::QAZ::ast::node::FUNCTION* QAZ_FUNCTION;
	::QAZ::ast::node::VARNAME* QAZ_VARNAME;
	::QAZ::ast::node::DECIMAL* QAZ_DECIMAL;
	::QAZ::ast::node::NUMBER* QAZ_NUMBER;
	::QAZ::ast::node::SPACES* QAZ_SPACES;
	::QAZ::ast::node::ESCAPE_CHARS* QAZ_ESCAPE_CHARS;
	::QAZ::ast::node::program* QAZ_program;
	::QAZ::ast::node::stmts* QAZ_stmts;
	::QAZ::ast::node::stmt* QAZ_stmt;
	::QAZ::ast::node::declaration* QAZ_declaration;
	::QAZ::ast::node::global_call* QAZ_global_call;
	::QAZ::ast::node::call* QAZ_call;
	::QAZ::ast::node::function_call* QAZ_function_call;
	::QAZ::ast::node::variable_call* QAZ_variable_call;
	::QAZ::ast::node::assignment* QAZ_assignment;
	::QAZ::ast::node::expression* QAZ_expression;
	::QAZ::ast::node::variable_declaration* QAZ_variable_declaration;
	::QAZ::ast::node::function_declaration* QAZ_function_declaration;
	::QAZ::ast::node::variable_assignment* QAZ_variable_assignment;
	::QAZ::ast::node::return_assignment* QAZ_return_assignment;
	::QAZ::ast::node::function_parameters_at_least_one* QAZ_function_parameters_at_least_one;
	::QAZ::ast::node::function_parameters* QAZ_function_parameters;
	::QAZ::ast::node::function_argument_at_least_one* QAZ_function_argument_at_least_one;
	::QAZ::ast::node::function_arguments* QAZ_function_arguments;
	::QAZ::ast::node::function_block* QAZ_function_block;
	::QAZ::ast::node::function_parameter* QAZ_function_parameter;
	::QAZ::ast::node::function_argument* QAZ_function_argument;
	::QAZ::ast::node::function_name* QAZ_function_name;
	::QAZ::ast::node::return_type* QAZ_return_type;
	::QAZ::ast::node::variable* QAZ_variable;
	::QAZ::ast::node::type* QAZ_type;
	::QAZ::ast::node::value* QAZ_value;

#line 140 "QAZ_parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE QAZlval;

int QAZparse (void);

#endif /* !YY_QAZ_QAZ_PARSER_TAB_H_INCLUDED  */
