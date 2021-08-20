#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#pragma warning (disable : 4996)

enum F_LEVEL {ZERO, ONE, TWO, THREE, FOUR, FIVE};
enum F_PERCENT { PZERO = 90, PONE = 70, PTWO = 50, PTHREE = 30, PFOUR = 10 };

typedef struct tag_Item
{
	char		Name[256];
	int			F_Stone;
	F_LEVEL		F_Level;
	F_PERCENT	F_Percent;
}Item, *Pitem;

void InitGame(Pitem item) 
{
	printf("아이템의 이름을 입력하세요 : ");
	char GetName[256];
	scanf("%s", GetName);
	strcpy(item->Name, GetName);
	item->F_Stone = 10;
	item->F_Level = ZERO;
	item->F_Percent = PZERO;
}

void ShowItem(Pitem item)
{
	printf("아이템 이름 : %s\n", item->Name);
	printf("강화 수치 : ");
	for (int i = 0; i < item->F_Level; i++) printf("★");
	printf("\n강화석 개수 : %d\n", item->F_Stone);
	if (item->F_Level != 5)
		printf("%d -> %d 강 성공 확률 : %d%%\n", item->F_Level, item->F_Level + 1, item->F_Percent);
	else printf("강화 상채가 최대치입니다.\n");
}

void PlayGame(Pitem item)
{
	int percent = rand() % 100 + 1;
	switch (item->F_Level)
	{
	case ZERO:
		if (percent < item->F_Percent)
		{
			printf("강화 성공!\n");
			item->F_Stone--;
			item->F_Level=ONE;
			item->F_Percent = PONE;
		}
		else 
		{
			printf("강화 실패!\n");
			item->F_Stone--;
		}
		break;

	case ONE:
		if (percent < item->F_Percent)
		{
			printf("강화 성공!\n");
			item->F_Stone--;
			item->F_Level = TWO;
			item->F_Percent = PTWO;
		}
		else
		{
			printf("강화 실패!\n");
			item->F_Stone--;
		}
		break;

	case TWO:
		if (percent < item->F_Percent)
		{
			printf("강화 성공!\n");
			item->F_Stone--;
			item->F_Level = THREE;
			item->F_Percent = PTHREE;
		}
		else
		{
			printf("강화 실패!\n");
			item->F_Stone--;
		}
		break;

	case THREE:
		if (percent < item->F_Percent)
		{
			printf("강화 성공!\n");
			item->F_Stone--;
			item->F_Level = FOUR;
			item->F_Percent = PFOUR;
		}
		else
		{
			printf("강화 실패!\n");
			item->F_Stone--;
		}
		break;

	case FOUR:
		if (percent < item->F_Percent)
		{
			printf("강화 성공!\n");
			item->F_Stone--;
			item->F_Level = FIVE;
		}
		else
		{
			printf("강화 실패!\n");
			item->F_Stone--;
		}
		break;

	case FIVE:
		printf("더이상 강화할 수 없습니다.\n");
		break;
	}

	Sleep(1000);
}

int main() 
{
	srand(GetTickCount64());

	Item MyItem;
	InitGame(&MyItem);

	while (1) {
		system("cls");
		ShowItem(&MyItem);
		int nSelect;
		printf("============================");
		printf("\n1_강화시작 \n2_강화종료 \n입력 : ");
		scanf("%d", &nSelect);

		if (nSelect == 2) 
		{
			printf("강화를 종료합니다.\n");
			break;
		}
		else if (nSelect == 1)
		{
			if (MyItem.F_Stone == 0)
			{
				printf("강화할 강화석이 없습니다!");
				Sleep(1000);
				continue;
			}
			else
			{
				PlayGame(&MyItem);
			}
		}
		else 
		{
			printf("잘못된 숫자를 입력하였습니다. \n");
			Sleep(1000);
		}
			
	}

	return 0;
}
