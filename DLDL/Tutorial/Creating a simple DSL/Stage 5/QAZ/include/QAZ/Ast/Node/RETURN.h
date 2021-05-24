#ifndef QAZ_AST_NODE_RETURN_H
#define QAZ_AST_NODE_RETURN_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class RETURN : public QAZ<RETURN>
	{
	private:
	public:
		RETURN(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<RETURN>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_RETURN_H
