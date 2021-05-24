#ifndef QAZ_AST_NODE_RIGHT_PARENTHESIS_H
#define QAZ_AST_NODE_RIGHT_PARENTHESIS_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class RIGHT_PARENTHESIS : public QAZ<RIGHT_PARENTHESIS>
	{
	private:
	public:
		RIGHT_PARENTHESIS(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<RIGHT_PARENTHESIS>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_RIGHT_PARENTHESIS_H
