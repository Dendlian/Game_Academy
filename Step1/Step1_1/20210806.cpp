/*
==Note==

 in 함수 :  int = 매개변수 / a = 인수
*/

// 예제: 함수 이용하여 총점, 평균, 최고점수 구하기

#include<stdio.h>
#pragma warning(disable:4996)

int Total(int kor, int eng, int math);
int Ave(int kor, int eng, int math);
int Best(int kor, int eng, int math);


int main()
{
	int kor, eng, math;
	printf("input__\nkor:");
	scanf("%d", &kor);
	printf("eng:");
	scanf("%d", &eng);
	printf("math:");
	scanf("%d", &math);

	printf("총점 : %d\n", Total(kor, eng, math));
	printf("평균 : %d\n", Ave(kor, eng, math));
	printf("최고 점수 : %d\n", Best(kor, eng, math));
	return 0;
}


int Total(int kor, int eng, int math)
{
	return kor + eng + math;
}

int Ave(int kor, int eng, int math)
{
	return float(kor + eng + math) / 3;
}

int Best(int kor, int eng, int math)
{
	int max = (kor > eng) ? kor : eng;
	max = (max > math) ? max : math;
	return max;
}