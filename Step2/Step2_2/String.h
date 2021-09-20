#pragma once
#include<string>
#include<iostream>
#pragma warning (disable:4996)
#define FORCEINLINE __forceinline

using namespace std;

class String
{
public:
	char *Str;		// 1. ���ڿ� �ּҸ� ����ų �����ͷ� �����Ͽ� �ܺο��� �ٲ㵵 Ŭ���� �������� �ٲ� ���� ���� 
	int len;		// 2. ���ڿ��� ����
	int size;		// 3. ���ڿ��� ũ�� (�뷮)

	String();						// 4. ������
	String(const char* str);		// 5. ������ �����ε�
	// ~String();


	FORCEINLINE int GetLength()		// 6. ���̸� ���ϴ� �޼���
	{
		return len;
	}

	FORCEINLINE int Capactity()		// 7. �뷮�� ���ϴ� �޼���
	{
		return size;
	}


#pragma region ������ �����ε�

	FORCEINLINE String operator=(const char* value) // String str1 = "abcd"
	{
		return String(value);		// 8. 5�� �����ڷ� ����
	}

	FORCEINLINE String operator+(const String& value) // str3 = str1+str2
	{
		return String(strcat(Str, value.Str)); // 9. ���ڿ� �̾������(strcat)�� ������ ���·� 5�� �����ڷ� ����
	}
	
	FORCEINLINE String operator+=(const String& value) // str3 += str2
	{
		strcat(Str, value.Str);		// 10. ���ڿ� �̾�����⸦ ������ �� ���� Str�� ����
		len = len + value.len;		// 11. ���� ������� ���ڿ��� ���̸� �����Ͽ� ���� len �ֽ�ȭ
		return *this;				// 12. �ֽ�ȭ�� ������ �����Ǿ� �ִ� �ڷ� ��ȯ
	}

	FORCEINLINE int operator == (const String& value) // str1 == str2
	{
		return strcmp(Str, value.Str);	// 13. int������ ������ �����ε��� �����ϰ� ���ڿ� ��(strcmp)�� �̿��Ͽ� ��ȯ
	}
#pragma endregion	
};
