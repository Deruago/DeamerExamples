#ifndef QAZ_AST_LISTENER_USER_COUNTFUNCTION_H
#define QAZ_AST_LISTENER_USER_COUNTFUNCTION_H

#include "QAZ/Ast/Listener/EnterExitListener.h"
#include <iostream>
#include <vector>

namespace QAZ::ast::listener::user
{
	class CountFunction : public EnterExitListener
	{
	private:
		std::vector<std::string> current_function_path;
	public:
		CountFunction() = default;
		~CountFunction() override = default;
	public:
		void ListenEntry(const QAZ::ast::node::function_declaration* node) override
		{
			const std::string function = node->GetObject(Type::function_name)->GetChildValue();
			
			current_function_path.push_back(function);
			
		}
		
		void ListenExit(const QAZ::ast::node::function_declaration* node) override
		{
			std::cout << "Found function declaration! Function: ";

			for (int i = 0; i < current_function_path.size(); i++)
			{
				std::cout << current_function_path[i];
				if (i < current_function_path.size() - 1)
				{
					std::cout << "->";
				}
			}

			std::cout << '\n';
			current_function_path.pop_back();
		}
	};
}

#endif // QAZ_AST_LISTENER_USER_COUNTFUNCTION_H