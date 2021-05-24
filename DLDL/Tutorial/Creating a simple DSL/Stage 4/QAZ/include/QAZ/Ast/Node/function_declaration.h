#ifndef QAZ_AST_NODE_function_declaration_H
#define QAZ_AST_NODE_function_declaration_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class function_declaration : public QAZ<function_declaration>
	{
	private:
	public:
		function_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<function_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_function_declaration_H
