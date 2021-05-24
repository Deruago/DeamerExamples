#ifndef QAZ_AST_NODE_MULTIPLY_H
#define QAZ_AST_NODE_MULTIPLY_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class MULTIPLY : public QAZ<MULTIPLY>
	{
	private:
	public:
		MULTIPLY(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<MULTIPLY>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_MULTIPLY_H
