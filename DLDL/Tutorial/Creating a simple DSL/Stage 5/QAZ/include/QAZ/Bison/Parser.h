#ifndef QAZ_BISON_PARSER_H
#define QAZ_BISON_PARSER_H

#include <Deamer/External/Cpp/Parser/Interface/Parser.h>

namespace QAZ{ namespace parser {

	 class Parser : public deamer::external::cpp::parser::Parser
	{
	public:
		Parser() = default;
		~Parser() override = default;

	public:
		deamer::external::cpp::ast::Tree* Parse(const std::string& text) const override;
	};

}}

#endif // QAZ_BISON_PARSER_H
