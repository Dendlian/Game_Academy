/*
==Note==

// signed vs unsigned : 자료형 앞에 unsigned를 붙히게 되면 sogned가 나타낼 수 있던 자료형의 음수의 범위만큼 양수를 더 표기 가능
	int(4byte) : -2100000000 ~ 2100000000 / unsigned int(4byte) : 0 ~ 4200000000

// 변수 선언시 주의사항!
	1. 변수명은 영문자, 숫자, 언더스코어로만 구성 가능
	2. 변수명은 대소문자를 구분 (int A != int a)
	3. 변수의 이름 사이에는 공백 포함 불가
	4. 변수의 이름으로 C언어에서 미리 정의된 키워드는 사용 불가

// sizeof() 연산자
	특정한 변수나 타입, 데이터가 몇 byte를 차지하는지 정수형태로 확인 가능

// 복합대입연산자 : 왼쪽 치연산자에 오른쪽 데이터를 대입

// 형변환 : 어떠한 타입을 다른 타입으로 바꿔주는 것
	묵시적 형변환 : 사용자가 따로 표시하지 않더라도 컴퓨터가 자동으로 수행하는 형변환
				   대입하는 형태에 따라 값의 손실에 대한 경고 발생 가능
	명시적 형변환 : 사용자가 직접 형태를 변환하는 형변환
				   경고문구가 발생X
*/


#include<stdio.h>
#pragma warning(disable:4996)
//컴퓨터에게 4996 오류를 무시 (scanf 사용 오류 무시)

//예제 : 3개의 값을 받아 평균값 출력하기
int main() {

	int kor, mat, eng;
	float Avg;

	printf("INPUT (KOR) : ");
	scanf("%d", &kor);

	printf("INPUT (MAT) : ");
	scanf("%d", &mat);

	printf("INPUT (ENG) : ");
	scanf("%d", &eng);

	Avg = (float)(kor + mat + eng) / 3;

	printf("Avg : %.2lf", Avg);

	return 0;
}