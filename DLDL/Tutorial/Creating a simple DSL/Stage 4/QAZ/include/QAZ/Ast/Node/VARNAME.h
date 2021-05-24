#ifndef QAZ_AST_NODE_VARNAME_H
#define QAZ_AST_NODE_VARNAME_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class VARNAME : public QAZ<VARNAME>
	{
	private:
	public:
		VARNAME(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<VARNAME>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_VARNAME_H
