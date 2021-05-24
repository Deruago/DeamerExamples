#ifndef QAZ_AST_NODE_variable_H
#define QAZ_AST_NODE_variable_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class variable : public QAZ<variable>
	{
	private:
	public:
		variable(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<variable>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_variable_H
