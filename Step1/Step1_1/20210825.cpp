/*
==Note==

 // 전처리 지시자
  - 실제 컴파일이 시작되기 전에 컴파일러에게 특별한 명령을 미리 처리하도록 지시할 때 사용하는 구문
  - '#'으로 시작되며, 한 라인에 한 개의 전처리기 명령만을 사용
  - 전처리기 지시어는 끝에 세미콜론 미사용

 // #include
  - 지정한 파일의 내용을 읽어와 지시자가 작성된 파일에 포함
  - 사용자 정의 헤더파일 : 큰 따옴표 사용	(#inlcude "myHeader.h")
  - 제공되는 헤더파일 : 꺽쇠사용	(#include <stdio.h>)

 // 헤더파일이란?
  - 소스코드 문에서 사용할 내용들이 정의되어 있는 파일
  - 헤더 파일을 포함함으로서 헤더파일에 있는 함수나 변수등을 사용 가능

 // #define : 심볼, 또는 매크로 상수 / 함수를 정의

 #define DEBUG
 #define RELEASE
   - 심볼 DEBUG, RELEASE를 선언

 #define PI 3.14f
   - 매크로 상수 선언
   - 3.14f를 PI 키워드로 정의
   - 사용시 PI가 3.14f라는 코드로 치환

 #define plus(x,y)(x+y)
   - 매크로 함수 정의
   - (x+y)코드를 plus(x,y)로 정의
   - 사용시 plus(x,y) 코드가 (x+y)라는 코드로 치환


 #define	ANDROID			0x0001
 #define	IOS				0x0001
 #define	PC				0x0001
 #define	PLATFORM		ANDROID
   - #if, #elif, #else : 구문의 컴파일 여부를 조건에 따라 결정
   - 위 구문 사용시 #endif로 종료 여부를 설정
   /// 조건에 따라 컴파일
  
   #if PLATFORM == IOS
   #define ISIOS printf("플랫폼은 IOS 입니다.\n");

   #elif PLATFORM == 0x0003
   #define ISPC printf("플랫폼은 PC 입니다.\n");

   #else 
   #define ISANDROID printf("플랫폼은 ANDROID 입니다.\n");

   #endif

 #pragma warning(disable : 4996)
   - #pragma warning(disable : code)
   - 지정한 코드의 경고 메세지를 무시

 #pragma region
   - 확장 / 축소할 수 있는 코드블록을 생성
   - #pragma endregion으로 종료 여부를 설정

   decltype에 대해 알아오시오
 */

#include "Test.h"

typedef struct tag_Item
{
	char Name[256];
	int getsu;

}*pItem, Item;


int main()
{
	//Item Myitem;
	//strcpy(Myitem.Name, "목검");
	//Myitem.getsu = 10;

	pItem Myitem;
	strcpy(Myitem->Name, "목검");
	Myitem->getsu = 10;

	printf("%s, %d", Myitem->Name, Myitem->getsu);

	return 0;
}