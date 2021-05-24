#ifndef QAZ_AST_NODE_DECIMAL_H
#define QAZ_AST_NODE_DECIMAL_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class DECIMAL : public QAZ<DECIMAL>
	{
	private:
	public:
		DECIMAL(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<DECIMAL>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_DECIMAL_H
