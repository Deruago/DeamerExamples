#ifndef QAZ_AST_NODE_FUNCTION_H
#define QAZ_AST_NODE_FUNCTION_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class FUNCTION : public QAZ<FUNCTION>
	{
	private:
	public:
		FUNCTION(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<FUNCTION>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_FUNCTION_H
