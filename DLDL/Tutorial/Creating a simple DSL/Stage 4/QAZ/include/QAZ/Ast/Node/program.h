#ifndef QAZ_AST_NODE_program_H
#define QAZ_AST_NODE_program_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class program : public QAZ<program>
	{
	private:
	public:
		program(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<program>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_program_H
