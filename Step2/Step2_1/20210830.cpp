/*
==Note==

 // C에서 동적할당
   - malloc, calloc
   - free(), NULL

 // C++에서 동적할당 : 공간 생성과 동시에 초기화가 가능
   - int* MyInt = new int(10); 
  == int* MyInt = (int*)malloc(sizeof(int));
   - delete MyInt;
   - MyInt = nullptr;

 // int 자료형 5개를 저장할 수 있는 공간 동적할당
   - int* myArray1 = new int[myArrayLenth];
  == int* myAttay1 = (int*)malloc(sizeof(int));
   - delete[] myArray1;
   - myArray1 = nullptr;

 // 2차원 배열 동적할당
   - int Array_height = 5;
   - int Array_width = 5;
   - int** myArray2 = new int* [Array_height];
   - for(int i=0; i<Array_height; i++) myArray2[i] = new int* [Array_width];
   - for(int i=0; i<Array_height; i++) delete[] myArray2[i];
   - delete[] myArray2;
   - myArray2 = nullptr;

 // 참조자 : 자신이 참조하는 변수를 대신할 수 있는 또 하나의 이름
   - 참조자는 포인터와 동일하게 다른 객체를 간접적으로 참조하는 것이 가능
   - 포인터와 다르게 nullptr 값을 가질 수 없으며, 선언시 참조자가 참조할 객체를 지정해야 사용 가능
 
 // 참조자 선언방법
   - 자료형 & 참조자 이름 = 참조할 변수명;


*/

#include<iostream>
using namespace std;

int main() 
{
	int num1 = 100;
	int num2 = 200;
 
	// myNumber1에 대한 참조자 ref1을 선언
	int& ref1 = num1;
	// & : 참조 연산자 O, 주소 연산자 X
	// 주소를 대입하는 포인터와 다르게 변수 이름을 대입

	// ref1은 num1의 값을 참조
	cout << "ref1 = " << ref1 << endl;
	cout << "num1 = " << num1 << endl;

	cout << "&ref1 = " << &ref1 << endl;
	cout << "&num1 = " << &num1 << endl;

	ref1 = 50;
	cout << "ref1 = " << ref1 << endl;
	cout << "num1 = " << num1 << endl;

	ref1 = num2;
	// 참조자 선언 이후에 다른 변수를 대입시, 그 변수를 참조하는 것이 아닌 우측 피 연산자의 값을 복사
	// 중간에 다른 참조는 불가아며, 참조는 첫 선언시 한 번만 가능

	int& ref2 = ref1;
	// 참조를 대상으로 하는 참조자를 선언
	// 우측 참조자가 참조하는 객체를 동시에 참조

	int* p = &num2;
	int*& ref3 = p;
	*ref3 = 300;
	// 포인터 변수 p를 참조하는 ref3 선언

	int& ref4 = *p;
	ref4 = 400;
	// p가 가리키고 있는 변수 참조
	
	return 0;
}