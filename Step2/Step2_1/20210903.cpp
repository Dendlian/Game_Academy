/*
==Note==
// �ν��Ͻ� �ʵ� ����
private :
	int variable1;
	int variable2;
public :
	// ������ 
	  - Class02();
	  - �Ű� ���� ��� ����
	  - �����ε� ���� (�����ε� : �Ű������� ��ȯ���� �޸��Ͽ� ���� �̸� �Լ��� ȣ���� �����ϴ� ��)
	  - ������ �Ű����� ��� ���� (Class02(int a, int b=100);)
	
	  - explicit : �������� ������ ����ȯ ����
	    Class02::Class02(int var)
		  {
			  Variable = var;
			  cout << "var = " << var << endl;
		  }

	// �⺻������
	  - Ŭ������ ������ �� ��������� �����ڸ� �������� �ʾƵ� �����Ϸ����� ������ִ� �⺻������ ������

	// �Ҹ��� 
	~Class02();
	// �Ű� ���� ��� �Ұ���

	// ���� ������
	// ���Ե� ���� ������ ��ü �� �ɹ��� ���� ���� �ڽ��� �ɹ��� �����ϴ� ������
	  - char*�� �޸��� �ּҰ��� �����Ͽ� ������ ���� ��� ����
	  - �⺻ ��������ڸ� �̿��Ͽ� �����ϸ� ���� �ּҸ� �����Ͽ� ��ü�� �ٸ����� ���ÿ� ���� ����Ǵ� ���� �߻�
      - �����Ҵ��� ���� ������ ���� �����Ͽ� ���� ����
	Weapon::Weapon(const char* name, int atk)
	{
		Atk = atk;
		Name = new char[256];
		strcpy(Name, name);
	}

Weapon::Weapon(const Weapon& weapon)
	{
		Atk = weapon.Atk;
		Name = new char[256];
		strcpy(Name, weapon.Name);
	}

Weapon::~Weapon()
	{
		delete[] Name;
		Name = nullptr;
	}

	// �⺻ ���� ������ : C++���� �⺻������ �������ִ� ���� ������
	  - Monster monster2 = Monster(monster1);
      - Monster monster2 = monster1;


*/

#include"Class02.h"

void PrintClass(Class02 sample)
{
	cout << "GetVariable() = " << sample.GetVariable() << endl;
}



int main()
{
	Class02 sample1;
	PrintClass(sample1);
	PrintClass(Class02(500));
	
	// PrintClass(500);
	// �Լ��� ���ڷ� ������ 500�̶�� ���� �����Ͱ� �����Ϸ� �������� Class02(500)�� ���·� �ڵ� ��ȯ
	// (== ������ ����ȯ)

	return 0;
}