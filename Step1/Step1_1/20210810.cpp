/*
==Note==

// 문자열 : 문자열의 끝을 구분하기 위해 NULL 사용
// 아스키코드 : NULL문자의 아스키코드 = 0

// strcmp(str1, str2) : 문자열 비교 (동일한 경우 0반환, 다른 경우 -1, 1반환)
// strcat(str1, str2) : 문자열 연결 (str1 뒤에 str2를 추가)
// strcpy(str1, str2) : 문자열 복사 (str1에 str2를 복사)


// scanf()는 입력받은 데이터를 공백문자를 만나기 전까지 저장
// 공백문자 : ' ', '\n', '\t'
// buffer(버퍼) : 입력을 처리할 때 사용하는 컴퓨터의 데이터 공간
// 숫자를 scanf()로 입력받고 엔터를 누르면 엔터에 해당하는 공백문자가 버퍼에 저장되고 그 후 문자열을 scanf()로 받게 되면 그 공간에 엔터가 자동으로 저장
*/
#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)

int main()
{
	printf("문자열을 입력하세요 : ");
	char str1[256];
	scanf("%s", str1);
	printf("입력받은 문자열[%s] :: 길이 [%d]\n", str1, strlen(str1));

	printf("이을 문자열을 입력하세요 : ");
	char str2[256];
	scanf("%s", str2);

	strcat(str1, str2);
	printf("이은 문자열[%s] :: 길이 [%d]\n", str1, strlen(str1));

}

