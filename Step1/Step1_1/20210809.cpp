/*
==Note==

 배열 : 동일한 타입(자료형)의 변수를 모아놓은 데이터 집합
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