#ifndef QAZ_AST_NODE_function_name_H
#define QAZ_AST_NODE_function_name_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class function_name : public QAZ<function_name>
	{
	private:
	public:
		function_name(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<function_name>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_function_name_H
