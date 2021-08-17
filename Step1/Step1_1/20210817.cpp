/*
==Note==

2차원 배열의 크기
myArray
myArray[]/myArray[][]
myArray / myArray[]

배열 주소값의 설정
자료형의 크기만큼 주소값이 오름차순으로 정렬

// [] = * : 인덱스는 포인터 개념
// int array[0] : 배열의 0번째 주소를 간접참조하여 값을 로딩
// myArray[0] == *(myArray + 0) / myArray[1] == *(myArray + 1) 
: 한칸씩 이동하지만 주소값은 자료형의 크기만큼 증가
: int *p = myArray + 1 : 배열의 인덱스 1의 값을 참조

포인터 배열
// 주소값을 저장할 때 주소값이 담긴 배열의 주소는 8씩 증가 (64디버그:4, 86디버그:8)

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
		printf("pnum%d의 값 : %d\n", i, *arr[i]);
		printf("배열에 저장되는 pnum%d의 주소 : %d\n", i, arr[i]);
		printf("pnum%d의 주소를 저장한 INDEX의 주소 : %d\n", i, &arr[i]);
		printf("\n");
	}

	printf("pnum1의 주솟값 : %d\n", &pnum1);
	printf("pnum2의 주솟값 : %d\n", &pnum2);
	printf("pnum3의 주솟값 : %d\n", &pnum3);

	return 0;
}