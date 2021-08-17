/*
==Note==

* 전역변수
 - 함수 밖에서 선언되며, 지역성을 띄는 다른 지역 변수와 다르게 지역성이 없는 변수를 의미
 - 프로그램이 실행될 때 데이터 메모리 영역에 할당되며, 프로그램을 종료할 때까지 존재
 - 전역변수는 초기화시키지 않아도 0으로 초기화
 // 전역변수와 지역변수의 이름이 같다면 지역변수에 먼저 접근

 * 포인터
  - 컴퓨처가 데이터를 저장할 때 메모리에 저장을 하며 데이터가 저장된 주소를 포함
  - 데이터의 주소값 : 해당 데이터가 저장된 메모리 시작 주소를 의미
  - 포인터 변수 : 할당되어 있는 데이터 주소값을 갖는 변수를 의미
  - 가지고 있는 시작 주소를 갖는 메모리에 간접적으로 접근이 가능
  int* p;
  int variable = 10;
  p = &variable;
	printf("variable 주소 = %d\n", &variable);
	printf("p 가 저장하고있는 주소 : %d\n", p);
	printf("variable = %d\n", variable);
	printf("*p = %d\n", *p);
	printf("p 의 주소 : %d\n", &p);

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
		printf("[%s] :: 입장 가능 최소 레벨 [%d Lv]\n등장몬스터\n", dengeon[i].name, dengeon[i].enterLv);

		for (int j = 0; j < 2; j++)
		{
			printf("%s::LV[%d]::HP[%d]::공격력[%d]\n", dengeon[i].monster[j].Name, dengeon[i].monster[j].Level, dengeon[i].monster[j].Hp, dengeon[i].monster[j].Atk);
		}
		printf("\n\n");
	}

}


int main()
{
	Dengeon dengeon[2];


	for (int i = 0; i < sizeof(dengeon) / sizeof(Dengeon); i++)
	{
		printf("%d번째 던전의 이름을 정해주세요. : ", i + 1);
		scanf("%s", dengeon[i].name);
		printf("%s 던전을 들어갈 수 있는 최소 레벨을 정해주세요. : ", dengeon[i].name);
		scanf("%d", &dengeon[i].enterLv);
		for (int j = 0; j < sizeof(dengeon) / sizeof(Dengeon); j++)
		{
			printf("%d번째 몬스터의 이름을 정해주세요. : ", j + 1);
			scanf("%s", dengeon[i].monster[j].Name);
			printf("%s의 레벨을 정해주세요. : ", dengeon[i].monster[j].Name);
			scanf("%d", &dengeon[i].monster[j].Level);
			printf("%s의 hp를 정해주세요. : ", dengeon[i].monster[j].Name);
			scanf("%d", &dengeon[i].monster[j].Hp);
			printf("%s의 공격력을 정해주세요. : ", dengeon[i].monster[j].Name);
			scanf("%d", &dengeon[i].monster[j].Atk);
			printf("\n");
		}
		printf("\n");
	}

	Check_Dengeon(dengeon);


	return 0;
}