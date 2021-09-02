#include "Class01.h"

void Human::InitHumanInfo(string name, HumanGender gender, int age)
{
	Name = name;
	Gender = gender;
	Age = age;

	PrintHumanInfo();
}

void Human::PrintHumanInfo() const
{
	cout << "이름 : " << Name << endl;
	cout << "성별 : " << GenderToString() << endl;
	cout << "나이 : " << Age << endl;
}
