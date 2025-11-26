#ifndef REPLACE_H
#define REPLACE_H

#include <string>
#include <iostream>
#include <fstream>

class Replace
{
private:

public:
	Replace();
	~Replace();

	static void	fileReplacer(const char* file, const char* oldStr, const char* newStr);
};




#endif