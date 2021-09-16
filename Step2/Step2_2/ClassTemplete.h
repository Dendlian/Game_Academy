#pragma once
#include<iostream>
using namespace std;

// 클래스 템플릿
//  - 제공되는 기능과 내부의 행동이 모두 동일하지만 사용하는 형식이 서로 다른 클래스를 찍어낼 수 있는 틀을 의미
//  - 만약 템플릿을 사용하는 클래스라면 선언부에 모든 내용을 정의

template<typename T>
class ClassTemplete
{
private:
	T value1;
	T value2;

public:
	ClassTemplete(T value1, T value2) : value1(value1), value2(value2) {};

	void GetValues()
	{
		cout << "T Size : " << sizeof(T) << endl;
		cout << "value1 : " << value1 << endl;
		cout << "value2 : " << value2 << endl;
	}

	T Add()
	{ return value1 + value2; }

	T Sub()
	{ return value1 - value2; }
};

