%option yylineno
%option noyywrap
%option never-interactive
%option nounistd

%{
#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include "QAZ/Flex/Lexer.h"
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
#include "QAZ/Ast/Node/FUNCTION.h"
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
#include "QAZ/Ast/Node/function_parameters_at_least_one.h"
#include "QAZ/Ast/Node/function_parameters.h"
#include "QAZ/Ast/Node/function_argument_at_least_one.h"
#include "QAZ/Ast/Node/function_arguments.h"
#include "QAZ/Ast/Node/function_block.h"
#include "QAZ/Ast/Node/function_parameter.h"
#include "QAZ/Ast/Node/function_argument.h"
#include "QAZ/Ast/Node/function_name.h"
#include "QAZ/Ast/Node/return_type.h"
#include "QAZ/Ast/Node/variable.h"
#include "QAZ/Ast/Node/type.h"
#include "QAZ/Ast/Node/value.h"
#include "Bison/QAZ_parser.tab.h"
void showError();
extern int QAZlex();

static bool local_store = false;
static void store(const deamer::external::cpp::lexer::TerminalObject* const newObject);
static std::vector<const deamer::external::cpp::lexer::TerminalObject*> local_objects;
#ifndef yyval
#define yyval yytext
#endif //yyval
%}

EQUAL_EQUAL	([=][=])
EQUAL	([=])
PLUS	([+])
MINUS	([-])
MULTIPLY	([*])
DIVIDE	([/])
LEFT_PARENTHESIS	([(])
RIGHT_PARENTHESIS	([)])
LEFT_BRACKET	([{])
RIGHT_BRACKET	([}])
LEFT_SQUARE_BRACKET	([\[])
RIGHT_SQUARE_BRACKET	([\]])
COMMA	([,])
SEMICOLON	([;])
INTEGER_TYPE	(Integer)
STRING_TYPE	(String)
RETURN	(Return)
FUNCTION	(Define)
VARNAME	([a-zA-Z_]+[a-zA-Z_0-9]*)
DECIMAL	([0-9]+[\.][0-9]+)
NUMBER	([0-9]+)
SPACES	([ ]*)
ESCAPE_CHARS	([\n\r\t\v\b\a]*)

%%

{EQUAL_EQUAL}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (EQUAL_EQUAL);;}
{EQUAL}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (EQUAL);;}
{PLUS}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (PLUS);;}
{MINUS}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (MINUS);;}
{MULTIPLY}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (MULTIPLY);;}
{DIVIDE}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (DIVIDE);;}
{LEFT_PARENTHESIS}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (LEFT_PARENTHESIS);;}
{RIGHT_PARENTHESIS}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (RIGHT_PARENTHESIS);;}
{LEFT_BRACKET}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (LEFT_BRACKET);;}
{RIGHT_BRACKET}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (RIGHT_BRACKET);;}
{LEFT_SQUARE_BRACKET}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (LEFT_SQUARE_BRACKET);;}
{RIGHT_SQUARE_BRACKET}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (RIGHT_SQUARE_BRACKET);;}
{COMMA}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (COMMA);;}
{SEMICOLON}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (SEMICOLON);;}
{INTEGER_TYPE}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (INTEGER_TYPE);;}
{STRING_TYPE}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (STRING_TYPE);;}
{RETURN}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (RETURN);;}
{FUNCTION}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (FUNCTION);;}
{VARNAME}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (VARNAME);;}
{DECIMAL}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (DECIMAL);;}
{NUMBER}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else QAZlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (NUMBER);;}
{SPACES}	{if (!local_store) ;}
{ESCAPE_CHARS}	{if (!local_store) ;}

%%
static void store(const deamer::external::cpp::lexer::TerminalObject* const newObject)
{
	local_objects.push_back(newObject);
}

static void clear()
{
	local_objects.clear();
}

std::vector<const deamer::external::cpp::lexer::TerminalObject*> QAZ::lexer::Lexer::Tokenize(const std::string& text) const
{
	local_store = true;

	YY_BUFFER_STATE buf;
	buf = yy_scan_string(text.c_str());
	yylex();
	yy_delete_buffer(buf);
	yylex_destroy();

	local_store = false;

	auto local_objects_copy = local_objects;
	clear();

	return local_objects_copy;
}


