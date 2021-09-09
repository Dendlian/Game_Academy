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
	//		static_cast<int*>(str);		-Error-

	static_cast<Warrior*>(warrior)->PrintInfo();

	delete warrior;
	warrior = nullptr;

	return 0;
}