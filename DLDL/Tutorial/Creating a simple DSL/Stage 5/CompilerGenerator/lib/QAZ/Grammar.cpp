#include "QAZ/Grammar.h"
#include "QAZ/Language.h"
QAZ::Grammar::Grammar(QAZ::Language* language)
			:	::deamer::language::generator::definition::property::user::Grammar<
					QAZ::Language>(language)
{
}
void QAZ::Grammar::GenerateObjects()
{
	// Non-Terminal initialization
	program.Set(::deamer::language::type::definition::object::main::NonTerminal("program", { program_stmts.Pointer() }));
stmts.Set(::deamer::language::type::definition::object::main::NonTerminal("stmts", { stmts_stmt_stmts.Pointer(),stmts_EMPTY.Pointer() }));
stmt.Set(::deamer::language::type::definition::object::main::NonTerminal("stmt", { stmt_declaration.Pointer(),stmt_global_call.Pointer(),stmt_assignment.Pointer() }));
declaration.Set(::deamer::language::type::definition::object::main::NonTerminal("declaration", { declaration_variable_declaration.Pointer(),declaration_FUNCTION_function_declaration.Pointer() }));
global_call.Set(::deamer::language::type::definition::object::main::NonTerminal("global_call", { global_call_call_SEMICOLON.Pointer() }));
call.Set(::deamer::language::type::definition::object::main::NonTerminal("call", { call_function_call.Pointer(),call_variable_call.Pointer() }));
function_call.Set(::deamer::language::type::definition::object::main::NonTerminal("function_call", { function_call_function_name_LEFT_PARENTHESIS_function_arguments_RIGHT_PARENTHESIS.Pointer() }));
variable_call.Set(::deamer::language::type::definition::object::main::NonTerminal("variable_call", { variable_call_VARNAME.Pointer() }));
assignment.Set(::deamer::language::type::definition::object::main::NonTerminal("assignment", { assignment_variable_assignment_SEMICOLON.Pointer() }));
expression.Set(::deamer::language::type::definition::object::main::NonTerminal("expression", { expression_expression_MULTIPLY_expression.Pointer(),expression_expression_DIVIDE_expression.Pointer(),expression_expression_MINUS_expression.Pointer(),expression_expression_PLUS_expression.Pointer(),expression_LEFT_PARENTHESIS_expression_RIGHT_PARENTHESIS.Pointer(),expression_value.Pointer(),expression_call.Pointer() }));
variable_declaration.Set(::deamer::language::type::definition::object::main::NonTerminal("variable_declaration", { variable_declaration_type_variable_EQUAL_expression_SEMICOLON.Pointer() }));
function_declaration.Set(::deamer::language::type::definition::object::main::NonTerminal("function_declaration", { function_declaration_return_type_function_name_LEFT_PARENTHESIS_function_parameters_RIGHT_PARENTHESIS_function_block.Pointer() }));
variable_assignment.Set(::deamer::language::type::definition::object::main::NonTerminal("variable_assignment", { variable_assignment_variable_EQUAL_expression_SEMICOLON.Pointer() }));
return_assignment.Set(::deamer::language::type::definition::object::main::NonTerminal("return_assignment", { return_assignment_RETURN_EQUAL_expression_SEMICOLON.Pointer() }));
function_parameters_at_least_one.Set(::deamer::language::type::definition::object::main::NonTerminal("function_parameters_at_least_one", { function_parameters_at_least_one_function_parameter_COMMA_function_parameters_at_least_one.Pointer(),function_parameters_at_least_one_function_parameter.Pointer() }));
function_parameters.Set(::deamer::language::type::definition::object::main::NonTerminal("function_parameters", { function_parameters_function_parameters_at_least_one.Pointer(),function_parameters_EMPTY.Pointer() }));
function_argument_at_least_one.Set(::deamer::language::type::definition::object::main::NonTerminal("function_argument_at_least_one", { function_argument_at_least_one_function_argument_COMMA_function_argument_at_least_one.Pointer(),function_argument_at_least_one_function_argument.Pointer() }));
function_arguments.Set(::deamer::language::type::definition::object::main::NonTerminal("function_arguments", { function_arguments_function_argument_at_least_one.Pointer(),function_arguments_EMPTY.Pointer() }));
function_block.Set(::deamer::language::type::definition::object::main::NonTerminal("function_block", { function_block_LEFT_BRACKET_stmts_return_assignment_RIGHT_BRACKET.Pointer() }));
function_parameter.Set(::deamer::language::type::definition::object::main::NonTerminal("function_parameter", { function_parameter_type_VARNAME.Pointer() }));
function_argument.Set(::deamer::language::type::definition::object::main::NonTerminal("function_argument", { function_argument_call.Pointer(),function_argument_value.Pointer() }));
function_name.Set(::deamer::language::type::definition::object::main::NonTerminal("function_name", { function_name_VARNAME.Pointer() }));
return_type.Set(::deamer::language::type::definition::object::main::NonTerminal("return_type", { return_type_type.Pointer() }));
variable.Set(::deamer::language::type::definition::object::main::NonTerminal("variable", { variable_VARNAME.Pointer() }));
type.Set(::deamer::language::type::definition::object::main::NonTerminal("type", { type_INTEGER_TYPE.Pointer(),type_STRING_TYPE.Pointer(),type_VARNAME.Pointer() }));
value.Set(::deamer::language::type::definition::object::main::NonTerminal("value", { value_NUMBER.Pointer(),value_DECIMAL.Pointer() }));

	// Production-Rule initialization
	program_stmts.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->stmts.Pointer() }));
