/*
==Note==

반복문 : 특정 조건을 만족하는 동안 명령을 계속 반복하여 실행하도록 하는 문장
while문 / for문

do while문 : 조건식을 평가하기 전에 무조건 처음 한 번 do 구문을 실행
*/

//예제 : 구구단 출력하기
#include<stdio.h>
#pragma warning(disable : 4996)

int main() {
	/*
	int dan_1 = 1, dan_2 = 1;

	while (dan_1 < 10)
	{

		printf("%d단\n", dan_1);
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
			if (dan_2 == 1)printf("%d단\t\t%d단\t\t%d단\n", dan_1, dan_1 + 1, dan_1 + 2);
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
