#ifndef QAZ_AST_NODE_MINUS_H
#define QAZ_AST_NODE_MINUS_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class MINUS : public QAZ<MINUS>
	{
	private:
	public:
		MINUS(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<MINUS>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_MINUS_H