stmts_stmt_stmts.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->stmt.Pointer(),Language->stmts.Pointer() }));
stmts_EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
stmt_declaration.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->declaration.Pointer() }));
stmt_global_call.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->global_call.Pointer() }));
stmt_assignment.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->assignment.Pointer() }));
declaration_variable_declaration.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->variable_declaration.Pointer() }));
declaration_FUNCTION_function_declaration.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->FUNCTION.Pointer(),Language->function_declaration.Pointer() }));
global_call_call_SEMICOLON.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->call.Pointer(),Language->SEMICOLON.Pointer() }));
call_function_call.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->function_call.Pointer() }));
call_variable_call.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->variable_call.Pointer() }));
function_call_function_name_LEFT_PARENTHESIS_function_arguments_RIGHT_PARENTHESIS.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->function_name.Pointer(),Language->LEFT_PARENTHESIS.Pointer(),Language->function_arguments.Pointer(),Language->RIGHT_PARENTHESIS.Pointer() }));
variable_call_VARNAME.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->VARNAME.Pointer() }));
assignment_variable_assignment_SEMICOLON.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->variable_assignment.Pointer(),Language->SEMICOLON.Pointer() }));
expression_expression_MULTIPLY_expression.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->expression.Pointer(),Language->MULTIPLY.Pointer(),Language->expression.Pointer() }));
expression_expression_DIVIDE_expression.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->expression.Pointer(),Language->DIVIDE.Pointer(),Language->expression.Pointer() }));
expression_expression_MINUS_expression.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->expression.Pointer(),Language->MINUS.Pointer(),Language->expression.Pointer() }));
expression_expression_PLUS_expression.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->expression.Pointer(),Language->PLUS.Pointer(),Language->expression.Pointer() }));
expression_LEFT_PARENTHESIS_expression_RIGHT_PARENTHESIS.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->LEFT_PARENTHESIS.Pointer(),Language->expression.Pointer(),Language->RIGHT_PARENTHESIS.Pointer() }));
expression_value.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->value.Pointer() }));
expression_call.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->call.Pointer() }));
variable_declaration_type_variable_EQUAL_expression_SEMICOLON.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->type.Pointer(),Language->variable.Pointer(),Language->EQUAL.Pointer(),Language->expression.Pointer(),Language->SEMICOLON.Pointer() }));
function_declaration_return_type_function_name_LEFT_PARENTHESIS_function_parameters_RIGHT_PARENTHESIS_function_block.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->return_type.Pointer(),Language->function_name.Pointer(),Language->LEFT_PARENTHESIS.Pointer(),Language->function_parameters.Pointer(),Language->RIGHT_PARENTHESIS.Pointer(),Language->function_block.Pointer() }));
variable_assignment_variable_EQUAL_expression_SEMICOLON.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->variable.Pointer(),Language->EQUAL.Pointer(),Language->expression.Pointer(),Language->SEMICOLON.Pointer() }));
return_assignment_RETURN_EQUAL_expression_SEMICOLON.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->RETURN.Pointer(),Language->EQUAL.Pointer(),Language->expression.Pointer(),Language->SEMICOLON.Pointer() }));
function_parameters_at_least_one_function_parameter_COMMA_function_parameters_at_least_one.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->function_parameter.Pointer(),Language->COMMA.Pointer(),Language->function_parameters_at_least_one.Pointer() }));
function_parameters_at_least_one_function_parameter.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->function_parameter.Pointer() }));
function_parameters_function_parameters_at_least_one.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->function_parameters_at_least_one.Pointer() }));
function_parameters_EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
function_argument_at_least_one_function_argument_COMMA_function_argument_at_least_one.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->function_argument.Pointer(),Language->COMMA.Pointer(),Language->function_argument_at_least_one.Pointer() }));
function_argument_at_least_one_function_argument.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->function_argument.Pointer() }));
function_arguments_function_argument_at_least_one.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->function_argument_at_least_one.Pointer() }));
function_arguments_EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
function_block_LEFT_BRACKET_stmts_return_assignment_RIGHT_BRACKET.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->LEFT_BRACKET.Pointer(),Language->stmts.Pointer(),Language->return_assignment.Pointer(),Language->RIGHT_BRACKET.Pointer() }));
function_parameter_type_VARNAME.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->type.Pointer(),Language->VARNAME.Pointer() }));
function_argument_call.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->call.Pointer() }));
function_argument_value.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->value.Pointer() }));
function_name_VARNAME.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->VARNAME.Pointer() }));
return_type_type.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->type.Pointer() }));
variable_VARNAME.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->VARNAME.Pointer() }));
type_INTEGER_TYPE.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->INTEGER_TYPE.Pointer() }));
type_STRING_TYPE.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->STRING_TYPE.Pointer() }));
type_VARNAME.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->VARNAME.Pointer() }));
value_NUMBER.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->NUMBER.Pointer() }));
value_DECIMAL.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->DECIMAL.Pointer() }));

	// Add object calls
	// AddObject(...)
	AddObject(program);
