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
	cout << "�̸� : " << Name << endl;
	cout << "���� : " << GenderToString() << endl;
	cout << "���� : " << Age << endl;
}
