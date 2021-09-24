#include "String.h"

String::String()
{
	Str = nullptr;
	len = 0;
}

String::String(const char* str)
{
	len = strlen(str);
	Str = new char[len];
	strcpy(Str, str);
}

//String::~String()
//{
//	if (Str != nullptr) 
//	{
//		delete[] Str;
//		Str = nullptr;
//	}
//}


