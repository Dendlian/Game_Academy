/*
==Note==

 �迭 : ������ Ÿ��(�ڷ���)�� ������ ��Ƴ��� ������ ����
*/

#include<stdio.h>

int main()
{
	int count = 1;
	int num[4][5];
	for (int i = 3; i >= 0; i--)
	{
		for (int j = 0; j < 5; j++)
		{
			num[i][j] = count;
			count++;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)printf("%d ", num[i][j]);
		printf("\n");
	}

	return 0;
}