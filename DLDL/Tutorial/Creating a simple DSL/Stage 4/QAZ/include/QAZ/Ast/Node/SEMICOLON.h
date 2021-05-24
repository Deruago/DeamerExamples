#ifndef QAZ_AST_NODE_SEMICOLON_H
#define QAZ_AST_NODE_SEMICOLON_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node {

	class SEMICOLON : public QAZ<SEMICOLON>
	{
	private:
	public:
		SEMICOLON(deamer::external::cpp::ast::NodeInformation information_)
		: QAZ<SEMICOLON>(information_, {}, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_SEMICOLON_H
