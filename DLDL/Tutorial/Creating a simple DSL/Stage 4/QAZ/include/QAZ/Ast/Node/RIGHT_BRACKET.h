#ifndef QAZ_AST_NODE_RIGHT_BRACKET_H
#define QAZ_AST_NODE_RIGHT_BRACKET_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class RIGHT_BRACKET : public QAZ<RIGHT_BRACKET>
	{
	private:
	public:
		RIGHT_BRACKET(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<RIGHT_BRACKET>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_RIGHT_BRACKET_H
