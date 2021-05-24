#ifndef QAZ_AST_NODE_COMMA_H
#define QAZ_AST_NODE_COMMA_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class COMMA : public QAZ<COMMA>
	{
	private:
	public:
		COMMA(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<COMMA>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_COMMA_H
