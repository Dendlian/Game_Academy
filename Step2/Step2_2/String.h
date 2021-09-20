#pragma once
#include<string>
#include<iostream>
#define FORCEINLINE __forceinline
using namespace std;

class String
{
public:
	char *Str;
	int len;
	int size;

	String();
	String(const char* str);

	int length();
	int capactity();

	FORCEINLINE String operator=(const char* value)
	{
		return String(value);
	}
	FORCEINLINE String operator+(const String& value)
	{
		return String(strcat(Str, value.Str));
	}
	
	FORCEINLINE String operator+=(const String& value)
	{
		strcat(Str, value.Str);
		len = len + value.len;
		return *this;
	}

	FORCEINLINE String operator ==(const String& value)
	{
		strcpy(Str, value.Str);
		len = value.len;
		return *this;
	}
};

/*
FORCEINLINE VectorClass operator/(const VectorClass& value)
	{ return VectorClass(X * value.X, Y / value.Y); }

	FORCEINLINE VectorClass operator+=(const VectorClass& value)
	{
		X += value.X;
		Y += value.Y;
		return *this;
	}
*/