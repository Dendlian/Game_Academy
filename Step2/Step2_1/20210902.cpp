/*
==Note==
 // ������
   // Ư���� �ʵ忡 ���� ���� ��ȯ�ϴ� �޼���
   // Get ���ξ ���

 // ������
   // Ư���� �ʵ忡 ���� ���� �����ϴ� �޼���
   // Set ���ξ ���

 // ������(Constructor)
   // ��ü ������ �� ���� ȣ��Ǹ�, ��ü�� �����ϴ� ������ �ʵ带 ���ϴ� ������ �ʱ�ȭ ��Ű�� ���� ��� ����� �� �ִ� Ư���� �޼���
   // Ŭ������();

 // ������(Finalizer)
   // �Ҹ��ڶ�� �ϸ�, ��ü�� �Ҹ�� �� ȣ��
   // ~Ŭ������();

 // C����� ��� malloc calloc�� �����ڸ� ȣ������ �ʰ� free ���� �Ҹ��� ȣ�� X

class Character
{
private :
	string Name;
	int Hp;

public :
	// Name�� ���� �����ڸ� ����
	FORCEINLINE void SetName(string name)
	{Name = name;}
	// Name�� ���� �����ڸ� ����
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
	// Human ��ü �����Ҵ�
	Human* human = new Human;

	human -> InitHumanInfo("ö��",Human::HumanGender::Man ,20);
	
	return 0;
}