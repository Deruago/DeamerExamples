#ifndef QAZ_AST_VISITOR_DEAMER_VISITOR_H
#define QAZ_AST_VISITOR_DEAMER_VISITOR_H

#include <Deamer/External/Cpp/Ast/Visitor.h>
#include "QAZ/Ast/Node/QAZ.h"
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

namespace QAZ { namespace ast { namespace Visitor { 

	class Visitor : public ::deamer::external::cpp::ast::Visitor
	{
	private:
	public:
		Visitor() = default;
		~Visitor() override = default;
	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node) override
		{
			const auto enumeratedValue = static_cast<QAZ::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			case QAZ::ast::Type::EQUAL_EQUAL:
			{
				Visit(static_cast<const QAZ::ast::node::EQUAL_EQUAL*>(node));
				break;
			}
			case QAZ::ast::Type::EQUAL:
			{
				Visit(static_cast<const QAZ::ast::node::EQUAL*>(node));
				break;
			}
			case QAZ::ast::Type::PLUS:
			{
				Visit(static_cast<const QAZ::ast::node::PLUS*>(node));
				break;
			}
			case QAZ::ast::Type::MINUS:
			{
				Visit(static_cast<const QAZ::ast::node::MINUS*>(node));
				break;
			}
			case QAZ::ast::Type::MULTIPLY:
			{
				Visit(static_cast<const QAZ::ast::node::MULTIPLY*>(node));
				break;
			}
			case QAZ::ast::Type::DIVIDE:
			{
				Visit(static_cast<const QAZ::ast::node::DIVIDE*>(node));
				break;
			}
			case QAZ::ast::Type::LEFT_PARENTHESIS:
			{
				Visit(static_cast<const QAZ::ast::node::LEFT_PARENTHESIS*>(node));
				break;
			}
			case QAZ::ast::Type::RIGHT_PARENTHESIS:
			{
				Visit(static_cast<const QAZ::ast::node::RIGHT_PARENTHESIS*>(node));
				break;
			}
			case QAZ::ast::Type::LEFT_BRACKET:
			{
				Visit(static_cast<const QAZ::ast::node::LEFT_BRACKET*>(node));
				break;
			}
			case QAZ::ast::Type::RIGHT_BRACKET:
			{
				Visit(static_cast<const QAZ::ast::node::RIGHT_BRACKET*>(node));
				break;
			}
			case QAZ::ast::Type::LEFT_SQUARE_BRACKET:
			{
				Visit(static_cast<const QAZ::ast::node::LEFT_SQUARE_BRACKET*>(node));
				break;
			}
			case QAZ::ast::Type::RIGHT_SQUARE_BRACKET:
			{
				Visit(static_cast<const QAZ::ast::node::RIGHT_SQUARE_BRACKET*>(node));
				break;
			}
			case QAZ::ast::Type::COMMA:
			{
				Visit(static_cast<const QAZ::ast::node::COMMA*>(node));
				break;
			}
			case QAZ::ast::Type::SEMICOLON:
			{
				Visit(static_cast<const QAZ::ast::node::SEMICOLON*>(node));
				break;
			}
			case QAZ::ast::Type::INTEGER_TYPE:
			{
				Visit(static_cast<const QAZ::ast::node::INTEGER_TYPE*>(node));
				break;
			}
			case QAZ::ast::Type::STRING_TYPE:
			{
				Visit(static_cast<const QAZ::ast::node::STRING_TYPE*>(node));
				break;
			}
			case QAZ::ast::Type::RETURN:
			{
				Visit(static_cast<const QAZ::ast::node::RETURN*>(node));
				break;
			}
			case QAZ::ast::Type::FUNCTION:
			{
				Visit(static_cast<const QAZ::ast::node::FUNCTION*>(node));
				break;
			}
			case QAZ::ast::Type::VARNAME:
			{
				Visit(static_cast<const QAZ::ast::node::VARNAME*>(node));
				break;
			}
			case QAZ::ast::Type::DECIMAL:
			{
				Visit(static_cast<const QAZ::ast::node::DECIMAL*>(node));
				break;
			}
			case QAZ::ast::Type::NUMBER:
			{
				Visit(static_cast<const QAZ::ast::node::NUMBER*>(node));
				break;
			}
			case QAZ::ast::Type::SPACES:
			{
				Visit(static_cast<const QAZ::ast::node::SPACES*>(node));
				break;
			}
			case QAZ::ast::Type::ESCAPE_CHARS:
			{
				Visit(static_cast<const QAZ::ast::node::ESCAPE_CHARS*>(node));
				break;
			}

			case QAZ::ast::Type::program:
			{
				Visit(static_cast<const QAZ::ast::node::program*>(node));
				break;
			}
			case QAZ::ast::Type::stmts:
			{
				Visit(static_cast<const QAZ::ast::node::stmts*>(node));
				break;
			}
			case QAZ::ast::Type::stmt:
			{
				Visit(static_cast<const QAZ::ast::node::stmt*>(node));
				break;
			}
			case QAZ::ast::Type::declaration:
			{
				Visit(static_cast<const QAZ::ast::node::declaration*>(node));
				break;
			}
			case QAZ::ast::Type::global_call:
			{
				Visit(static_cast<const QAZ::ast::node::global_call*>(node));
				break;
			}
			case QAZ::ast::Type::call:
			{
				Visit(static_cast<const QAZ::ast::node::call*>(node));
				break;
			}
			case QAZ::ast::Type::function_call:
			{
				Visit(static_cast<const QAZ::ast::node::function_call*>(node));
				break;
			}
			case QAZ::ast::Type::variable_call:
			{
				Visit(static_cast<const QAZ::ast::node::variable_call*>(node));
				break;
			}
			case QAZ::ast::Type::assignment:
			{
				Visit(static_cast<const QAZ::ast::node::assignment*>(node));
				break;
			}
			case QAZ::ast::Type::expression:
			{
				Visit(static_cast<const QAZ::ast::node::expression*>(node));
				break;
			}
			case QAZ::ast::Type::variable_declaration:
			{
				Visit(static_cast<const QAZ::ast::node::variable_declaration*>(node));
				break;
			}
			case QAZ::ast::Type::function_declaration:
			{
				Visit(static_cast<const QAZ::ast::node::function_declaration*>(node));
				break;
			}
			case QAZ::ast::Type::variable_assignment:
			{
				Visit(static_cast<const QAZ::ast::node::variable_assignment*>(node));
				break;
			}
			case QAZ::ast::Type::return_assignment:
			{
				Visit(static_cast<const QAZ::ast::node::return_assignment*>(node));
				break;
			}
			case QAZ::ast::Type::function_parameters_at_least_one:
			{
				Visit(static_cast<const QAZ::ast::node::function_parameters_at_least_one*>(node));
				break;
			}
			case QAZ::ast::Type::function_parameters:
			{
				Visit(static_cast<const QAZ::ast::node::function_parameters*>(node));
				break;
			}
			case QAZ::ast::Type::function_argument_at_least_one:
			{
				Visit(static_cast<const QAZ::ast::node::function_argument_at_least_one*>(node));
				break;
			}
			case QAZ::ast::Type::function_arguments:
			{
				Visit(static_cast<const QAZ::ast::node::function_arguments*>(node));
				break;
			}
			case QAZ::ast::Type::function_block:
			{
				Visit(static_cast<const QAZ::ast::node::function_block*>(node));
				break;
			}
			case QAZ::ast::Type::function_parameter:
			{
				Visit(static_cast<const QAZ::ast::node::function_parameter*>(node));
				break;
			}
			case QAZ::ast::Type::function_argument:
			{
				Visit(static_cast<const QAZ::ast::node::function_argument*>(node));
				break;
			}
			case QAZ::ast::Type::function_name:
			{
				Visit(static_cast<const QAZ::ast::node::function_name*>(node));
				break;
			}
			case QAZ::ast::Type::return_type:
			{
				Visit(static_cast<const QAZ::ast::node::return_type*>(node));
				break;
			}
			case QAZ::ast::Type::variable:
			{
				Visit(static_cast<const QAZ::ast::node::variable*>(node));
				break;
			}
			case QAZ::ast::Type::type:
			{
				Visit(static_cast<const QAZ::ast::node::type*>(node));
				break;
			}
			case QAZ::ast::Type::value:
			{
				Visit(static_cast<const QAZ::ast::node::value*>(node));
				break;
			}
			}
		}
		virtual void Visit(const QAZ::ast::node::EQUAL_EQUAL* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::EQUAL* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::PLUS* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::MINUS* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::MULTIPLY* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::DIVIDE* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::LEFT_PARENTHESIS* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::RIGHT_PARENTHESIS* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::LEFT_BRACKET* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::RIGHT_BRACKET* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::LEFT_SQUARE_BRACKET* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::RIGHT_SQUARE_BRACKET* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::COMMA* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::SEMICOLON* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::INTEGER_TYPE* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::STRING_TYPE* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::RETURN* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::FUNCTION* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::VARNAME* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::DECIMAL* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::NUMBER* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::SPACES* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::ESCAPE_CHARS* node)
		{
		}

		virtual void Visit(const QAZ::ast::node::program* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::stmts* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::stmt* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::declaration* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::global_call* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::call* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::function_call* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::variable_call* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::assignment* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::expression* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::variable_declaration* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::function_declaration* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::variable_assignment* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::return_assignment* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::function_parameters_at_least_one* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::function_parameters* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::function_argument_at_least_one* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::function_arguments* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::function_block* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::function_parameter* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::function_argument* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::function_name* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::return_type* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::variable* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::type* node)
		{
		}
		virtual void Visit(const QAZ::ast::node::value* node)
		{
		}
	};

}}}

#endif // QAZ_AST_VISITOR_DEAMER_VISITOR_H
