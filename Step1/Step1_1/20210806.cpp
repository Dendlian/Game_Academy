/*
==Note==

 in �Լ� :  int = �Ű����� / a = �μ�
*/

// ����: �Լ� �̿��Ͽ� ����, ���, �ְ����� ���ϱ�

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

	printf("���� : %d\n", Total(kor, eng, math));
	printf("��� : %d\n", Ave(kor, eng, math));
	printf("�ְ� ���� : %d\n", Best(kor, eng, math));
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