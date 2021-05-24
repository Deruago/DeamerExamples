#ifndef QAZ_AST_NODE_stmt_H
#define QAZ_AST_NODE_stmt_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class stmt : public QAZ<stmt>
	{
	private:
	public:
		stmt(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<stmt>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_stmt_H
