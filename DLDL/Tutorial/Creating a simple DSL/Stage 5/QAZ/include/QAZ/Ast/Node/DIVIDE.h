#ifndef QAZ_AST_NODE_DIVIDE_H
#define QAZ_AST_NODE_DIVIDE_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class DIVIDE : public QAZ<DIVIDE>
	{
	private:
	public:
		DIVIDE(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<DIVIDE>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_DIVIDE_H
