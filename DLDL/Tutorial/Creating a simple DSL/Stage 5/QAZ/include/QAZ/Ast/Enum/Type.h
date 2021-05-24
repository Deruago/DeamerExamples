#ifndef QAZ_AST_ENUM_TYPE_H
#define QAZ_AST_ENUM_TYPE_H

namespace QAZ { namespace ast {

	enum class Type
	{
		// Terminals
		EQUAL_EQUAL,
		EQUAL,
		PLUS,
		MINUS,
		MULTIPLY,
		DIVIDE,
		LEFT_PARENTHESIS,
		RIGHT_PARENTHESIS,
		LEFT_BRACKET,
		RIGHT_BRACKET,
		LEFT_SQUARE_BRACKET,
		RIGHT_SQUARE_BRACKET,
		COMMA,
		SEMICOLON,
		INTEGER_TYPE,
		STRING_TYPE,
		RETURN,
		FUNCTION,
		VARNAME,
		DECIMAL,
		NUMBER,
		SPACES,
		ESCAPE_CHARS,

		// Non-Terminals
		program,
		stmts,
		stmt,
		declaration,
		global_call,
		call,
		function_call,
		variable_call,
		assignment,
		expression,
		variable_declaration,
		function_declaration,
		variable_assignment,
		return_assignment,
		function_parameters_at_least_one,
		function_parameters,
		function_argument_at_least_one,
		function_arguments,
		function_block,
		function_parameter,
		function_argument,
		function_name,
		return_type,
		variable,
		type,
		value,
	};

}}

#endif // QAZ_AST_ENUM_TYPE_H
