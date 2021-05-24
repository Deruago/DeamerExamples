#ifndef QAZ_AST_NODE_variable_call_H
#define QAZ_AST_NODE_variable_call_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class variable_call : public QAZ<variable_call>
	{
	private:
	public:
		variable_call(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<variable_call>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_variable_call_H
