/*
==Note==

if��
������ �˻� �� �´ٸ� �ش� ������ ����

switch��
case : �ش� ���̽��� �´��� �˻��ϰ� �´ٸ� �ش� ������ ����
break : switch���� Ż��
default : ��� ���̽��� ���� �ʴٸ� ����
*/

//����1 : �Ƹ�����Ʈ
// �����α� : 8590��
// 8�ð� �ʰ��� �ʰ��� �ð��� ���� �ӱ�x1.5 / 24�ð� �ʰ��� ���ѽð� = 24H

//����2 : switch���� �̿��Ͽ� ���ڸ� �Է��Ͽ� ¦������ Ȧ������ ��Ÿ���� ���α׷�

#include<stdio.h>
#pragma warning(disable : 4996)
/* ����1
int main() {
	int Hour; // ���� �ð�
	int Hour_Money = 8590; // �ñ�
	int Total_Money=0; // ��ü �޿�
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

	printf("Totla Money : %d��\n", Total_Money);

	return 0;
}
*/

// ����2
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
