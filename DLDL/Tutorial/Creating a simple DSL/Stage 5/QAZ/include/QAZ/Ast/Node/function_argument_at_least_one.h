#ifndef QAZ_AST_NODE_function_argument_at_least_one_H
#define QAZ_AST_NODE_function_argument_at_least_one_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class function_argument_at_least_one : public QAZ<function_argument_at_least_one>
	{
	private:
	public:
		function_argument_at_least_one(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<function_argument_at_least_one>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_function_argument_at_least_one_H
