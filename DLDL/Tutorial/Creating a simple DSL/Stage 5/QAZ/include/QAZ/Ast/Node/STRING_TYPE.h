#ifndef QAZ_AST_NODE_STRING_TYPE_H
#define QAZ_AST_NODE_STRING_TYPE_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class STRING_TYPE : public QAZ<STRING_TYPE>
	{
	private:
	public:
		STRING_TYPE(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<STRING_TYPE>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_STRING_TYPE_H
