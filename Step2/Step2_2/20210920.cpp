/*
==Note==
 // friend
   - 클래스를 지정할 경우 지정한 클래스에서 해당 클래스 맴버에 대해 접근 레벨과 관련없이 모든 맴버에 대한 접근을 허용
   - 메서드에 클래스명을 지정한다면 지정한 클래스에서 해당 메서드에 대한 접근을 항상 허용
   - 메서드에 클래스명을 지정하지 않는가면 해당 함수를 클래스의 맴버가 아닌 전역에서 사용할 수 있도록 허용

 // ostream : 출력 작업과 관련된 내용들을 제공하는 클래스
 // istream : 입력 작업과 관련된 내용들을 제공하는 클래스

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