/*
==Note==

// ���ڿ� : ���ڿ��� ���� �����ϱ� ���� NULL ���
// �ƽ�Ű�ڵ� : NULL������ �ƽ�Ű�ڵ� = 0

// strcmp(str1, str2) : ���ڿ� �� (������ ��� 0��ȯ, �ٸ� ��� -1, 1��ȯ)
// strcat(str1, str2) : ���ڿ� ���� (str1 �ڿ� str2�� �߰�)
// strcpy(str1, str2) : ���ڿ� ���� (str1�� str2�� ����)


// scanf()�� �Է¹��� �����͸� ���鹮�ڸ� ������ ������ ����
// ���鹮�� : ' ', '\n', '\t'
// buffer(����) : �Է��� ó���� �� ����ϴ� ��ǻ���� ������ ����
// ���ڸ� scanf()�� �Է¹ް� ���͸� ������ ���Ϳ� �ش��ϴ� ���鹮�ڰ� ���ۿ� ����ǰ� �� �� ���ڿ��� scanf()�� �ް� �Ǹ� �� ������ ���Ͱ� �ڵ����� ����
*/
#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)

int main()
{
	printf("���ڿ��� �Է��ϼ��� : ");
	char str1[256];
	scanf("%s", str1);
	printf("�Է¹��� ���ڿ�[%s] :: ���� [%d]\n", str1, strlen(str1));

	printf("���� ���ڿ��� �Է��ϼ��� : ");
	char str2[256];
	scanf("%s", str2);

	strcat(str1, str2);
	printf("���� ���ڿ�[%s] :: ���� [%d]\n", str1, strlen(str1));

}

