#ifndef QAZ_AST_NODE_call_H
#define QAZ_AST_NODE_call_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class call : public QAZ<call>
	{
	private:
	public:
		call(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<call>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_call_H
