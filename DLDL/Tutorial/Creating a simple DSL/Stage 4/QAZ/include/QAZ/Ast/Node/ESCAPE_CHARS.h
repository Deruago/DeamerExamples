#ifndef QAZ_AST_NODE_ESCAPE_CHARS_H
#define QAZ_AST_NODE_ESCAPE_CHARS_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class ESCAPE_CHARS : public QAZ<ESCAPE_CHARS>
	{
	private:
	public:
		ESCAPE_CHARS(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<ESCAPE_CHARS>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_ESCAPE_CHARS_H
