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
	printf("�������� �̸��� �Է��ϼ��� : ");
	char GetName[256];
	scanf("%s", GetName);
	strcpy(item->Name, GetName);
	item->F_Stone = 10;
	item->F_Level = ZERO;
	item->F_Percent = PZERO;
}

void ShowItem(Pitem item)
{
	printf("������ �̸� : %s\n", item->Name);
	printf("��ȭ ��ġ : ");
	for (int i = 0; i < item->F_Level; i++) printf("��");
	printf("\n��ȭ�� ���� : %d\n", item->F_Stone);
	if (item->F_Level != 5)
		printf("%d -> %d �� ���� Ȯ�� : %d%%\n", item->F_Level, item->F_Level + 1, item->F_Percent);
	else printf("��ȭ ��ä�� �ִ�ġ�Դϴ�.\n");
}

void PlayGame(Pitem item)
{
	int percent = rand() % 100 + 1;
	switch (item->F_Level)
	{
	case ZERO:
		if (percent < item->F_Percent)
		{
			printf("��ȭ ����!\n");
			item->F_Stone--;
			item->F_Level=ONE;
			item->F_Percent = PONE;
		}
		else 
		{
			printf("��ȭ ����!\n");
			item->F_Stone--;
		}
		break;

	case ONE:
		if (percent < item->F_Percent)
		{
			printf("��ȭ ����!\n");
			item->F_Stone--;
			item->F_Level = TWO;
			item->F_Percent = PTWO;
		}
		else
		{
			printf("��ȭ ����!\n");
			item->F_Stone--;
		}
		break;

	case TWO:
		if (percent < item->F_Percent)
		{
			printf("��ȭ ����!\n");
			item->F_Stone--;
			item->F_Level = THREE;
			item->F_Percent = PTHREE;
		}
		else
		{
			printf("��ȭ ����!\n");
			item->F_Stone--;
		}
		break;

	case THREE:
		if (percent < item->F_Percent)
		{
			printf("��ȭ ����!\n");
			item->F_Stone--;
			item->F_Level = FOUR;
			item->F_Percent = PFOUR;
		}
		else
		{
			printf("��ȭ ����!\n");
			item->F_Stone--;
		}
		break;

	case FOUR:
		if (percent < item->F_Percent)
		{
			printf("��ȭ ����!\n");
			item->F_Stone--;
			item->F_Level = FIVE;
		}
		else
		{
			printf("��ȭ ����!\n");
			item->F_Stone--;
		}
		break;

	case FIVE:
		printf("���̻� ��ȭ�� �� �����ϴ�.\n");
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
		printf("\n1_��ȭ���� \n2_��ȭ���� \n�Է� : ");
		scanf("%d", &nSelect);

		if (nSelect == 2) 
		{
			printf("��ȭ�� �����մϴ�.\n");
			break;
		}
		else if (nSelect == 1)
		{
			if (MyItem.F_Stone == 0)
			{
				printf("��ȭ�� ��ȭ���� �����ϴ�!");
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
			printf("�߸��� ���ڸ� �Է��Ͽ����ϴ�. \n");
			Sleep(1000);
		}
			
	}

	return 0;
}
