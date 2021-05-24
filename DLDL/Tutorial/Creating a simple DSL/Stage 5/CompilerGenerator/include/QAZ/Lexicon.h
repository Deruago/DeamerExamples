#ifndef QAZ_LEXICON_H
#define QAZ_LEXICON_H
#include "Deamer/Language/Generator/Definition/Property/User/Main/Lexicon.h"
namespace QAZ
{
	class Language;
	class Lexicon : public ::deamer::language::generator::definition::property::user::Lexicon<
								::QAZ::Language>
	{
	public:
		// Terminal declarations
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> EQUAL_EQUAL;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> EQUAL;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> PLUS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> MINUS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> MULTIPLY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> DIVIDE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> LEFT_PARENTHESIS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> RIGHT_PARENTHESIS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> LEFT_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> RIGHT_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> LEFT_SQUARE_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> RIGHT_SQUARE_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> COMMA;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> SEMICOLON;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> INTEGER_TYPE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> STRING_TYPE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> RETURN;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> FUNCTION;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> DECIMAL;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> NUMBER;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> SPACES;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> ESCAPE_CHARS;

	
	public:
		Lexicon(QAZ::Language* language)
			:	::deamer::language::generator::definition::property::user::Lexicon<
					::QAZ::Language>(language)
		{
		}
		void GenerateObjects() override
		{
			// Terminals
			EQUAL_EQUAL.Set(deamer::language::type::definition::object::main::Terminal("EQUAL_EQUAL", "[=][=]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
EQUAL.Set(deamer::language::type::definition::object::main::Terminal("EQUAL", "[=]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
PLUS.Set(deamer::language::type::definition::object::main::Terminal("PLUS", "[+]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
MINUS.Set(deamer::language::type::definition::object::main::Terminal("MINUS", "[-]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
MULTIPLY.Set(deamer::language::type::definition::object::main::Terminal("MULTIPLY", "[*]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
DIVIDE.Set(deamer::language::type::definition::object::main::Terminal("DIVIDE", "[/]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
LEFT_PARENTHESIS.Set(deamer::language::type::definition::object::main::Terminal("LEFT_PARENTHESIS", "[(]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
RIGHT_PARENTHESIS.Set(deamer::language::type::definition::object::main::Terminal("RIGHT_PARENTHESIS", "[)]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
LEFT_BRACKET.Set(deamer::language::type::definition::object::main::Terminal("LEFT_BRACKET", "[{]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
RIGHT_BRACKET.Set(deamer::language::type::definition::object::main::Terminal("RIGHT_BRACKET", "[}]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
LEFT_SQUARE_BRACKET.Set(deamer::language::type::definition::object::main::Terminal("LEFT_SQUARE_BRACKET", "[\\[]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
RIGHT_SQUARE_BRACKET.Set(deamer::language::type::definition::object::main::Terminal("RIGHT_SQUARE_BRACKET", "[\\]]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
COMMA.Set(deamer::language::type::definition::object::main::Terminal("COMMA", "[,]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
SEMICOLON.Set(deamer::language::type::definition::object::main::Terminal("SEMICOLON", "[;]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
INTEGER_TYPE.Set(deamer::language::type::definition::object::main::Terminal("INTEGER_TYPE", "Integer", ::deamer::language::type::definition::object::main::SpecialType::Standard));
STRING_TYPE.Set(deamer::language::type::definition::object::main::Terminal("STRING_TYPE", "String", ::deamer::language::type::definition::object::main::SpecialType::Standard));
RETURN.Set(deamer::language::type::definition::object::main::Terminal("RETURN", "Return", ::deamer::language::type::definition::object::main::SpecialType::Standard));
FUNCTION.Set(deamer::language::type::definition::object::main::Terminal("FUNCTION", "Define", ::deamer::language::type::definition::object::main::SpecialType::Standard));
VARNAME.Set(deamer::language::type::definition::object::main::Terminal("VARNAME", "[a-zA-Z_]+[a-zA-Z_0-9]*", ::deamer::language::type::definition::object::main::SpecialType::Standard));
DECIMAL.Set(deamer::language::type::definition::object::main::Terminal("DECIMAL", "[0-9]+[\\.][0-9]+", ::deamer::language::type::definition::object::main::SpecialType::Standard));
NUMBER.Set(deamer::language::type::definition::object::main::Terminal("NUMBER", "[0-9]+", ::deamer::language::type::definition::object::main::SpecialType::Standard));
SPACES.Set(deamer::language::type::definition::object::main::Terminal("SPACES", "[ ]*", ::deamer::language::type::definition::object::main::SpecialType::Delete));
ESCAPE_CHARS.Set(deamer::language::type::definition::object::main::Terminal("ESCAPE_CHARS", "[\\n\\r\\t\\v\\b\\a]*", ::deamer::language::type::definition::object::main::SpecialType::Delete));

			// Add object calls
			// AddObject(...)
			AddObject(EQUAL_EQUAL);
AddObject(EQUAL);
AddObject(PLUS);
AddObject(MINUS);
AddObject(MULTIPLY);
AddObject(DIVIDE);
AddObject(LEFT_PARENTHESIS);
AddObject(RIGHT_PARENTHESIS);
AddObject(LEFT_BRACKET);
AddObject(RIGHT_BRACKET);
AddObject(LEFT_SQUARE_BRACKET);
AddObject(RIGHT_SQUARE_BRACKET);
AddObject(COMMA);
AddObject(SEMICOLON);
AddObject(INTEGER_TYPE);
AddObject(STRING_TYPE);
AddObject(RETURN);
AddObject(FUNCTION);
AddObject(VARNAME);
AddObject(DECIMAL);
AddObject(NUMBER);
AddObject(SPACES);
AddObject(ESCAPE_CHARS);

			// Place higher level operations here.
			// ReplaceObject(..., ...)
			// DeleteObject(..., ...)
			
		}
	};
}
#endif // QAZ_LEXICON_H
