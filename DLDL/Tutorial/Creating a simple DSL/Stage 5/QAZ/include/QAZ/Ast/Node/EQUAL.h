#ifndef QAZ_AST_NODE_EQUAL_H
#define QAZ_AST_NODE_EQUAL_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class EQUAL : public QAZ<EQUAL>
	{
	private:
	public:
		EQUAL(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<EQUAL>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_EQUAL_H
