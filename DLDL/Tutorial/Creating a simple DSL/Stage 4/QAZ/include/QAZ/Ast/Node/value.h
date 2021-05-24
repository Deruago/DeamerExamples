#ifndef QAZ_AST_NODE_value_H
#define QAZ_AST_NODE_value_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class value : public QAZ<value>
	{
	private:
	public:
		value(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<value>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_value_H
