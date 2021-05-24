%{
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
%}

%token<Terminal> EQUAL_EQUAL
%token<Terminal> EQUAL
%token<Terminal> PLUS
%token<Terminal> MINUS
%token<Terminal> MULTIPLY
%token<Terminal> DIVIDE
%token<Terminal> LEFT_PARENTHESIS
%token<Terminal> RIGHT_PARENTHESIS
%token<Terminal> LEFT_BRACKET
%token<Terminal> RIGHT_BRACKET
%token<Terminal> LEFT_SQUARE_BRACKET
%token<Terminal> RIGHT_SQUARE_BRACKET
%token<Terminal> COMMA
%token<Terminal> SEMICOLON
%token<Terminal> INTEGER_TYPE
%token<Terminal> STRING_TYPE
%token<Terminal> RETURN
%token<Terminal> VARNAME
%token<Terminal> DECIMAL
%token<Terminal> NUMBER

%nterm<QAZ_program> program
%nterm<QAZ_stmts> stmts
%nterm<QAZ_stmt> stmt
%nterm<QAZ_declaration> declaration
%nterm<QAZ_global_call> global_call
%nterm<QAZ_call> call
%nterm<QAZ_function_call> function_call
%nterm<QAZ_variable_call> variable_call
%nterm<QAZ_assignment> assignment
%nterm<QAZ_expression> expression
%nterm<QAZ_variable_declaration> variable_declaration
%nterm<QAZ_function_declaration> function_declaration
%nterm<QAZ_variable_assignment> variable_assignment
%nterm<QAZ_return_assignment> return_assignment
%nterm<QAZ_function_parameters> function_parameters
%nterm<QAZ_function_arguments> function_arguments
%nterm<QAZ_function_block> function_block
%nterm<QAZ_function_parameter> function_parameter
%nterm<QAZ_function_argument> function_argument
%nterm<QAZ_function_name> function_name
%nterm<QAZ_return_type> return_type
%nterm<QAZ_variable> variable
%nterm<QAZ_type> type
%nterm<QAZ_value> value



%union{
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
	::QAZ::ast::node::function_parameters* QAZ_function_parameters;
	::QAZ::ast::node::function_arguments* QAZ_function_arguments;
	::QAZ::ast::node::function_block* QAZ_function_block;
	::QAZ::ast::node::function_parameter* QAZ_function_parameter;
	::QAZ::ast::node::function_argument* QAZ_function_argument;
	::QAZ::ast::node::function_name* QAZ_function_name;
	::QAZ::ast::node::return_type* QAZ_return_type;
	::QAZ::ast::node::variable* QAZ_variable;
	::QAZ::ast::node::type* QAZ_type;
	::QAZ::ast::node::value* QAZ_value;
}

%%

