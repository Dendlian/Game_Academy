/*
==Note==

 // 순수 가상함수
   - 파생클래스에서 반드시 재정의 해야하는 메서드를 의미
   - 함수의 선언만 존재하며, 정의하는 내용X
   - 추상 클래스 : C++ 에서 이러한 순수 가상함수를 하나 이상 가지고 있는 클래스

 // 추상 클래스
   - 순수 가상함수 하나 이상을 가지고 있는 완전하지 않는 클래스를 의미
   - 완전하지 않는 클래스이므로 인스턴스화 및 객체의 선언이 불가
   - 추상 클래스를 선언할 때 'abstract'를 이용하여 추상 클래스임을 명시
*/


#include"Base.h"

class SampleAbstractClass abstract
{
public:
	// 순수 가상 함수
	virtual void Print() =0;
	// 가상함수 뒤에 '=0'을 붙혀서 선언
};

class SampleClass : public SampleAbstractClass
{
public:
	virtual void Print() override
	{
		cout << "Print() Call" << endl;
	}
};

int main()
{
	SampleAbstractClass* sample = new SampleClass();
	sample->Print();

	delete sample;
	sample = nullptr;
	return 0;
}