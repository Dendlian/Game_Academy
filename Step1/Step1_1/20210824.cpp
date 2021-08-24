/*
==Note==
// calloc : int* p = (int*)calloc(1, sizeof(int));
 - 모든 요소들의 값을 0으로 초기화 시킨뒤, 메모리의 시작 위치를 반환

 // malloc과 calloc의 차이
  - 1. 할당할 size의 크기에 대하여 malloc은 1개, calloc은 2개의 인수가 존재
  - 2. malloc의 경우에는 초기화 하지 않을 경우 쓰레기값이 들어가지만 calloc은 모든 요소들의 값을 0으로 초기화

  // realloc : realloc(p, size) => p가 가리키는 메모리 영역의 크기를 size바이트의 크기로 재할당
   - 1. 재할당 전에 입력된 값은 유지되며 새로 추가된 메모리에는 쓰레기값이 존재
   - 2. realloc()을 사용하면 재할당 과정에서 메모리의 위치(주소)가 바뀔 수 있으므로, 반환값을 다시 포인터 변수로 설정
  
  // 배열 : 포인터 상수 (int * const p)
   - 주소값의 변경이 불가능하지만 간접참조로 인한 값이 변경이 가능

  // BubbleSort.c : 버블정렬
   - 1. 서로 인접한 두 요소의 값을 검사하여 정렬하는 알고리즘
   - 2. 인접한 두 개의 요소를 비교하여 크기가 큰 순서대로 되어있지 않으면 서로 교환

  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#pragma warning (disable : 4996)

 // min ~ max 사이의 난수를 반환해주는 함수
int randRange(int min, int max)
{
    return (rand() % ((max + 1) - min)) + min;
}

// elemCount * size(int) 만큼의 메모리를 동적할당하고
// 각각의 요소에 min ~ max 까지의 랜덤한 값을 채워넣는 함수
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
            printf("■");
        printf("\n");
    }

    printf("\n");
}

// 과제 버블정렬
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