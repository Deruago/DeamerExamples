#ifndef QAZ_AST_NODE_variable_declaration_H
#define QAZ_AST_NODE_variable_declaration_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class variable_declaration : public QAZ<variable_declaration>
	{
	private:
	public:
		variable_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<variable_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_variable_declaration_H
