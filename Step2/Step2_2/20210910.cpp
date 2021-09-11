/*
==Note==
 // Overload와 Override의 공동점과 차이점
  // 공통점
     - 동일한 이름의 함수를 재정의

   // 차이점
     - Overload : 매개 변수, 반환 형식중 하나가 달라야 정의 가능
	 - Override : 파생 클래스에서 재정의를 해야하며 매개변수와 반환형식이 모두 같아야 정의 가능
*/

#include<iostream>
using namespace std;

// 기반 클래스
class Parent
{
public:
	// 부모의 메서드
	void SampleMethod()
	{cout << "Parent :: SamplaMethod() Call!" << endl;}
};

// Parent의 파생 클래스
class Child : public Parent
{
public:
	// 자식의 메서드
	void SampleMethod()
	{cout << "Child :: SamplaMethod() Call!" << endl;}
};

// overrdie (오버라이드)
//   - 기반 클래스에 있는 같은 이름과 형식의 메서드를 파생 클래스에서 재정의하는 것
//   - 기반 클래스의 재정의시킬 메서드는 가상함수라고 지정하는 것을 지향

// overload (오버로드)
//   - 두개 이상의 함수를 같은 함수명으로 사용
//   - 동일 함수명을 반환값과 매개변수로 차이를 주어 구별
//   - 같은 함수명이라도 다른 기능을 하는 여러개의 함수를 구현 가능


int main() 
{
	Child child;
	child.SampleMethod();

	// 자식의 메소드안에 부모의 메소드 호출

	// 기반 클래스 형식으로 파생클래스 참조
	 Parent* sampleClass = new Child;
	 sampleClass->SampleMethod();

	delete sampleClass;
	sampleClass = nullptr;

	return 0;
}