#pragma once
#include<iostream>
using namespace std;

// Ŭ���� ���ø�
//  - �����Ǵ� ��ɰ� ������ �ൿ�� ��� ���������� ����ϴ� ������ ���� �ٸ� Ŭ������ �� �� �ִ� Ʋ�� �ǹ�
//  - ���� ���ø��� ����ϴ� Ŭ������� ����ο� ��� ������ ����

template<typename T>
class ClassTemplate
{
private:
	T value1;
	T value2;

public:
	ClassTemplate(T value1, T value2) : value1(value1), value2(value2) {};

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

