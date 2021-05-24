#ifndef QAZ_AST_NODE_function_parameter_H
#define QAZ_AST_NODE_function_parameter_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class function_parameter : public QAZ<function_parameter>
	{
	private:
	public:
		function_parameter(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<function_parameter>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_function_parameter_H
