#include "Warrior.h"

// 생성자 : 부모 생성자
// 부모의 메서드를 통하여 객체화를 초기화하는 기능

Warrior::Warrior(string name, string weapon, float atk) : Job(name, weapon)
{
	Atk = atk;
}

void Warrior::Attack()
{
	cout << "Attack!!" << endl;
}

void Warrior::PrintInfo()
{
	Job::PrintInfo();
	cout << "Atk : " << Atk << endl;
}