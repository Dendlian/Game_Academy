#pragma once
#include<string>
#include<iostream>
#pragma warning (disable:4996)
#define FORCEINLINE __forceinline

using namespace std;

class String
{
public:
	char *Str;		
	int len;		

	String();						
	String(const char* str);		
	// ~String();


	FORCEINLINE int GetLength()		
	{ return len; }

	FORCEINLINE int Capactity()	
	{ return sizeof(Str); }

#pragma region 연산자 오버로딩

	FORCEINLINE String operator=(const char* value) 
	{ 
		if (Str != nullptr) 
		{
			delete[] Str;
			Str = nullptr;
		}
		return String(value);	
	}

	FORCEINLINE String operator+(const String& value)
	{ return String(strcat(Str, value.Str)); }
	
	FORCEINLINE String operator+=(const String& value) 
	{
		strcat(Str, value.Str);		
		len = len + value.len;	
		return *this;				
	}

	FORCEINLINE int operator == (const String& value) 
	{ return strcmp(Str, value.Str); }

	friend ostream& operator<<(ostream& os, const String& value)
	{
		os << value.Str;	
		return os;
	}

	char operator[](int index) 
	{
		if (index >= 0 && index <= len)
			return Str[index];
	}


#pragma endregion	
};




