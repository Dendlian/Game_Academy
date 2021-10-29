/*
==Note==

// 포인터 배열 : 주소값을 저장할 수 있는 배열
// 배열 포인터 : 배열의 시작 주소값을 가리킬 수 있는 포인터
   - 배열 포인터의 선언 방법
     자료형(*변수이름)[1차원 배열 요소개수] = 배열
     int arr[2][3]
     int(*pArr)[3] = arr;


// 포인터 매개변수

   - 값에 의한 전달 (call by value)
   - 인수에 전달되는 변수의 값을 함수내의 매개변수에 복사하는 방식
   - 이 때 복사된 값으로 초기화된 매개변수는 인수로 전달된 변수와는 별개의 변수
   - 함수 내에서 매개 변수의 조작은 인수로 전달되는 변수에 영향을 주는 것이 불가
 
   - 참조에 의한 전달 (call by reference)
   - 인수의 변수의 값을 전달하는 것이 아닌, 해당 변수의 주소값을 전달
   - 즉 함수의 매개변수에 인수로 전달된 변수의 원래 주소값을 저장
   - 이 방식을 사용하면 인수로 전달된 변수의 값을 함수 내에서 변경 가능

// 함수 포인터
   - 함수의 이름은 함수가 존재하는 메모리 주소
   - 이러한 함수를 대입하여 호출할 함수를 가리키는 포인터 변수


   - PrintHello();
     () : 함수 호출 연산자
     함수의 이름을 통해서 주소를 받아 그 주소안에 들어있는 코드들을 실행

   - 함수 포인터 선언
     반환타입 (*함수이름)();
 
     void (*pPrintHello)();
     //가르킬 함수의 자료형이 동일해야 선언 가능

     pPrintHello = PrintHello;
     //함수 포인터가 가리키는 함수를 호출
    
     pPrintHello();


     double (*fnCalc)(int, int) = NULL;
     // NULL (널 포인터)
     // 널 포인터로 초기화시 포인터는 아무것도 가르키지 않은 상태를 유지
*/

#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)

void Swap(int* num1, int* num2)
{
    int Temp;
    Temp = *num1;
    *num1 = *num2;
    *num2 = Temp;
}


int main() 
{
    int num1, num2;
    printf("INPUT A : ");
    scanf("%d", &num1);
    printf("INPUT B : ");
    scanf("%d", &num2);

    int* pnum1 = &num1;
    int* pnum2 = &num2;

    //Swap(pnum1, pnum2);

    void(*pSwap)(int*, int*) = NULL;
    pSwap = Swap;
    pSwap(pnum1, pnum2);

    printf("A = %d\n", num1);
    printf("B = %d\n", num2);
    return 0;
}