/*
==Note==

* ��������
 - �Լ� �ۿ��� ����Ǹ�, �������� ��� �ٸ� ���� ������ �ٸ��� �������� ���� ������ �ǹ�
 - ���α׷��� ����� �� ������ �޸� ������ �Ҵ�Ǹ�, ���α׷��� ������ ������ ����
 - ���������� �ʱ�ȭ��Ű�� �ʾƵ� 0���� �ʱ�ȭ
 // ���������� ���������� �̸��� ���ٸ� ���������� ���� ����

 * ������
  - ��ǻó�� �����͸� ������ �� �޸𸮿� ������ �ϸ� �����Ͱ� ����� �ּҸ� ����
  - �������� �ּҰ� : �ش� �����Ͱ� ����� �޸� ���� �ּҸ� �ǹ�
  - ������ ���� : �Ҵ�Ǿ� �ִ� ������ �ּҰ��� ���� ������ �ǹ�
  - ������ �ִ� ���� �ּҸ� ���� �޸𸮿� ���������� ������ ����
  int* p;
  int variable = 10;
  p = &variable;
	printf("variable �ּ� = %d\n", &variable);
	printf("p �� �����ϰ��ִ� �ּ� : %d\n", p);
	printf("variable = %d\n", variable);
	printf("*p = %d\n", *p);
	printf("p �� �ּ� : %d\n", &p);

 */

#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

typedef struct tag_Monster
{
	char Name[256];
	int Level;
	int Hp;
	int Atk;
}Monster;

typedef struct tag_Dengeon
{
	char name[256];
	int enterLv;
	Monster monster[2];

}Dengeon;

void Check_Dengeon(Dengeon dengeon[])
{

	for (int i = 0; i < 2; i++)
	{
		printf("[%s] :: ���� ���� �ּ� ���� [%d Lv]\n�������\n", dengeon[i].name, dengeon[i].enterLv);

		for (int j = 0; j < 2; j++)
		{
			printf("%s::LV[%d]::HP[%d]::���ݷ�[%d]\n", dengeon[i].monster[j].Name, dengeon[i].monster[j].Level, dengeon[i].monster[j].Hp, dengeon[i].monster[j].Atk);
		}
		printf("\n\n");
	}

}


int main()
{
	Dengeon dengeon[2];


	for (int i = 0; i < sizeof(dengeon) / sizeof(Dengeon); i++)
	{
		printf("%d��° ������ �̸��� �����ּ���. : ", i + 1);
		scanf("%s", dengeon[i].name);
		printf("%s ������ �� �� �ִ� �ּ� ������ �����ּ���. : ", dengeon[i].name);
		scanf("%d", &dengeon[i].enterLv);
		for (int j = 0; j < sizeof(dengeon) / sizeof(Dengeon); j++)
		{
			printf("%d��° ������ �̸��� �����ּ���. : ", j + 1);
			scanf("%s", dengeon[i].monster[j].Name);
			printf("%s�� ������ �����ּ���. : ", dengeon[i].monster[j].Name);
			scanf("%d", &dengeon[i].monster[j].Level);
			printf("%s�� hp�� �����ּ���. : ", dengeon[i].monster[j].Name);
			scanf("%d", &dengeon[i].monster[j].Hp);
			printf("%s�� ���ݷ��� �����ּ���. : ", dengeon[i].monster[j].Name);
			scanf("%d", &dengeon[i].monster[j].Atk);
			printf("\n");
		}
		printf("\n");
	}

	Check_Dengeon(dengeon);


	return 0;
}