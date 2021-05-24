#ifndef QAZ_AST_NODE_function_block_H
#define QAZ_AST_NODE_function_block_H

#include "QAZ/Ast/Node/QAZ.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace QAZ { namespace ast { namespace node { 

	class function_block : public QAZ<function_block>
	{
	private:
	public:
		function_block(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: QAZ<function_block>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_function_block_H
