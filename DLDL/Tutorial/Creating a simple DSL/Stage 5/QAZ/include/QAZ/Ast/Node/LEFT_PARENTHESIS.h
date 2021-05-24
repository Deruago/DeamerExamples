#ifndef QAZ_AST_NODE_LEFT_PARENTHESIS_H
#define QAZ_AST_NODE_LEFT_PARENTHESIS_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class LEFT_PARENTHESIS : public QAZ<LEFT_PARENTHESIS>
	{
	private:
	public:
		LEFT_PARENTHESIS(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<LEFT_PARENTHESIS>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_LEFT_PARENTHESIS_H
