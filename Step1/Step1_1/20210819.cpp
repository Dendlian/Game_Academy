/*
==Note==
// 구조체 : 사용자 정의 자료형

// 구조체 포인터
   - 구조체 변수를 가리키는 포인터
   - 구조체 이름 * 구조체 포인터 이름
   void PrintItemInfo(Item* item)
   - (*wallet).money : 포인터 보다 구조체 접근의 우선순위가 높기 때문에 괄호가 필요
   
   typedef struct tag_wallet
   {
   	char ownerName[256];
   	int money;
   }wallet, *Pwallet

   ///// Wallet* == struct tag_Wallet* == Pwallet

   void PrintWalletInfo(Pwallet wallet)
   {
		printf("Wallet = %d byte\n", sizeof(wallet));
		printf("%s Wallet :: %d $ \n", (*wallet).ownerName, (*wallet).money);
   }


// 난수
   - 특정한 배열 순서, 규칙을 가지지 않은 연속적인 임의의 수를 의미
   - rand() 를 이용하여 난수를 생성
   - <stdlib.h> 가 필요

   // 난수 시드를 설정합니다.
   srand(GetTickCount64());
   // GetTickCount64() :
   // 컴퓨터가 부팅할 때부터 지난 시간을 밀리초단위로 반환하는 함수

   // min ~ max 까지 난수 생성 범위를 지정
   // - rand % (max - min + 1) + min;

// 열거형(ENUM) 
    // - 서로 연관된 상수들의 집합
    // - enum 의 키워드 사용
    enum RandType { Normal = 100 , Rare, Unique };

    enum RandType randType = Normal;
*/


// ex) Up-Down Game
#include<stdio.h>
#include<string.h>
#include<windows.h> //콘솔창을 지원
#include<stdlib.h>
#pragma warning(disable : 4996)

// 난이도
/// - 하
///   기회 : 5
///   난수 생성 범위 : 1 ~ 20
/// - 중
///   기회 : 7
///   난수 생성 범위 : 1 ~ 100
/// - 상
///   기회 : 9
///   난수 생성 범위 : 1 ~ 500

// 창과 거짓을 나타낼 때 사용할 형식
typedef int     BOOL;
#define FALSE   0
#define TRUE    1

// 난이도를 나타낼 때 사용할 열거 타입
enum GameLevel {LOW, MIDDLE, HIGH};

// 입력 결과를 나타낼 때 사용할 열거 타입
enum InputResult {CORRECT, NOT_CORRECT};

// 게임 정보를 나타낼 때 사용할 구조체
typedef struct GameInfo
{
    // 정답
    int Rand_num;

    // 남은 기회
    int Life;

    // 난수의 생성 범위
    int MaxRand_num;
}*PGameInfo;

// 게임 정보를 초기화
// - gameInfo : 초기화할 게임 정보 변수를 전달
// - Level : 게임의 난이도를 전달
void initGame(PGameInfo gameInfo, GameLevel level)
{
    // 난이도에 따라 게임 정보를 설정
    switch (level)
    {
    case LOW:
        gameInfo->Life = 5; // == (*gameInfo).Life = 5;
        gameInfo->MaxRand_num = 20;
        break;
    case MIDDLE:
        gameInfo->Life = 7;
        gameInfo->MaxRand_num = 100;
        break;
    case HIGH:
        gameInfo->Life = 9;
        gameInfo->MaxRand_num = 500;
        break;
    }
    
    // 정답을 설정
    gameInfo->Rand_num = (rand() % gameInfo->MaxRand_num) + 1;
}

// 전달한 문자열에 따라 난이도 정보를 반환하는 함수
GameLevel getGameLevel(const char* levelString, BOOL* outSucceeded)
{
    // 반환할 난이도 정보를 저장할 변수
    GameLevel gameLevel = LOW;

    (*outSucceeded) = TRUE;

    // 전달된 문자열의 값을 이용하여 난이도를 설정
    if (strcmp(levelString, "LOW") == 0)   gameLevel = LOW;
    else if (strcmp(levelString, "MIDDLE") == 0)    gameLevel = MIDDLE;
    else if (strcmp(levelString, "HIGH") == 0)    gameLevel = HIGH;

    // 만약 난이도가 LOW / MIDDLE / HIGH 가 아니라면
    else (*outSucceeded) = FALSE;
  
    // 설정한 난이도 정보를 반환
    return gameLevel;
}

// 입력한 값에 따라 결과를 출력하는 함수
InputResult printResult(PGameInfo gameInfo, int inputValue)
{
    // 반환 값을 저장할 변수
    InputResult inputResult = CORRECT;

    // 정답
    if (gameInfo->Rand_num == inputValue)
        printf("정답!\n");
    // UP
    else if (gameInfo->Rand_num > inputValue) 
    {
        printf("UP!\n");
        inputResult = NOT_CORRECT;
    }
    // DOWN
    else
    {
        printf("DOWN!\n");
        inputResult = NOT_CORRECT;
    }
    Sleep(1000);
    return inputResult;
}

// 게임 진행을 위한 함수
void startGame(PGameInfo gameInfo)
{
    // 남은 기회가 0이 아닐 경우 게임을 진행
    while (gameInfo->Life != 0)
    {
        system("cls");
        
        printf("남은 기회 : %d \n", gameInfo->Life);
        printf("숫자를 입력하세요 : ");
        int inputNumber;
        scanf("%d", &inputNumber);

        // 입력된 값이 1 ~ maxRand_num 사이의 값이 아닐 경우 재입력
        if (inputNumber<1 || inputNumber > gameInfo->MaxRand_num)
        {
            system("cls");
            printf("입력 값이 잘못되었습니다.\n");
            Sleep(500);
            continue;
        }

        // 기회를 하락
        gameInfo->Life--;

        // 결과를 출력
        if (printResult(gameInfo, inputNumber) == CORRECT)
            return;

        Sleep(500);
    }
    system("cls");
    printf("GAME OVER.. \n");
    printf("정답 : %ㅇ \n", gameInfo->Rand_num);
    Sleep(500);
}

int main() 
{
	// 시드 값을 설정
    srand(GetTickCount64());

    GameInfo gameInfo;

    while (TRUE)
    {

#pragma region 난이도 입력

        system("cls");

        // 레벨 입력받기
        printf("게임 레벨을 설정하세요.\n");
        printf("[ LOW / MIDDLE / HIGH ]\n");
        char inputLevel[256];
        scanf("%s", inputLevel);
#pragma endregion

#pragma region 난이도 설정
        // 난이도 설정 성공 여부를 나타낼 변수
        BOOL succeeded;

        // 난이도를 설정
        GameLevel gameLevel = getGameLevel(inputLevel, &succeeded);

        // 성공적으로 난이도가 설정되지 않았다면 다시 처음부터 진행
        if (succeeded == FALSE) continue;
#pragma endregion

        // 게임 정보 초기화
        initGame(&gameInfo, gameLevel);

        // 게임 시작
        startGame(&gameInfo);
    }

	return 0;
}