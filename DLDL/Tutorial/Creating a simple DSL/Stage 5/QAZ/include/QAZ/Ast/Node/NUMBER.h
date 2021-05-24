#ifndef QAZ_AST_NODE_NUMBER_H
#define QAZ_AST_NODE_NUMBER_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class NUMBER : public QAZ<NUMBER>
	{
	private:
	public:
		NUMBER(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<NUMBER>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_NUMBER_H
