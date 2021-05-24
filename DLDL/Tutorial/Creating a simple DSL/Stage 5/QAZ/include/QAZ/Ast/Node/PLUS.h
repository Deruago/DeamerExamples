#ifndef QAZ_AST_NODE_PLUS_H
#define QAZ_AST_NODE_PLUS_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class PLUS : public QAZ<PLUS>
	{
	private:
	public:
		PLUS(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<PLUS>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_PLUS_H
