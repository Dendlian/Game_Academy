#include"ClassTemplete.h"

template<typename T, typename U>
void addition(T a, U b)
{
	cout << sizeof(T) << endl;
	cout << sizeof(U) << endl;
}
// ���ø� : ����ϴ� ����� �����ϵ�, ���� �ڷ����� �ٸ� �� ���

int main()
{
	ClassTemplete<int>classtemplete(10, 20);
	classtemplete.GetValues();
	cout << classtemplete.Add() << endl;
	cout << classtemplete.Add() << endl;

	addition<double, float>(3.14, 3.14f);
}