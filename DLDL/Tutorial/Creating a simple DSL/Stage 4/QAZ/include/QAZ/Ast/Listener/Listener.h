#ifndef QAZ_AST_LISTENER_DEAMER_LISTENER_H
#define QAZ_AST_LISTENER_DEAMER_LISTENER_H

#include <Deamer/External/Cpp/Ast/Listener.h>
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

namespace QAZ { namespace ast { namespace listener { 

	class Listener : public ::deamer::external::cpp::ast::Listener
	{
	private:
	public:
		Listener() = default;
		~Listener() override = default;
	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node) const override
		{
			const auto enumeratedValue = static_cast<QAZ::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			case QAZ::ast::Type::EQUAL_EQUAL:
			{
				Listen(static_cast<const QAZ::ast::node::EQUAL_EQUAL*>(node));
				break;
			}
			case QAZ::ast::Type::EQUAL:
			{
				Listen(static_cast<const QAZ::ast::node::EQUAL*>(node));
				break;
			}
			case QAZ::ast::Type::PLUS:
			{
				Listen(static_cast<const QAZ::ast::node::PLUS*>(node));
				break;
			}
			case QAZ::ast::Type::MINUS:
			{
				Listen(static_cast<const QAZ::ast::node::MINUS*>(node));
				break;
			}
			case QAZ::ast::Type::MULTIPLY:
			{
				Listen(static_cast<const QAZ::ast::node::MULTIPLY*>(node));
				break;
			}
			case QAZ::ast::Type::DIVIDE:
			{
				Listen(static_cast<const QAZ::ast::node::DIVIDE*>(node));
				break;
			}
			case QAZ::ast::Type::LEFT_PARENTHESIS:
			{
				Listen(static_cast<const QAZ::ast::node::LEFT_PARENTHESIS*>(node));
				break;
			}
			case QAZ::ast::Type::RIGHT_PARENTHESIS:
			{
				Listen(static_cast<const QAZ::ast::node::RIGHT_PARENTHESIS*>(node));
				break;
			}
			case QAZ::ast::Type::LEFT_BRACKET:
			{
				Listen(static_cast<const QAZ::ast::node::LEFT_BRACKET*>(node));
				break;
			}
			case QAZ::ast::Type::RIGHT_BRACKET:
			{
				Listen(static_cast<const QAZ::ast::node::RIGHT_BRACKET*>(node));
				break;
			}
			case QAZ::ast::Type::LEFT_SQUARE_BRACKET:
			{
				Listen(static_cast<const QAZ::ast::node::LEFT_SQUARE_BRACKET*>(node));
				break;
			}
			case QAZ::ast::Type::RIGHT_SQUARE_BRACKET:
			{
				Listen(static_cast<const QAZ::ast::node::RIGHT_SQUARE_BRACKET*>(node));
				break;
			}
			case QAZ::ast::Type::COMMA:
			{
				Listen(static_cast<const QAZ::ast::node::COMMA*>(node));
				break;
			}
			case QAZ::ast::Type::SEMICOLON:
			{
				Listen(static_cast<const QAZ::ast::node::SEMICOLON*>(node));
				break;
			}
			case QAZ::ast::Type::INTEGER_TYPE:
			{
				Listen(static_cast<const QAZ::ast::node::INTEGER_TYPE*>(node));
				break;
			}
			case QAZ::ast::Type::STRING_TYPE:
			{
				Listen(static_cast<const QAZ::ast::node::STRING_TYPE*>(node));
				break;
			}
			case QAZ::ast::Type::RETURN:
			{
				Listen(static_cast<const QAZ::ast::node::RETURN*>(node));
				break;
			}
			case QAZ::ast::Type::VARNAME:
			{
				Listen(static_cast<const QAZ::ast::node::VARNAME*>(node));
				break;
			}
			case QAZ::ast::Type::DECIMAL:
			{
				Listen(static_cast<const QAZ::ast::node::DECIMAL*>(node));
				break;
			}
			case QAZ::ast::Type::NUMBER:
			{
				Listen(static_cast<const QAZ::ast::node::NUMBER*>(node));
				break;
			}
			case QAZ::ast::Type::SPACES:
			{
				Listen(static_cast<const QAZ::ast::node::SPACES*>(node));
				break;
			}
			case QAZ::ast::Type::ESCAPE_CHARS:
			{
				Listen(static_cast<const QAZ::ast::node::ESCAPE_CHARS*>(node));
				break;
			}

			case QAZ::ast::Type::program:
			{
				Listen(static_cast<const QAZ::ast::node::program*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::stmts:
			{
				Listen(static_cast<const QAZ::ast::node::stmts*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::stmt:
			{
				Listen(static_cast<const QAZ::ast::node::stmt*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::declaration:
			{
				Listen(static_cast<const QAZ::ast::node::declaration*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::global_call:
			{
				Listen(static_cast<const QAZ::ast::node::global_call*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::call:
			{
				Listen(static_cast<const QAZ::ast::node::call*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::function_call:
			{
				Listen(static_cast<const QAZ::ast::node::function_call*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::variable_call:
			{
				Listen(static_cast<const QAZ::ast::node::variable_call*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::assignment:
			{
				Listen(static_cast<const QAZ::ast::node::assignment*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::expression:
			{
				Listen(static_cast<const QAZ::ast::node::expression*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::variable_declaration:
			{
				Listen(static_cast<const QAZ::ast::node::variable_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::function_declaration:
			{
				Listen(static_cast<const QAZ::ast::node::function_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::variable_assignment:
			{
				Listen(static_cast<const QAZ::ast::node::variable_assignment*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::return_assignment:
			{
				Listen(static_cast<const QAZ::ast::node::return_assignment*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::function_parameters:
			{
				Listen(static_cast<const QAZ::ast::node::function_parameters*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::function_arguments:
			{
				Listen(static_cast<const QAZ::ast::node::function_arguments*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::function_block:
			{
				Listen(static_cast<const QAZ::ast::node::function_block*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::function_parameter:
			{
				Listen(static_cast<const QAZ::ast::node::function_parameter*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::function_argument:
			{
				Listen(static_cast<const QAZ::ast::node::function_argument*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::function_name:
			{
				Listen(static_cast<const QAZ::ast::node::function_name*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::return_type:
			{
				Listen(static_cast<const QAZ::ast::node::return_type*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::variable:
			{
				Listen(static_cast<const QAZ::ast::node::variable*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::type:
			{
				Listen(static_cast<const QAZ::ast::node::type*>(node));
				DefaultAction(node);
				break;
			}
			case QAZ::ast::Type::value:
			{
				Listen(static_cast<const QAZ::ast::node::value*>(node));
				DefaultAction(node);
				break;
			}
			}
		}
		virtual void Listen(const QAZ::ast::node::EQUAL_EQUAL* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::EQUAL* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::PLUS* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::MINUS* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::MULTIPLY* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::DIVIDE* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::LEFT_PARENTHESIS* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::RIGHT_PARENTHESIS* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::LEFT_BRACKET* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::RIGHT_BRACKET* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::LEFT_SQUARE_BRACKET* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::RIGHT_SQUARE_BRACKET* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::COMMA* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::SEMICOLON* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::INTEGER_TYPE* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::STRING_TYPE* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::RETURN* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::VARNAME* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::DECIMAL* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::NUMBER* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::SPACES* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::ESCAPE_CHARS* node) const
		{
		}

		virtual void Listen(const QAZ::ast::node::program* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::stmts* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::stmt* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::declaration* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::global_call* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::call* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::function_call* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::variable_call* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::assignment* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::expression* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::variable_declaration* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::function_declaration* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::variable_assignment* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::return_assignment* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::function_parameters* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::function_arguments* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::function_block* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::function_parameter* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::function_argument* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::function_name* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::return_type* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::variable* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::type* node) const
		{
		}
		virtual void Listen(const QAZ::ast::node::value* node) const
		{
		}
	private:
		void DefaultAction(const ::deamer::external::cpp::ast::Node* node) const
		{
			for(const auto* child : node->GetNodes())
			{
				Dispatch(child);
			}
		}
	};

}}}

#endif // QAZ_AST_LISTENER_DEAMER_LISTENER_H
