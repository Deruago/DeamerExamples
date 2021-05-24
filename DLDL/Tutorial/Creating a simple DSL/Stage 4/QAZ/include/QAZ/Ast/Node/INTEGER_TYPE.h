#ifndef QAZ_AST_NODE_INTEGER_TYPE_H
#define QAZ_AST_NODE_INTEGER_TYPE_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class INTEGER_TYPE : public QAZ<INTEGER_TYPE>
	{
	private:
	public:
		INTEGER_TYPE(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<INTEGER_TYPE>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_INTEGER_TYPE_H