program:
	stmts {
		auto* const newNode = new QAZ::ast::node::program({::QAZ::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
;

stmts:
	stmt stmts {
		auto* const newNode = new QAZ::ast::node::stmts({::QAZ::ast::Type::stmts, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, $2 });
		$$ = newNode;
	}
	| {
		auto* const newNode = new QAZ::ast::node::stmts({::QAZ::ast::Type::stmts, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		$$ = newNode;
	}
;

stmt:
	declaration {
		auto* const newNode = new QAZ::ast::node::stmt({::QAZ::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
	| global_call {
		auto* const newNode = new QAZ::ast::node::stmt({::QAZ::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
	| assignment {
		auto* const newNode = new QAZ::ast::node::stmt({::QAZ::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
;

declaration:
	variable_declaration {
		auto* const newNode = new QAZ::ast::node::declaration({::QAZ::ast::Type::declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
	| function_declaration {
		auto* const newNode = new QAZ::ast::node::declaration({::QAZ::ast::Type::declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
;

global_call:
	call SEMICOLON {
		auto* const newNode = new QAZ::ast::node::global_call({::QAZ::ast::Type::global_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, new QAZ::ast::node::SEMICOLON({::QAZ::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, $2}) });
		$$ = newNode;
	}
;

call:
	function_call {
		auto* const newNode = new QAZ::ast::node::call({::QAZ::ast::Type::call, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
	| variable_call {
		auto* const newNode = new QAZ::ast::node::call({::QAZ::ast::Type::call, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
;

function_call:
	function_name LEFT_PARENTHESIS function_arguments RIGHT_PARENTHESIS {
		auto* const newNode = new QAZ::ast::node::function_call({::QAZ::ast::Type::function_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, new QAZ::ast::node::LEFT_PARENTHESIS({::QAZ::ast::Type::LEFT_PARENTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), $3, new QAZ::ast::node::RIGHT_PARENTHESIS({::QAZ::ast::Type::RIGHT_PARENTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $4}) });
		$$ = newNode;
	}
;

variable_call:
	VARNAME {
		auto* const newNode = new QAZ::ast::node::variable_call({::QAZ::ast::Type::variable_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::VARNAME({::QAZ::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
;

assignment:
	variable_assignment SEMICOLON {
		auto* const newNode = new QAZ::ast::node::assignment({::QAZ::ast::Type::assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, new QAZ::ast::node::SEMICOLON({::QAZ::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, $2}) });
		$$ = newNode;
	}
;

expression:
	expression MULTIPLY expression {
		auto* const newNode = new QAZ::ast::node::expression({::QAZ::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, new QAZ::ast::node::MULTIPLY({::QAZ::ast::Type::MULTIPLY, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), $3 });
		$$ = newNode;
	}
	| expression DIVIDE expression {
		auto* const newNode = new QAZ::ast::node::expression({::QAZ::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, new QAZ::ast::node::DIVIDE({::QAZ::ast::Type::DIVIDE, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), $3 });
		$$ = newNode;
	}
	| expression MINUS expression {
		auto* const newNode = new QAZ::ast::node::expression({::QAZ::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, new QAZ::ast::node::MINUS({::QAZ::ast::Type::MINUS, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), $3 });
		$$ = newNode;
	}
	| expression PLUS expression {
		auto* const newNode = new QAZ::ast::node::expression({::QAZ::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, new QAZ::ast::node::PLUS({::QAZ::ast::Type::PLUS, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), $3 });
		$$ = newNode;
	}
	| LEFT_PARENTHESIS expression RIGHT_PARENTHESIS {
		auto* const newNode = new QAZ::ast::node::expression({::QAZ::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {4, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::LEFT_PARENTHESIS({::QAZ::ast::Type::LEFT_PARENTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $1}), $2, new QAZ::ast::node::RIGHT_PARENTHESIS({::QAZ::ast::Type::RIGHT_PARENTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $3}) });
		$$ = newNode;
	}
	| value {
		auto* const newNode = new QAZ::ast::node::expression({::QAZ::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {5, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
	| call {
		auto* const newNode = new QAZ::ast::node::expression({::QAZ::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {6, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
;

variable_declaration:
	type variable EQUAL expression SEMICOLON {
		auto* const newNode = new QAZ::ast::node::variable_declaration({::QAZ::ast::Type::variable_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, $2, new QAZ::ast::node::EQUAL({::QAZ::ast::Type::EQUAL, ::deamer::external::cpp::ast::NodeValue::terminal, $3}), $4, new QAZ::ast::node::SEMICOLON({::QAZ::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, $5}) });
		$$ = newNode;
	}
;

function_declaration:
	return_type function_name LEFT_PARENTHESIS function_parameters RIGHT_PARENTHESIS function_block {
		auto* const newNode = new QAZ::ast::node::function_declaration({::QAZ::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, $2, new QAZ::ast::node::LEFT_PARENTHESIS({::QAZ::ast::Type::LEFT_PARENTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $3}), $4, new QAZ::ast::node::RIGHT_PARENTHESIS({::QAZ::ast::Type::RIGHT_PARENTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $5}), $6 });
		$$ = newNode;
	}
;

variable_assignment:
	variable EQUAL expression SEMICOLON {
		auto* const newNode = new QAZ::ast::node::variable_assignment({::QAZ::ast::Type::variable_assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, new QAZ::ast::node::EQUAL({::QAZ::ast::Type::EQUAL, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), $3, new QAZ::ast::node::SEMICOLON({::QAZ::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, $4}) });
		$$ = newNode;
	}
;

return_assignment:
	RETURN EQUAL expression SEMICOLON {
		auto* const newNode = new QAZ::ast::node::return_assignment({::QAZ::ast::Type::return_assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::RETURN({::QAZ::ast::Type::RETURN, ::deamer::external::cpp::ast::NodeValue::terminal, $1}), new QAZ::ast::node::EQUAL({::QAZ::ast::Type::EQUAL, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), $3, new QAZ::ast::node::SEMICOLON({::QAZ::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, $4}) });
		$$ = newNode;
	}
;

function_parameters:
	function_parameter COMMA function_parameters {
		auto* const newNode = new QAZ::ast::node::function_parameters({::QAZ::ast::Type::function_parameters, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, new QAZ::ast::node::COMMA({::QAZ::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), $3 });
		$$ = newNode;
	}
	| function_parameter function_parameters {
		auto* const newNode = new QAZ::ast::node::function_parameters({::QAZ::ast::Type::function_parameters, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, $2 });
		$$ = newNode;
	}
	| {
		auto* const newNode = new QAZ::ast::node::function_parameters({::QAZ::ast::Type::function_parameters, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		$$ = newNode;
	}
;

function_arguments:
	function_argument COMMA function_arguments {
		auto* const newNode = new QAZ::ast::node::function_arguments({::QAZ::ast::Type::function_arguments, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, new QAZ::ast::node::COMMA({::QAZ::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), $3 });
		$$ = newNode;
	}
	| function_argument function_arguments {
		auto* const newNode = new QAZ::ast::node::function_arguments({::QAZ::ast::Type::function_arguments, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, $2 });
		$$ = newNode;
	}
	| {
		auto* const newNode = new QAZ::ast::node::function_arguments({::QAZ::ast::Type::function_arguments, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		$$ = newNode;
	}
;

function_block:
	LEFT_BRACKET stmts return_assignment RIGHT_BRACKET {
		auto* const newNode = new QAZ::ast::node::function_block({::QAZ::ast::Type::function_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::LEFT_BRACKET({::QAZ::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1}), $2, $3, new QAZ::ast::node::RIGHT_BRACKET({::QAZ::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $4}) });
		$$ = newNode;
	}
;

function_parameter:
	type VARNAME {
		auto* const newNode = new QAZ::ast::node::function_parameter({::QAZ::ast::Type::function_parameter, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, new QAZ::ast::node::VARNAME({::QAZ::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $2}) });
		$$ = newNode;
	}
;

function_argument:
	VARNAME {
		auto* const newNode = new QAZ::ast::node::function_argument({::QAZ::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::VARNAME({::QAZ::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
;

function_name:
	VARNAME {
		auto* const newNode = new QAZ::ast::node::function_name({::QAZ::ast::Type::function_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::VARNAME({::QAZ::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
;

return_type:
	type {
		auto* const newNode = new QAZ::ast::node::return_type({::QAZ::ast::Type::return_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
;

variable:
	VARNAME {
		auto* const newNode = new QAZ::ast::node::variable({::QAZ::ast::Type::variable, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::VARNAME({::QAZ::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
;

type:
	INTEGER_TYPE {
		auto* const newNode = new QAZ::ast::node::type({::QAZ::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::INTEGER_TYPE({::QAZ::ast::Type::INTEGER_TYPE, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| STRING_TYPE {
		auto* const newNode = new QAZ::ast::node::type({::QAZ::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::STRING_TYPE({::QAZ::ast::Type::STRING_TYPE, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| VARNAME {
		auto* const newNode = new QAZ::ast::node::type({::QAZ::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::VARNAME({::QAZ::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
;

value:
	NUMBER {
		auto* const newNode = new QAZ::ast::node::value({::QAZ::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::NUMBER({::QAZ::ast::Type::NUMBER, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| DECIMAL {
		auto* const newNode = new QAZ::ast::node::value({::QAZ::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new QAZ::ast::node::DECIMAL({::QAZ::ast::Type::DECIMAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
;

%%

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

