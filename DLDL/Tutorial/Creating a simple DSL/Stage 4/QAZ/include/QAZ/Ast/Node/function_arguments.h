#ifndef QAZ_AST_NODE_function_arguments_H
#define QAZ_AST_NODE_function_arguments_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class function_arguments : public QAZ<function_arguments>
	{
	private:
	public:
		function_arguments(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<function_arguments>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_function_arguments_H
