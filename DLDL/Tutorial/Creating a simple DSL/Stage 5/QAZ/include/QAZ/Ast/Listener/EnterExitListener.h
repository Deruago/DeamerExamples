#ifndef QAZ_AST_LISTENER_ENTEREXITLISTENER_H
#define QAZ_AST_LISTENER_ENTEREXITLISTENER_H

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


namespace QAZ { namespace ast { namespace listener { 

	class EnterExitListener : public ::deamer::external::cpp::ast::Listener
	{
	private:
	public:
		EnterExitListener() = default;
		~EnterExitListener() override = default;

	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node)  override
		{
			const auto enumeratedValue = static_cast<QAZ::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			// Terminal cases
			
			case QAZ::ast::Type::EQUAL_EQUAL:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::EQUAL_EQUAL*>(node));
				break;
			}

			case QAZ::ast::Type::EQUAL:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::EQUAL*>(node));
				break;
			}

			case QAZ::ast::Type::PLUS:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::PLUS*>(node));
				break;
			}

			case QAZ::ast::Type::MINUS:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::MINUS*>(node));
				break;
			}

			case QAZ::ast::Type::MULTIPLY:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::MULTIPLY*>(node));
				break;
			}

			case QAZ::ast::Type::DIVIDE:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::DIVIDE*>(node));
				break;
			}

			case QAZ::ast::Type::LEFT_PARENTHESIS:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::LEFT_PARENTHESIS*>(node));
				break;
			}

			case QAZ::ast::Type::RIGHT_PARENTHESIS:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::RIGHT_PARENTHESIS*>(node));
				break;
			}

			case QAZ::ast::Type::LEFT_BRACKET:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::LEFT_BRACKET*>(node));
				break;
			}

			case QAZ::ast::Type::RIGHT_BRACKET:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::RIGHT_BRACKET*>(node));
				break;
			}

			case QAZ::ast::Type::LEFT_SQUARE_BRACKET:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::LEFT_SQUARE_BRACKET*>(node));
				break;
			}

			case QAZ::ast::Type::RIGHT_SQUARE_BRACKET:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::RIGHT_SQUARE_BRACKET*>(node));
				break;
			}

			case QAZ::ast::Type::COMMA:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::COMMA*>(node));
				break;
			}

			case QAZ::ast::Type::SEMICOLON:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::SEMICOLON*>(node));
				break;
			}

			case QAZ::ast::Type::INTEGER_TYPE:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::INTEGER_TYPE*>(node));
				break;
			}

			case QAZ::ast::Type::STRING_TYPE:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::STRING_TYPE*>(node));
				break;
			}

			case QAZ::ast::Type::RETURN:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::RETURN*>(node));
				break;
			}

			case QAZ::ast::Type::FUNCTION:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::FUNCTION*>(node));
				break;
			}

			case QAZ::ast::Type::VARNAME:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::VARNAME*>(node));
				break;
			}

			case QAZ::ast::Type::DECIMAL:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::DECIMAL*>(node));
				break;
			}

			case QAZ::ast::Type::NUMBER:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::NUMBER*>(node));
				break;
			}

			case QAZ::ast::Type::SPACES:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::SPACES*>(node));
				break;
			}

			case QAZ::ast::Type::ESCAPE_CHARS:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::ESCAPE_CHARS*>(node));
				break;
			}


			// Nonterminal cases
			
			case QAZ::ast::Type::program:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::program*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::program*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::stmts:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::stmts*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::stmts*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::stmt:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::stmt*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::stmt*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::declaration*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::global_call:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::global_call*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::global_call*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::call:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::call*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::call*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::function_call:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::function_call*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::function_call*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::variable_call:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::variable_call*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::variable_call*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::assignment:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::assignment*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::assignment*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::expression:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::expression*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::expression*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::variable_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::variable_declaration*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::variable_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::function_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::function_declaration*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::function_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::variable_assignment:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::variable_assignment*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::variable_assignment*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::return_assignment:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::return_assignment*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::return_assignment*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::function_parameters_at_least_one:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::function_parameters_at_least_one*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::function_parameters_at_least_one*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::function_parameters:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::function_parameters*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::function_parameters*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::function_argument_at_least_one:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::function_argument_at_least_one*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::function_argument_at_least_one*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::function_arguments:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::function_arguments*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::function_arguments*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::function_block:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::function_block*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::function_block*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::function_parameter:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::function_parameter*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::function_parameter*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::function_argument:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::function_argument*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::function_argument*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::function_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::function_name*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::function_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::return_type:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::return_type*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::return_type*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::variable:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::variable*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::variable*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::type:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::type*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::type*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case QAZ::ast::Type::value:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const QAZ::ast::node::value*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const QAZ::ast::node::value*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			}
		}

		
		virtual void ListenEntry(const QAZ::ast::node::EQUAL_EQUAL* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::EQUAL* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::PLUS* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::MINUS* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::MULTIPLY* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::DIVIDE* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::LEFT_PARENTHESIS* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::RIGHT_PARENTHESIS* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::LEFT_BRACKET* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::RIGHT_BRACKET* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::LEFT_SQUARE_BRACKET* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::RIGHT_SQUARE_BRACKET* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::COMMA* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::SEMICOLON* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::INTEGER_TYPE* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::STRING_TYPE* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::RETURN* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::FUNCTION* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::VARNAME* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::DECIMAL* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::NUMBER* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::SPACES* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::ESCAPE_CHARS* node) 
		{
		}

		

		
		virtual void ListenEntry(const QAZ::ast::node::program* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::stmts* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::stmt* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::declaration* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::global_call* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::call* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::function_call* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::variable_call* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::assignment* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::expression* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::variable_declaration* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::function_declaration* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::variable_assignment* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::return_assignment* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::function_parameters_at_least_one* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::function_parameters* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::function_argument_at_least_one* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::function_arguments* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::function_block* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::function_parameter* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::function_argument* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::function_name* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::return_type* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::variable* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::type* node) 
		{
		}

		virtual void ListenEntry(const QAZ::ast::node::value* node) 
		{
		}

		
		virtual void ListenExit(const QAZ::ast::node::program* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::stmts* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::stmt* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::declaration* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::global_call* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::call* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::function_call* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::variable_call* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::assignment* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::expression* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::variable_declaration* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::function_declaration* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::variable_assignment* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::return_assignment* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::function_parameters_at_least_one* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::function_parameters* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::function_argument_at_least_one* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::function_arguments* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::function_block* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::function_parameter* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::function_argument* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::function_name* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::return_type* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::variable* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::type* node) 
		{
		}

		virtual void ListenExit(const QAZ::ast::node::value* node) 
		{
		}


		
		virtual void EnterTerminal(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
		
		virtual void ExitTerminal(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
		
		virtual void EnterNonTerminal(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
		
		virtual void ExitNonTerminal(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
		
		virtual void EnterAnything(const ::deamer::external::cpp::ast::Node* node) 
		{
		}

		virtual void ExitAnything(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
	
	private:
		void DefaultAction(const ::deamer::external::cpp::ast::Node* node) 
		{
			for(const auto* child : node->GetNodes())
			{
				Dispatch(child);
			}
		}
	};

}}}

#endif // QAZ_AST_LISTENER_ENTEREXITLISTENER_H