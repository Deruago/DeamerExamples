#ifndef QAZ_AST_NODE_stmts_H
#define QAZ_AST_NODE_stmts_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class stmts : public QAZ<stmts>
	{
	private:
	public:
		stmts(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<stmts>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_stmts_H
