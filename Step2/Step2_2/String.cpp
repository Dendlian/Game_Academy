#include "String.h"

String::String()
{
	Str = nullptr;
	len = 0;
}

String::String(const char* str)
{
	size = sizeof(str);
	len = strlen(str);
	strcpy(Str, str);
}

int String::length()
{
	len = strlen(Str);
	return len;
}

int String::capactity()
{
	size = sizeof(Str);
	return size;
}
