#ifndef QAZ_AST_NODE_QAZ_H
#define QAZ_AST_NODE_QAZ_H

#include <Deamer/External/Cpp/Ast/TemplateNodeBase.h>

namespace QAZ { namespace ast { namespace node {

	template<typename Derived>
	class QAZ : public ::deamer::external::cpp::ast::TemplateNodeBase<QAZ<Derived>, Derived>
	{
	private:
		
	public:
		QAZ() = default;
		
		QAZ(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_ = {}, std::vector<size_t> baseValues_ = {})
		: deamer::external::cpp::ast::TemplateNodeBase<QAZ<Derived>, Derived>(information_, nodes_, baseValues_)
		{
		}
	};

}}}

#endif // QAZ_AST_NODE_QAZ_H
