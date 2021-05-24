#ifndef QAZ_AST_NODE_assignment_H
#define QAZ_AST_NODE_assignment_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class assignment : public QAZ<assignment>
	{
	private:
	public:
		assignment(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<assignment>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_assignment_H
