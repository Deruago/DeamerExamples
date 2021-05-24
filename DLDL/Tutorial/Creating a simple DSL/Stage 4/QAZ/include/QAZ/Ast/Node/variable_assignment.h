#ifndef QAZ_AST_NODE_variable_assignment_H
#define QAZ_AST_NODE_variable_assignment_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class variable_assignment : public QAZ<variable_assignment>
	{
	private:
	public:
		variable_assignment(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<variable_assignment>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_variable_assignment_H
