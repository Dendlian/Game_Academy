/*
==Note==

 getchar() : ������ ù��° ���ڸ� �Ҹ�
 %[^\n]s �� ����ϰ� �ȴٸ� ���� ���鹮�ڸ� �������� ����
 �׷��Ƿ� ���ۿ� �����ִ� ���๮�ڸ� ��� �����ؾ� ��


* ����ü
 - ����ڰ� �����ϴ� ������ ����
 - �پ��� �ڷ����� �ϳ��� ���� �� �ִ� ���� ������ ����
 - ���� ������ ���� : �⺻ ������ ������ �����Ͽ� ���� ������ ����
 - ����ü ���� ���
 struct ����ü��
 {
		����ü �ɹ�
 };

 typedef : �ڷ����� �̸��� ������
 - ���� ��Ī�� ������ ����
 [typedef] [�������� �ڷ��� �̸�] [����� ��Ī]
*/

#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)
// �ҹ��� �빮�� �����ϱ�
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

	printf("�ҹ��� ���� : %d\n", num_a);
	printf("�빮�� ���� : %d\n", num_A);


	trans_a(Sentence);
	printf("�ҹ��� ��� : %s\n", Sentence);

	trans_A(Sentence);
	printf("�빮�� ��� : %s\n", Sentence);

	printf("�ҹ��� ���� : %d\n", num_a);
	printf("�빮�� ���� : %d\n", num_A);

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
// ����ü Ȱ���ϱ�
typedef struct tag_Item
{
	// ������ �̸�
	char Name[256];
}Item;


int main ()
{
	Item MyItem[3];

	// for(int i=0; i<sizeof(Array) / sizeof(int); i++)
	// weapons �� ����� �������� �̸��� ���ݷ��� �Է¹޴� �ݺ���
	for (int i = 0; i < 3; i++)
	{
		printf("�������� �Է��ϼ��� : ");
		scanf("%[^\n]", MyItem[i].Name);

		while (getchar() != '\n');
		// getchar() : ���ۿ� ����Ǿ� �ִ� ���ڸ� �Ǿպ��� �ϳ��� ��ȯ

		printf("%s\n", MyItem[i].Name);
	}
	return 0;
}
*/