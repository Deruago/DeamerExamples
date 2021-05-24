#ifndef QAZ_GRAMMAR_H
#define QAZ_GRAMMAR_H
#include "Deamer/Language/Generator/Definition/Property/User/Main/Grammar.h"
namespace QAZ
{
	class Language;
	/*!	\class Grammar
	 *
	 *	\brief This contains the grammar LPD of the language QAZ
	 *
	 *	\note This is auto-generated via the DLDL definition.
	 */
	class Grammar : public ::deamer::language::generator::definition::property::user::Grammar<
								::QAZ::Language>
	{
	public:
		// Non-Terminal declarations
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> program;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> stmts;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> stmt;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> global_call;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> call;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_call;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> variable_call;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> assignment;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> expression;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> variable_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> variable_assignment;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> return_assignment;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_parameters_at_least_one;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_parameters;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_argument_at_least_one;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_arguments;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_block;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_parameter;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_argument;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_name;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> return_type;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> variable;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> type;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> value;

	
		// Production-Rule declarations
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> program_stmts;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> stmts_stmt_stmts;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> stmts_EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> stmt_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> stmt_global_call;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> stmt_assignment;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> declaration_variable_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> declaration_FUNCTION_function_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> global_call_call_SEMICOLON;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> call_function_call;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> call_variable_call;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_call_function_name_LEFT_PARENTHESIS_function_arguments_RIGHT_PARENTHESIS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> variable_call_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> assignment_variable_assignment_SEMICOLON;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expression_expression_MULTIPLY_expression;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expression_expression_DIVIDE_expression;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expression_expression_MINUS_expression;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expression_expression_PLUS_expression;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expression_LEFT_PARENTHESIS_expression_RIGHT_PARENTHESIS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expression_value;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expression_call;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> variable_declaration_type_variable_EQUAL_expression_SEMICOLON;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_declaration_return_type_function_name_LEFT_PARENTHESIS_function_parameters_RIGHT_PARENTHESIS_function_block;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> variable_assignment_variable_EQUAL_expression_SEMICOLON;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> return_assignment_RETURN_EQUAL_expression_SEMICOLON;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_parameters_at_least_one_function_parameter_COMMA_function_parameters_at_least_one;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_parameters_at_least_one_function_parameter;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_parameters_function_parameters_at_least_one;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_parameters_EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_argument_at_least_one_function_argument_COMMA_function_argument_at_least_one;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_argument_at_least_one_function_argument;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_arguments_function_argument_at_least_one;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_arguments_EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_block_LEFT_BRACKET_stmts_return_assignment_RIGHT_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_parameter_type_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_argument_call;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_argument_value;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_name_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> return_type_type;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> variable_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> type_INTEGER_TYPE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> type_STRING_TYPE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> type_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> value_NUMBER;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> value_DECIMAL;

	
	public:
		Grammar(QAZ::Language* language);
		void GenerateObjects() override;
	};
}
#endif // QAZ_GRAMMAR_H