AddObject(stmts);
AddObject(stmt);
AddObject(declaration);
AddObject(global_call);
AddObject(call);
AddObject(function_call);
AddObject(variable_call);
AddObject(assignment);
AddObject(expression);
AddObject(variable_declaration);
AddObject(function_declaration);
AddObject(variable_assignment);
AddObject(return_assignment);
AddObject(function_parameters_at_least_one);
AddObject(function_parameters);
AddObject(function_argument_at_least_one);
AddObject(function_arguments);
AddObject(function_block);
AddObject(function_parameter);
AddObject(function_argument);
AddObject(function_name);
AddObject(return_type);
AddObject(variable);
AddObject(type);
AddObject(value);

	AddObject(program_stmts);
AddObject(stmts_stmt_stmts);
AddObject(stmts_EMPTY);
AddObject(stmt_declaration);
AddObject(stmt_global_call);
AddObject(stmt_assignment);
AddObject(declaration_variable_declaration);
AddObject(declaration_FUNCTION_function_declaration);
AddObject(global_call_call_SEMICOLON);
AddObject(call_function_call);
AddObject(call_variable_call);
AddObject(function_call_function_name_LEFT_PARENTHESIS_function_arguments_RIGHT_PARENTHESIS);
AddObject(variable_call_VARNAME);
AddObject(assignment_variable_assignment_SEMICOLON);
AddObject(expression_expression_MULTIPLY_expression);
AddObject(expression_expression_DIVIDE_expression);
AddObject(expression_expression_MINUS_expression);
AddObject(expression_expression_PLUS_expression);
AddObject(expression_LEFT_PARENTHESIS_expression_RIGHT_PARENTHESIS);
AddObject(expression_value);
AddObject(expression_call);
AddObject(variable_declaration_type_variable_EQUAL_expression_SEMICOLON);
AddObject(function_declaration_return_type_function_name_LEFT_PARENTHESIS_function_parameters_RIGHT_PARENTHESIS_function_block);
AddObject(variable_assignment_variable_EQUAL_expression_SEMICOLON);
AddObject(return_assignment_RETURN_EQUAL_expression_SEMICOLON);
AddObject(function_parameters_at_least_one_function_parameter_COMMA_function_parameters_at_least_one);
AddObject(function_parameters_at_least_one_function_parameter);
AddObject(function_parameters_function_parameters_at_least_one);
AddObject(function_parameters_EMPTY);
AddObject(function_argument_at_least_one_function_argument_COMMA_function_argument_at_least_one);
AddObject(function_argument_at_least_one_function_argument);
AddObject(function_arguments_function_argument_at_least_one);
AddObject(function_arguments_EMPTY);
AddObject(function_block_LEFT_BRACKET_stmts_return_assignment_RIGHT_BRACKET);
AddObject(function_parameter_type_VARNAME);
AddObject(function_argument_call);
AddObject(function_argument_value);
AddObject(function_name_VARNAME);
AddObject(return_type_type);
AddObject(variable_VARNAME);
AddObject(type_INTEGER_TYPE);
AddObject(type_STRING_TYPE);
AddObject(type_VARNAME);
AddObject(value_NUMBER);
AddObject(value_DECIMAL);

	// Place higher level operations here.
	// ReplaceObject(..., ...)
	// DeleteObject(..., ...)
	
}
