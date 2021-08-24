/*
==Note==
// calloc : int* p = (int*)calloc(1, sizeof(int));
 - ��� ��ҵ��� ���� 0���� �ʱ�ȭ ��Ų��, �޸��� ���� ��ġ�� ��ȯ

 // malloc�� calloc�� ����
  - 1. �Ҵ��� size�� ũ�⿡ ���Ͽ� malloc�� 1��, calloc�� 2���� �μ��� ����
  - 2. malloc�� ��쿡�� �ʱ�ȭ ���� ���� ��� �����Ⱚ�� ������ calloc�� ��� ��ҵ��� ���� 0���� �ʱ�ȭ

  // realloc : realloc(p, size) => p�� ����Ű�� �޸� ������ ũ�⸦ size����Ʈ�� ũ��� ���Ҵ�
   - 1. ���Ҵ� ���� �Էµ� ���� �����Ǹ� ���� �߰��� �޸𸮿��� �����Ⱚ�� ����
   - 2. realloc()�� ����ϸ� ���Ҵ� �������� �޸��� ��ġ(�ּ�)�� �ٲ� �� �����Ƿ�, ��ȯ���� �ٽ� ������ ������ ����
  
  // �迭 : ������ ��� (int * const p)
   - �ּҰ��� ������ �Ұ��������� ���������� ���� ���� ������ ����

  // BubbleSort.c : ��������
   - 1. ���� ������ �� ����� ���� �˻��Ͽ� �����ϴ� �˰���
   - 2. ������ �� ���� ��Ҹ� ���Ͽ� ũ�Ⱑ ū ������� �Ǿ����� ������ ���� ��ȯ

  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#pragma warning (disable : 4996)

 // min ~ max ������ ������ ��ȯ���ִ� �Լ�
int randRange(int min, int max)
{
    return (rand() % ((max + 1) - min)) + min;
}

// elemCount * size(int) ��ŭ�� �޸𸮸� �����Ҵ��ϰ�
// ������ ��ҿ� min ~ max ������ ������ ���� ä���ִ� �Լ�
int* InitArray(int elemCount, int min, int max)
{
    int* array = (int*)calloc(elemCount, sizeof(int));

    for (int i = 0; i < elemCount; ++i)
        array[i] = randRange(min, max);

    return array;
}

void printArray(const int* array, int count)
{
    system("cls");

    for (int i = 0; i < count; ++i)
    {
        for (int j = 0; j < array[i]; ++j)
            printf("��");
        printf("\n");
    }

    printf("\n");
}

// ���� ��������
void bubbleSort(int array[], int count)
{
    int num = 0;
    while (1)
    {
        for (int i = 0; i < count; i++)
        {
            if (i != (count - 1) && array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                num++;
            }
        }
        if (num == 0)break;
        else num = 0;
    }
}

int main() 
{
    int length = 20;

    int* myArray = InitArray(length, 1, 10);

    printArray(myArray, length);

    Sleep(1000);

    bubbleSort(myArray, length);

    printArray(myArray, length);

}