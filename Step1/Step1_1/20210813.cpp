/*
==Note==

const int*p1 = &num1;
// 저장하는 주소 변경 O
// 간접 참조를 이용한 값 변경 X

int* const p2 = &num2;
// 저장하는 주소 변경 X
// 간접 참조를 이용한 값 변경 O

const int* const p3;
// 둘 다 불가능

 * 다중포인터
 // 포인터 변수의 주소를 저장하는 포인터

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