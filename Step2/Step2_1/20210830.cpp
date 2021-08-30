/*
==Note==

 // C���� �����Ҵ�
   - malloc, calloc
   - free(), NULL

 // C++���� �����Ҵ� : ���� ������ ���ÿ� �ʱ�ȭ�� ����
   - int* MyInt = new int(10); 
  == int* MyInt = (int*)malloc(sizeof(int));
   - delete MyInt;
   - MyInt = nullptr;

 // int �ڷ��� 5���� ������ �� �ִ� ���� �����Ҵ�
   - int* myArray1 = new int[myArrayLenth];
  == int* myAttay1 = (int*)malloc(sizeof(int));
   - delete[] myArray1;
   - myArray1 = nullptr;

 // 2���� �迭 �����Ҵ�
   - int Array_height = 5;
   - int Array_width = 5;
   - int** myArray2 = new int* [Array_height];
   - for(int i=0; i<Array_height; i++) myArray2[i] = new int* [Array_width];
   - for(int i=0; i<Array_height; i++) delete[] myArray2[i];
   - delete[] myArray2;
   - myArray2 = nullptr;

 // ������ : �ڽ��� �����ϴ� ������ ����� �� �ִ� �� �ϳ��� �̸�
   - �����ڴ� �����Ϳ� �����ϰ� �ٸ� ��ü�� ���������� �����ϴ� ���� ����
   - �����Ϳ� �ٸ��� nullptr ���� ���� �� ������, ����� �����ڰ� ������ ��ü�� �����ؾ� ��� ����
 
 // ������ ������
   - �ڷ��� & ������ �̸� = ������ ������;


*/

#include<iostream>
using namespace std;

int main() 
{
	int num1 = 100;
	int num2 = 200;
 
	// myNumber1�� ���� ������ ref1�� ����
	int& ref1 = num1;
	// & : ���� ������ O, �ּ� ������ X
	// �ּҸ� �����ϴ� �����Ϳ� �ٸ��� ���� �̸��� ����

	// ref1�� num1�� ���� ����
	cout << "ref1 = " << ref1 << endl;
	cout << "num1 = " << num1 << endl;

	cout << "&ref1 = " << &ref1 << endl;
	cout << "&num1 = " << &num1 << endl;

	ref1 = 50;
	cout << "ref1 = " << ref1 << endl;
	cout << "num1 = " << num1 << endl;

	ref1 = num2;
	// ������ ���� ���Ŀ� �ٸ� ������ ���Խ�, �� ������ �����ϴ� ���� �ƴ� ���� �� �������� ���� ����
	// �߰��� �ٸ� ������ �Ұ��Ƹ�, ������ ù ����� �� ���� ����

	int& ref2 = ref1;
	// ������ ������� �ϴ� �����ڸ� ����
	// ���� �����ڰ� �����ϴ� ��ü�� ���ÿ� ����

	int* p = &num2;
	int*& ref3 = p;
	*ref3 = 300;
	// ������ ���� p�� �����ϴ� ref3 ����

	int& ref4 = *p;
	ref4 = 400;
	// p�� ����Ű�� �ִ� ���� ����
	
	return 0;
}