/*
==Note==

if문
조건을 검사 후 맞다면 해당 구문을 실행

switch문
case : 해당 케이스가 맞는지 검사하고 맞다면 해당 구문을 실행
break : switch문을 탈출
default : 모든 케이스가 맞지 않다면 실행
*/

//예제1 : 아르바이트
// 최저인금 : 8590원
// 8시간 초과시 초과한 시간은 최저 임금x1.5 / 24시간 초과시 일한시간 = 24H

//예제2 : switch문을 이용하여 숫자를 입력하여 짝수인지 홀수인지 나타내는 프로그램

#include<stdio.h>
#pragma warning(disable : 4996)
/* 예제1
int main() {
	int Hour; // 일한 시간
	int Hour_Money = 8590; // 시급
	int Total_Money=0; // 전체 급여
	printf("Input Hours worked : ");
	scanf("%d", &Hour);

	if (Hour <= 8) Total_Money = Hour * Hour_Money;
	else if (Hour > 8 && Hour < 24) {
		Total_Money += 8 * Hour_Money;
		Hour -= 8;
		Hour_Money *= 1.5;
		Total_Money += Hour * Hour_Money;
	}
	else Total_Money = 24 * Hour_Money;

	printf("Totla Money : %d원\n", Total_Money);

	return 0;
}
*/

// 예제2
int main() {

	int num;
	printf("Input Number : ");
	scanf("%d", &num);
	switch (num % 2) {
	case 0: printf("Result : Even\n");
		break;

	case 1: printf("Result : Odd\n");
		break;
	}
	return 0;
}
