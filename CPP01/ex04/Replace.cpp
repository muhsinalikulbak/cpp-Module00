#include "Replace.hpp"

void	Replace::wordReplace(std::ifstream& source, std::ofstream& out, const char* oldStr, const char* newStr)
{
	std::string line;
	int			start;
	size_t		pos;

	getline(source, line);
	while (!source.eof())
	{
		start = 0;
		pos = line.find(oldStr, start);
		if (pos == std::string::npos)
			out << line;
		else
		{
			while (pos != std::string::npos)
			{
				out << line.substr(start, pos - start) << newStr;
				start = pos + std::strlen(oldStr);
				pos = line.find(oldStr, start); 
			}
			if (start != line.size())
				out << line.substr(start, line.size() - start);
		}
		getline(source, line);
		if (!source.eof())
			out << '\n';
	}
}

void	Replace::fileReplacer(const char* file, const char* oldStr, const char* newStr)
{
	const char* chrFile;
	std::string strFile(file);

	strFile += ".replace";
	chrFile = strFile.c_str();

	std::ifstream    sourceFile(file);
	std::ofstream    newFile(chrFile, std::ios::out | std::ios::trunc);
	
	Replace::wordReplace(sourceFile, newFile, oldStr, newStr);
}
