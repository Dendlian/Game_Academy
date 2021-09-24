/*
==Note==
 // friend
   - Ŭ������ ������ ��� ������ Ŭ�������� �ش� Ŭ���� �ɹ��� ���� ���� ������ ���þ��� ��� �ɹ��� ���� ������ ���
   - �޼��忡 Ŭ�������� �����Ѵٸ� ������ Ŭ�������� �ش� �޼��忡 ���� ������ �׻� ���
   - �޼��忡 Ŭ�������� �������� �ʴ°��� �ش� �Լ��� Ŭ������ �ɹ��� �ƴ� �������� ����� �� �ֵ��� ���

 // ostream : ��� �۾��� ���õ� ������� �����ϴ� Ŭ����
 // istream : �Է� �۾��� ���õ� ������� �����ϴ� Ŭ����

FORCEINLINE friend ostream& operator << (std::ostream& os, const String& str)
{
	for(int i = 0; i<str.GetLength(); i++)
		os << str[i];
	return os;
}
*/
#include"String.h"

int main()
{
	String str1 = "abc";
	String str2("def");
	String str3(str2);
	String str4 = "aaa";
	cout << str4.Str << endl;

	str4 = str1 + str2; 

	cout << str1.Str << endl;
	cout << str2.Str << endl;
	cout << str3.Str << endl;
	cout << str4.Str << endl;
	
	str3 += str2;

	cout << str3.Str << endl;
	cout << (str1 == str2) << endl;
	
	cout << str1.GetLength() << endl;
	cout << str1.Capactity() << endl;
	
	cout << str1[3] << endl;
	cout << str1.Str[3] << endl;

	return 0;
}