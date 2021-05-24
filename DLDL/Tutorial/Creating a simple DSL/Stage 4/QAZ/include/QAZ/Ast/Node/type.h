#ifndef QAZ_AST_NODE_type_H
#define QAZ_AST_NODE_type_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class type : public QAZ<type>
	{
	private:
	public:
		type(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<type>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_type_H
