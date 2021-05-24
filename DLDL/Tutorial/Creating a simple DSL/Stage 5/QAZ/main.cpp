#include "QAZ/Ast/Listener/User/CountFunction.h"
#include "QAZ/Bison/Parser.h"

#include <fstream>
#include <iostream>
#include <sstream>


std::string ReadInFile(const std::string& file)
{
	const std::ifstream inputFile(file);

	std::ostringstream sstr;
	sstr << inputFile.rdbuf();

	std::string input = sstr.str();

	return input;
}

int main(int argc, char* argv[])
{
	if (argc <= 1)
	{
		std::cout << "Not enough parameters!" << std::endl;
		return -1;
	}
	
	const std::string file = argv[1];
	const std::string text = ReadInFile("./" + file);

	const QAZ::parser::Parser parser;
	auto* AST = parser.Parse(text);

	if (AST == nullptr || AST->GetStartNode() == nullptr)
	{
		std::cout << "Given incorrect text!" << std::endl;
		return -1;
	}

	QAZ::ast::listener::user::CountFunction countFunction;
	countFunction.Dispatch(AST->GetStartNode());

	delete AST;
}