/*
==Note==

const int*p1 = &num1;
// �����ϴ� �ּ� ���� O
// ���� ������ �̿��� �� ���� X

int* const p2 = &num2;
// �����ϴ� �ּ� ���� X
// ���� ������ �̿��� �� ���� O

const int* const p3;
// �� �� �Ұ���

 * ����������
 // ������ ������ �ּҸ� �����ϴ� ������

*/

#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

int main() 
{
	int num = 10;
	int* pNum = &num;
	int* pNum2 = pNum;
	int** ppNum = &pNum;

	printf("%d, %d, %d, %d\n", **ppNum, *ppNum, ppNum, &ppNum);
	printf("%d, %d, %d\n", *pNum, pNum, &pNum);
	printf("%d, %d, %d\n", *pNum2, pNum2, &pNum);
	printf("%d, %d\n", num, &num);

	return 0;
}