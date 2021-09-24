/*
==Note==

 // 인터페이스
   - 클래스와 비슷하지만, "가상 소멸자"와 "순수가상함수"만 갖는 클래스를 의미
   - interface(struct) 키워드를 이용하여 작성
   - 어떤 특정한 동작에 대해서 상속을 시키고 싶을 때 사용

 // #include<combaseapi.h>
   -interface 키워드를 제공
   - PURE를 제공

 // **코드**
   - 속도 / 실용성 / 가독성
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