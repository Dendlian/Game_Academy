/*
==Note==

반복문_for문

JUMP문 : 프로그램의 흐름을 끊고 프로그램의 실행 위치를 원하는 곳으로 이동시킬 때 사용하는 구문
// break : 현재 실행중인 반복이나, switch 문의 실행을 중단하고자 할 때 사용
// continue : 현재 실행중인 반복을 다음으로 넘어가지 않고 처음으로 돌아가 실행

GOTO문 : 지정한 레이블 위치로 한번에 프로그램의 흐름을 도약시키는 구문

#include<stdio.h>

int main() {

	int i = 0;
	while (1) {
		if (i == 5)
			goto Teleport;
		i++;
		printf("i=%d\n", i);
	}
	printf("while문 끝\n");

Teleport :
	printf("Telleport !!!\n");

	return 0;
}
*/


//예제 : 별 그리기
#include<stdio.h>

int main() {

	for (int i = 1; i <= 5; i++) {
		for (int k = 1; k <= 6 - i; k++) {
			printf("  ");
		}

		for (int j = 1; j <= 2 * i - 1; j++) {
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}