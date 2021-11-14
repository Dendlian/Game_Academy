#include "Warrior.h"

// ������ : �θ� ������
// �θ��� �޼��带 ���Ͽ� ��üȭ�� �ʱ�ȭ�ϴ� ���

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