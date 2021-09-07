/*
==Note==

 // ���� ����
	- �����Ͱ� ����Ű�� �����ʹ� ������ �ǻ������� �� ������, �� �ּҰ��� �����Ͽ� �ɹ� �� �ɹ��� ���縦 ����
	- Name = weapon.Name;

 // ���� ����
	- ������ �������� �����ϴ� ���� �ƴ�, �� ������ �ƶ��� �°� ������ �����ͱ��� �����ϰ� ����

 // static
	- ���� ����, ���� �Լ����� �ǹ�
	- ������ ����� ��� : ���� ����, ���� ���� ����
	- �Լ��� ����� ��� : ���� �Լ�
*/

#include"Class03.h"

// ��������
int myVariable = 10;
// �ܺ� ���Ͽ��� extern���� ��� ����

// ���� ��������
static int staticVariable = 100;
// static�� ���� ���� ��������
// �Լ� �ش� ���� ���ο����� ��� �����ϸ�, �ܺ� ���Ͽ��� extern ��� �Ұ�

//�Լ�
void helloworld()
{
	cout << "helloworld" << endl;
};

//�����Լ�
static void Helloworld()
{
	cout << "Helloworld" << endl;
};


void addNumaber(int value)
{
	// ��������
	static int result = 0;
	// �� �ѹ��� �ʱ�ȭ�� �����ϸ�, ������ �޸� ������ �Ҵ�
	// ���α׷��� ����� ������ �����͸� ����
	// �Լ� ���ο� ����Ǿ��� ������ ����� ��� �������� ��� ����
	result += value;
	cout << "result : " << result << endl;
}


int main()
{
	Weapon weapon1 = Weapon("Sword", 100);
	weapon1.PrintWeapon();

	Weapon weapon2 = weapon1;
	weapon2.PrintWeapon();

	addNumaber(10);
	addNumaber(20);
	addNumaber(30);

	return 0;
}