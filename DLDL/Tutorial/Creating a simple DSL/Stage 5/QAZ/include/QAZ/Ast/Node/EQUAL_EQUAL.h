#ifndef QAZ_AST_NODE_EQUAL_EQUAL_H
#define QAZ_AST_NODE_EQUAL_EQUAL_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class EQUAL_EQUAL : public QAZ<EQUAL_EQUAL>
	{
	private:
	public:
		EQUAL_EQUAL(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<EQUAL_EQUAL>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_EQUAL_EQUAL_H
