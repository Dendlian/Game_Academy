#include"ClassTemplate.h"

template<typename T, typename U>
void addition(T a, U b)
{
	cout << sizeof(T) << endl;
	cout << sizeof(U) << endl;
}
// ���ø� : ����ϴ� ����� �����ϵ�, ���� �ڷ����� �ٸ� �� ���

int main()
{
	ClassTemplate<int>classtemplate(10, 20);
	classtemplate.GetValues();
	cout << classtemplate.Add() << endl;
	cout << classtemplate.Add() << endl;

	addition<double, float>(3.14, 3.14f);
}