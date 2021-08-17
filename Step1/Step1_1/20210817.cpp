/*
==Note==

2���� �迭�� ũ��
myArray
myArray[]/myArray[][]
myArray / myArray[]

�迭 �ּҰ��� ����
�ڷ����� ũ�⸸ŭ �ּҰ��� ������������ ����

// [] = * : �ε����� ������ ����
// int array[0] : �迭�� 0��° �ּҸ� ���������Ͽ� ���� �ε�
// myArray[0] == *(myArray + 0) / myArray[1] == *(myArray + 1) 
: ��ĭ�� �̵������� �ּҰ��� �ڷ����� ũ�⸸ŭ ����
: int *p = myArray + 1 : �迭�� �ε��� 1�� ���� ����

������ �迭
// �ּҰ��� ������ �� �ּҰ��� ��� �迭�� �ּҴ� 8�� ���� (64�����:4, 86�����:8)

*/


#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

int main()
{
	int pnum1, pnum2, pnum3;
	scanf("%d %d %d", &pnum1, &pnum2, &pnum3);

	int* arr[3] = { &pnum1,&pnum2,&pnum3 };

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("pnum%d�� �� : %d\n", i, *arr[i]);
		printf("�迭�� ����Ǵ� pnum%d�� �ּ� : %d\n", i, arr[i]);
		printf("pnum%d�� �ּҸ� ������ INDEX�� �ּ� : %d\n", i, &arr[i]);
		printf("\n");
	}

	printf("pnum1�� �ּڰ� : %d\n", &pnum1);
	printf("pnum2�� �ּڰ� : %d\n", &pnum2);
	printf("pnum3�� �ּڰ� : %d\n", &pnum3);

	return 0;
}