
#include"String.h"

int main()
{
	String str1 = "abc";
	String str2("def");
	String str3(str2);
	String str4;
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

}