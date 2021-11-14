#include "Warrior.h"

int main()
{
	// Warrior* warrior = new Warrior("전사", "대검", 200);
	Job* warrior = new Warrior("전사", "대검", 200);
	// 기반 클래스 형식의 변수로 파생 클래스 형식의 객체를 참조 가능

	warrior->PrintInfo();
	// 가리키는 실제 객체의 형태가 아닌 참조하는 변수의 자료형을 기본으로 호출
	// 따라서 Job 클래스(기반 클래스)의 printInfo()가 호출

	((Warrior*)warrior)->PrintInfo();
	((Warrior*)warrior)->Attack();
	// () : C언어에서부터 제공하는 기본적인 캐스팅 연산자
	// 자유자재로 캐스팅이 가능하며 서로 다른 형식간의 변환도 가능
	// ex) const char *str = "string"
	//		(int*)str;

	// static_cast<TargetType>(expression)
	// C++에서부터 제공하는 캐스팅 연산자
	// 논리적으로 변환 가능한 타입에 대한 캐스팅만 허용
	// ex) const char *str = "string"
	//	    static_cast<int*>(str);		-Error-

	static_cast<Warrior*>(warrior)->PrintInfo();

	delete warrior;
	warrior = nullptr;

	return 0;
}

/*
==Note==
Static_cast : 논리적으로 변경 가능한 경우에 변경을 허용해주는 기능을 하는 연산자
Dynamic_cast : 클래스 다형성, 상속성을 기반으로 부모 클래스에서 자식 클래스로 참조형 데이터 및 포인터를 변환하는 것까지 허용하지 않는 연산자

static은 자식->부모, 부모->자식 모두 아무런 조건없이 형변환시켜주지만 그에 대한 책임은 프로그래머의 몫

Dynamic은 자식->부모의 형변환만 허용
*/