#include "QAZ/CompilerGenerator.h"

#include "Deamer/File/Generate/Compiler.h"
int main(int argc, char* argv[])
{
		// Generate: QAZ
	::QAZ::CompilerGenerator QAZ_compiler;
	::deamer::file::generate::Compiler QAZ_WriteToDisk(QAZ_compiler.Generate());
	QAZ_WriteToDisk.Generate();

	return 0;
}
