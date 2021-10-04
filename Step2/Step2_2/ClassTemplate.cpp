#include"ClassTemplate.h"

template<typename T, typename U>
void addition(T a, U b)
{
	cout << sizeof(T) << endl;
	cout << sizeof(U) << endl;
}
// 템플릿 : 사용하는 기능은 통일하되, 들어가는 자료형이 다를 때 사용

int main()
{
	ClassTemplate<int>classtemplate(10, 20);
	classtemplate.GetValues();
	cout << classtemplate.Add() << endl;
	cout << classtemplate.Add() << endl;

	addition<double, float>(3.14, 3.14f);
}