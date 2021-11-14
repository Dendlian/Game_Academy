#include "Warrior.h"

int main()
{
	// Warrior* warrior = new Warrior("����", "���", 200);
	Job* warrior = new Warrior("����", "���", 200);
	// ��� Ŭ���� ������ ������ �Ļ� Ŭ���� ������ ��ü�� ���� ����

	warrior->PrintInfo();
	// ����Ű�� ���� ��ü�� ���°� �ƴ� �����ϴ� ������ �ڷ����� �⺻���� ȣ��
	// ���� Job Ŭ����(��� Ŭ����)�� printInfo()�� ȣ��

	((Warrior*)warrior)->PrintInfo();
	((Warrior*)warrior)->Attack();
	// () : C�������� �����ϴ� �⺻���� ĳ���� ������
	// ��������� ĳ������ �����ϸ� ���� �ٸ� ���İ��� ��ȯ�� ����
	// ex) const char *str = "string"
	//		(int*)str;

	// static_cast<TargetType>(expression)
	// C++�������� �����ϴ� ĳ���� ������
	// �������� ��ȯ ������ Ÿ�Կ� ���� ĳ���ø� ���
	// ex) const char *str = "string"
	//	    static_cast<int*>(str);		-Error-

	static_cast<Warrior*>(warrior)->PrintInfo();

	delete warrior;
	warrior = nullptr;

	return 0;
}

/*
==Note==
Static_cast : �������� ���� ������ ��쿡 ������ ������ִ� ����� �ϴ� ������
Dynamic_cast : Ŭ���� ������, ��Ӽ��� ������� �θ� Ŭ�������� �ڽ� Ŭ������ ������ ������ �� �����͸� ��ȯ�ϴ� �ͱ��� ������� �ʴ� ������

static�� �ڽ�->�θ�, �θ�->�ڽ� ��� �ƹ��� ���Ǿ��� ����ȯ���������� �׿� ���� å���� ���α׷����� ��

Dynamic�� �ڽ�->�θ��� ����ȯ�� ���
*/