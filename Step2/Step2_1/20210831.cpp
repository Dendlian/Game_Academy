/*
==Note==

 // 참조자 매개변수
void pointerSwap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

 // 참조자 반환형식
int& MyRef(int& ref)
{
	ref += 10;
	return ref;
}
 
 // 구조체 : 사용자 정의 자료형 (C++ O / C X)
   - typedef 없이도 구조체 형식의 변수 선언 가능
   - 맴버함수 선언 가능
   
*/

#include<iostream>
#pragma warning(disable : 4996)
using namespace std;

struct Point
{
	// instance : 어떤 특정한 형태로 만들어진 결과를 의미

	// 맴버변수
	// instance field : 해당 구조체 형식의 갯체에 속하는 맴버 변수
	int x;
	int y;

	// 맴버함수
	// instance method : 해당 구조체 형식의 객체에 속하는 맴버 함수
	void SetPoint(int x, int y)
	{
		// this : 자기 자신의 주소를 의미
		this->x = x;
		this->y = y;
	}

	void PrintPoint(Point point)
	{
		cout << "x = " << point.x << endl;
		cout << "y = " << point.y << endl;
	}

};

int& MyRef(int& ref)
{
	ref += 10;
	return ref;
}

int& GetRef() // 함수 지역변수를 참조하는 것은 지양 : STACK 메모리라 나중에 사라지면 오류 발생
{
	int a = 10;
	return a;
}

void pointerSwap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Printnum(int a, int b)
{
	cout << "num1 : " << a << endl;
	cout << "num2 : " << b << endl;
}

void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	//int num1 = 100;
	//int num2 = 200;
	//
	//pointerSwap(&num1, &num2);
	//Printnum(num1, num2);
	//
	//Swap(num1, num2);
	//Printnum(num1, num2);

	//int num1 = 10;
	//int& num2 = MyRef(num1);
	//Printnum(num1, num2);

	// Point 타입의 객체 선언
	// 객체 : 우리가 만든 설계도를 바탕으로 만들어진 데이터 덩어리(공간)
	//Point myLocation;

	// 객체의 인스턴스화
	// myLocation(객체)을 사용하기 위해서 데이터를 설정하고 실체화
	//myLocation.SetPoint(10, 20);
	//myLocation.PrintPoint(myLocation);

	// 객체와 인스턴스
	// 객체 : 설계도를 바탕으로 무언가를 만들기 위해 선언한 것
	// 인스턴스 : 객체 실체화가 된 것
	// 같은 형식의 객체를 여러개 생성하고 하나의 객체에 소속된 맴버의 값을 변경하더라도 다른 객체는 영향 X
	
	return 0;
}