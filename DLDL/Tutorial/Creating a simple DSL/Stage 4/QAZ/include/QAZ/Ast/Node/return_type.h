#ifndef QAZ_AST_NODE_return_type_H
#define QAZ_AST_NODE_return_type_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class return_type : public QAZ<return_type>
	{
	private:
	public:
		return_type(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<return_type>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_return_type_H
