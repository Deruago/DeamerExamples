#ifndef QAZ_AST_NODE_global_call_H
#define QAZ_AST_NODE_global_call_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class global_call : public QAZ<global_call>
	{
	private:
	public:
		global_call(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<global_call>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_global_call_H
