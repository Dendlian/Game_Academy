/*
==Note==

 // �������̽�
   - Ŭ������ ���������, "���� �Ҹ���"�� "���������Լ�"�� ���� Ŭ������ �ǹ�
   - interface(struct) Ű���带 �̿��Ͽ� �ۼ�
   - � Ư���� ���ۿ� ���ؼ� ����� ��Ű�� ���� �� ���

 // #include<combaseapi.h>
   -interface Ű���带 ����
   - PURE�� ����

 // **�ڵ�**
   - �ӵ� / �ǿ뼺 / ������
*/

#include<iostream>
using namespace std;

#include<combaseapi.h>

interface ISampleInterface1
{
public:
	virtual void HelloInterface() PURE;
	virtual ~ISampleInterface1() { cout << "ISampleInterface1 Finalizer call!" << endl; }
};

interface ISampleInterface2
{
public:
	virtual void PrintHello() PURE;
	virtual ~ISampleInterface2() { cout << "ISampleInterface2 Finalizer call!" << endl; }
};

class SampleClass : public ISampleInterface1, public ISampleInterface2
{
public:
	~SampleClass() 
	{ cout << "SampleClass Finalizer call!" << endl; }

	virtual void HelloInterface() override
	{ cout << "HelloInterface() call!" << endl; }
	
	virtual void PrintHello() override
	{ cout << "PrintHello() call!" << endl; }
};

int main()
{
	SampleClass* sample = new SampleClass();
	sample->HelloInterface();
	sample->PrintHello();

	delete sample;
	sample = nullptr;

	return 0;
}