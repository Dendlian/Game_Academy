/*
==Note==

�ݺ���_for��

JUMP�� : ���α׷��� �帧�� ���� ���α׷��� ���� ��ġ�� ���ϴ� ������ �̵���ų �� ����ϴ� ����
// break : ���� �������� �ݺ��̳�, switch ���� ������ �ߴ��ϰ��� �� �� ���
// continue : ���� �������� �ݺ��� �������� �Ѿ�� �ʰ� ó������ ���ư� ����

GOTO�� : ������ ���̺� ��ġ�� �ѹ��� ���α׷��� �帧�� �����Ű�� ����

#include<stdio.h>

int main() {

	int i = 0;
	while (1) {
		if (i == 5)
			goto Teleport;
		i++;
		printf("i=%d\n", i);
	}
	printf("while�� ��\n");

Teleport :
	printf("Telleport !!!\n");

	return 0;
}
*/


//���� : �� �׸���
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