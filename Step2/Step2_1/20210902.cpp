/*
==Note==
 // 접근자
   // 특정한 필드에 대한 값을 반환하는 메서드
   // Get 접두어를 사용

 // 설정자
   // 특정한 필드에 대한 값을 설정하는 메서드
   // Set 접두어를 사용

 // 생성자(Constructor)
   // 객체 생성시 한 번만 호출되며, 객체를 생성하는 시점에 필드를 원하는 값으로 초기화 시키고 싶을 경우 사용할 수 있는 특별한 메서드
   // 클래스명();

 // 종료자(Finalizer)
   // 소멸자라고도 하며, 객체가 소멸될 떄 호출
   // ~클래스명();

 // C언어의 방식 malloc calloc은 생성자를 호출하지 않고 free 또한 소멸자 호출 X

class Character
{
private :
	string Name;
	int Hp;

public :
	// Name에 대한 설정자를 구성
	FORCEINLINE void SetName(string name)
	{Name = name;}
	// Name에 대한 접근자를 구성
	FORCEINLINE string GetName()
	{return Name;}

	FORCEINLINE void SetHp(int hp)
	{Hp = hp;}

	FORCEINLINE int GetHp()
	{return Hp;}
};
*/


#include "Class01.h"
int main()
{
	// Human 객체 동적할당
	Human* human = new Human;

	human -> InitHumanInfo("철수",Human::HumanGender::Man ,20);
	
	return 0;
}