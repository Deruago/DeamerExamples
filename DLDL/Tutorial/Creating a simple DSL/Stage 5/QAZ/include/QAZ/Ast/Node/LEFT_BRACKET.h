#ifndef QAZ_AST_NODE_LEFT_BRACKET_H
#define QAZ_AST_NODE_LEFT_BRACKET_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class LEFT_BRACKET : public QAZ<LEFT_BRACKET>
	{
	private:
	public:
		LEFT_BRACKET(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<LEFT_BRACKET>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_LEFT_BRACKET_H
