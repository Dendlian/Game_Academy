/*
==Note==

 getchar() : 버퍼의 첫번째 문자를 소멸
 %[^\n]s 를 사용하게 된다면 전의 공백문자를 무시하지 않음
 그러므러 버퍼에 남아있는 개행문자를 모두 제거해야 함


* 구조체
 - 사용자가 정의하는 데이터 형식
 - 다양한 자료형을 하나로 묶을 수 있는 복합 데이터 형식
 - 복합 데이터 형식 : 기본 데이터 형식을 조합하여 만들어낸 데이터 형식
 - 구조체 선언 방법
 struct 구조체명
 {
		구조체 맴버
 };

 typedef : 자료형의 이름을 재정의
 - 여러 별칭의 지정이 가능
 [typedef] [재정의할 자료형 이름] [사용할 별칭]
*/

#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)
// 소문자 대문자 변경하기
void trans_A(char* array);
void trans_a(char* array);

int main()
{
	char Sentence[256];
	scanf("%[^\n]", Sentence);
	int arraylen = strlen(Sentence);

	int num_a = 0, num_A = 0;

	for (int i = 0; i < arraylen; i++)
	{
		if (Sentence[i] != ' ')
		{
			if (Sentence[i] >= 97)num_a++;
			else num_A++;
		}
	}

	printf("소문자 개수 : %d\n", num_a);
	printf("대문자 개수 : %d\n", num_A);


	trans_a(Sentence);
	printf("소문자 출력 : %s\n", Sentence);

	trans_A(Sentence);
	printf("대문자 출력 : %s\n", Sentence);

	printf("소문자 개수 : %d\n", num_a);
	printf("대문자 개수 : %d\n", num_A);

	return 0;
}


void trans_A(char* array)
{
	int arraylen = strlen(array);
	for (int i = 0; i < arraylen; i++)
		if (array[i] != ' ' && array[i] >= 97)array[i] -= 32;
}

void trans_a(char* array)
{
	int arraylen = strlen(array);
	for (int i = 0; i < arraylen; i++)
		if (array[i] != ' ' && array[i] < 97)array[i] += 32;
}


/*
// 구조체 활용하기
typedef struct tag_Item
{
	// 무기의 이름
	char Name[256];
}Item;


int main ()
{
	Item MyItem[3];

	// for(int i=0; i<sizeof(Array) / sizeof(int); i++)
	// weapons 각 요소의 아이템의 이름과 공격력을 입력받는 반복문
	for (int i = 0; i < 3; i++)
	{
		printf("아이템을 입력하세요 : ");
		scanf("%[^\n]", MyItem[i].Name);

		while (getchar() != '\n');
		// getchar() : 버퍼에 저장되어 있는 문자를 맨앞부터 하나씩 반환

		printf("%s\n", MyItem[i].Name);
	}
	return 0;
}
*/