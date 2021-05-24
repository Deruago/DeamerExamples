#ifndef QAZ_AST_NODE_return_assignment_H
#define QAZ_AST_NODE_return_assignment_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class return_assignment : public QAZ<return_assignment>
	{
	private:
	public:
		return_assignment(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<return_assignment>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_return_assignment_H
