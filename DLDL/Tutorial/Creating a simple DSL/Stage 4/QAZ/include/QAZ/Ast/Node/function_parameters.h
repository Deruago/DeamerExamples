#ifndef QAZ_AST_NODE_function_parameters_H
#define QAZ_AST_NODE_function_parameters_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class function_parameters : public QAZ<function_parameters>
	{
	private:
	public:
		function_parameters(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<function_parameters>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_function_parameters_H
