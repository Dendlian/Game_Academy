#include<iostream>
using namespace std;

#define FORCEINLINE __forceinline

class Monster
{
private:
	// ���� �ɹ� ���� ����
	static int MonsterNum;
	// ��ü���� ������ �ɹ����� ������ �ִٸ� ���� �ɹ� ������ ��ü���� ��� �����ϰ� �ִ� �ɹ�
	// �Ϲ� �ɹ��ʹ� �ٸ��� �� ��ü���� ���� �����Ѵٸ�, ��� ���� ��ü���� ���� �����ϰ� ����
	// Ŭ���� �ܺο��� �ʱ�ȭ�� �����ؾ� ���� ����

	// ���� �ɹ� ��� ����
	const static int Lv = 1;
	// ���� ������ �� ���� �ɹ����� ��� �����ϴ� ���
	// const static == static const
	// Ŭ���� ���ο��� �ʱ�ȭ�� �����ؾ� ���� ����

	string Name;
	// ���� �������� ���ϴ� �ɹ� ���
	const string Rate;
	int Hp;

public:
	Monster(const char* name, int hp, const char* rate);
	~Monster() {}

	void PrintMonster();
};

// ���� �ɹ� ������ �ʱ�ȭ
int Monster::MonsterNum = 0;

// �ʱ�ȭ ����Ʈ ������ : �ɹ� ������(�ʱ�ȭ�� ��)
// �����ڸ� ������ �� �ʱ�ȭ ���� �Ѱܹ޾� �ɹ��� �ʱ�ȭ�Ͽ� �ִ� ���
Monster::Monster(const char* name, int hp, const char* rate) : Rate(rate)
{
	Hp = hp;
	Name = name;
	++MonsterNum;
	
	cout << "���� ������ ������ �� : " << MonsterNum << endl;
}

void Monster::PrintMonster() 
{
	cout << "�̸� : " << Name << endl;
	cout << "ü�� : " << Hp << endl;
	cout << "��� : " << Rate << endl;
}

int main()
{
	Monster monster[2] = { Monster("Goblin",100,"Nomal"), Monster("Slaime",200,"Named") };

	monster[0].PrintMonster();
	cout << endl;
	monster[1].PrintMonster();

	return 0;
}