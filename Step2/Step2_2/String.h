#pragma once
#include<string>
#include<iostream>
#pragma warning (disable:4996)
#define FORCEINLINE __forceinline

using namespace std;

class String
{
public:
	char *Str;		// 1. 문자열 주소를 가리킬 포인터로 설정하여 외부에서 바꿔도 클래스 내에서도 바뀐 값을 유지 
	int len;		// 2. 문자열의 길이
	int size;		// 3. 문자열의 크기 (용량)

	String();						// 4. 생성자
	String(const char* str);		// 5. 생성자 오버로딩
	// ~String();


	FORCEINLINE int GetLength()		// 6. 길이를 구하는 메서드
	{
		return len;
	}

	FORCEINLINE int Capactity()		// 7. 용량을 구하는 메서드
	{
		return size;
	}


#pragma region 연산자 오버로딩

	FORCEINLINE String operator=(const char* value) // String str1 = "abcd"
	{
		return String(value);		// 8. 5번 생성자로 전송
	}

	FORCEINLINE String operator+(const String& value) // str3 = str1+str2
	{
		return String(strcat(Str, value.Str)); // 9. 문자열 이어붙히기(strcat)를 수행한 상태로 5번 생성자로 전송
	}
	
	FORCEINLINE String operator+=(const String& value) // str3 += str2
	{
		strcat(Str, value.Str);		// 10. 문자열 이어붙히기를 수행한 후 기존 Str에 저장
		len = len + value.len;		// 11. 새로 만들어진 문자열의 길이를 저장하여 기존 len 최신화
		return *this;				// 12. 최신화된 기존에 생성되어 있던 자료 반환
	}

	FORCEINLINE int operator == (const String& value) // str1 == str2
	{
		return strcmp(Str, value.Str);	// 13. int형으로 연산자 오버로딩을 설정하고 문자열 비교(strcmp)를 이용하여 반환
	}
#pragma endregion	
};
