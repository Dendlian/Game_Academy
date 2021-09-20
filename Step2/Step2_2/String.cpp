#include "String.h"

String::String()
{
	Str = nullptr;
	size = 0;
	len = 0;
}

String::String(const char* str)
{
	size = sizeof(str);
	len = strlen(str);
	Str = new char[ +1];
	strcpy(Str, str);
}

//String::~String()
//{
//	delete[] Str;
//	Str = nullptr;
//}


