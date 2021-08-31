/*
==Note==

 // ������ �Ű�����
void pointerSwap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

 // ������ ��ȯ����
int& MyRef(int& ref)
{
	ref += 10;
	return ref;
}
 
 // ����ü : ����� ���� �ڷ��� (C++ O / C X)
   - typedef ���̵� ����ü ������ ���� ���� ����
   - �ɹ��Լ� ���� ����
   
*/

#include<iostream>
#pragma warning(disable : 4996)
using namespace std;

struct Point
{
	// instance : � Ư���� ���·� ������� ����� �ǹ�

	// �ɹ�����
	// instance field : �ش� ����ü ������ ��ü�� ���ϴ� �ɹ� ����
	int x;
	int y;

	// �ɹ��Լ�
	// instance method : �ش� ����ü ������ ��ü�� ���ϴ� �ɹ� �Լ�
	void SetPoint(int x, int y)
	{
		// this : �ڱ� �ڽ��� �ּҸ� �ǹ�
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

int& GetRef() // �Լ� ���������� �����ϴ� ���� ���� : STACK �޸𸮶� ���߿� ������� ���� �߻�
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

	// Point Ÿ���� ��ü ����
	// ��ü : �츮�� ���� ���赵�� �������� ������� ������ ���(����)
	//Point myLocation;

	// ��ü�� �ν��Ͻ�ȭ
	// myLocation(��ü)�� ����ϱ� ���ؼ� �����͸� �����ϰ� ��üȭ
	//myLocation.SetPoint(10, 20);
	//myLocation.PrintPoint(myLocation);

	// ��ü�� �ν��Ͻ�
	// ��ü : ���赵�� �������� ���𰡸� ����� ���� ������ ��
	// �ν��Ͻ� : ��ü ��üȭ�� �� ��
	// ���� ������ ��ü�� ������ �����ϰ� �ϳ��� ��ü�� �Ҽӵ� �ɹ��� ���� �����ϴ��� �ٸ� ��ü�� ���� X
	
	return 0;
}