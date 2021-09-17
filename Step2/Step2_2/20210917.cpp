#include "VectorClass.h"

int main()
{
	VectorClass vec1 = VectorClass(10.f, 10.f) + VectorClass(90.f, 90.f);
	vec1.Print();

	vec1 = vec1 + VectorClass(10.f, 10.f);
	vec1.Print();
	
	vec1 = vec1 + 10;
	vec1.Print();
	
	VectorClass vec2(20.f, 20.f);

	vec1 -= vec2;
	vec1(); // 오버로딩한 함수 호출 연산자

	(vec1++).Print();
	vec1();

	cout << "X= " << vec1[Axis::X] << endl;

	return 0;
}