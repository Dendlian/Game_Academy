/*
==Note==

�ݺ��� : Ư�� ������ �����ϴ� ���� ����� ��� �ݺ��Ͽ� �����ϵ��� �ϴ� ����
while�� / for��

do while�� : ���ǽ��� ���ϱ� ���� ������ ó�� �� �� do ������ ����
*/

//���� : ������ ����ϱ�
#include<stdio.h>
#pragma warning(disable : 4996)

int main() {
	/*
	int dan_1 = 1, dan_2 = 1;

	while (dan_1 < 10)
	{

		printf("%d��\n", dan_1);
		while (dan_2 < 10) {
			printf("%d X %d = %d\n", dan_1, dan_2, dan_1 * dan_2);
			dan_2++;
		}
		printf("====================================\n");
		dan_2 = 1;
		dan_1++;
	}
	*/

	int dan_1 = 1, dan_2 = 1;
	int tab = 0;

	while (dan_1 < 10)
	{
		while (dan_2 < 10) {
			if (dan_2 == 1)printf("%d��\t\t%d��\t\t%d��\n", dan_1, dan_1 + 1, dan_1 + 2);
			while (tab < 3) {
				printf("%d X %d = %d\t", dan_1, dan_2, dan_1 * dan_2);
				dan_1++;
				tab++;
			}
			printf("\n");
			dan_2++;
			dan_1 -= 3;
			tab = 0;
		}
		printf("\n");
		dan_1 += 3;
		dan_2 = 1;
	}


	return 0;
}
