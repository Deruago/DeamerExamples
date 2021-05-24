#ifndef QAZ_AST_NODE_expression_H
#define QAZ_AST_NODE_expression_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class expression : public QAZ<expression>
	{
	private:
	public:
		expression(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<expression>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_expression_H
