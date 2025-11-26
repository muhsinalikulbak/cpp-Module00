#ifndef REPLACE_H
#define REPLACE_H

#include <string>
#include <iostream>
#include <fstream>
#include <cstring>

class Replace
{
private:

	static void	wordReplace(std::ifstream& source, std::ofstream& out, const char* oldStr, const char* newStr);

public:

	Replace();
	~Replace();
	static void	fileReplacer(const char* file, const char* oldStr, const char* newStr);
};




#endif