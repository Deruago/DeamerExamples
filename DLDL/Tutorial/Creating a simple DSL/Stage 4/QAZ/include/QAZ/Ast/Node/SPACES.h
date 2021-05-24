#ifndef QAZ_AST_NODE_SPACES_H
#define QAZ_AST_NODE_SPACES_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class SPACES : public QAZ<SPACES>
	{
	private:
	public:
		SPACES(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<SPACES>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_SPACES_H
