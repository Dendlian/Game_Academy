/*
 ==Note==

 //단항연산자 : 증감연산자라고도 불리며 피연산자가 1개인 연산자
	증가연산자, 감소연산자, 전위연산자, 후위연산자
	a++/++a/a--/--a
	a++과 ++a의 차이 : ++a는 연산 후의 결과를 반환, a++는 연산 전의 결과를 반환
		ex) int a = 0;
			printf("%d", a++); 에서 결과값 = 0

 //비교연산자
	반환 : 결과값 (참:1. 거짓:0)
	(A==B) : A와 B가 같을 경우 1을 반환, 다를 경우 0을 반환한다. (=!는 반대)

 //논리연산자 : 참과 거짓으로 이루어지는 진리값이 피연산자인 연산자를 의미
	&&(AND연산자) : 둘 다 참이여야 1
	||(OR연산자) : 둘 중 하나라도 참이라면 1
	!(NOT연산자) : 피연산자의 진리값을 반대로 뒤집는 연산자

 //콤마연산자 : 가장 오른쪽에 있는 연산자가 결과값을 반환
	콤마 연산자 사용시 괄호로 묶어서 사용

 //삼항연산자 : 조건식을 검사하여 참일 때와 거짓일 때의 값을 다르게 반환
	형식 : (조건식) ? 참일때의 값 : 거짓일때의 값
*/


//예제 : 3개의 값을 받아 평균값 및 평가 출력하기
#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int kor, mat, eng;
	float Avg;
	float Avg_Goal;

	printf("INPUT (Your Goal) : ");
	scanf("%f", &Avg_Goal);

	printf("INPUT (KOR) : ");
	scanf("%d", &kor);

	printf("INPUT (MAT) : ");
	scanf("%d", &mat);

	printf("INPUT (ENG) : ");
	scanf("%d", &eng);

	Avg = (float)(kor + mat + eng) / 3;

	printf("Avg : %.2lf\n", Avg);
	printf("Result : %s\n", ((Avg >= Avg_Goal) ? "Good!" : "Bad!"));

	return 0;
}

