#ifndef QAZ_AST_NODE_declaration_H
#define QAZ_AST_NODE_declaration_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class declaration : public QAZ<declaration>
	{
	private:
	public:
		declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_declaration_H
