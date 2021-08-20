/*
==Note==
// ����ü : ����� ���� �ڷ���

// ����ü ������
   - ����ü ������ ����Ű�� ������
   - ����ü �̸� * ����ü ������ �̸�
   void PrintItemInfo(Item* item)
   - (*wallet).money : ������ ���� ����ü ������ �켱������ ���� ������ ��ȣ�� �ʿ�
   
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


// ����
   - Ư���� �迭 ����, ��Ģ�� ������ ���� �������� ������ ���� �ǹ�
   - rand() �� �̿��Ͽ� ������ ����
   - <stdlib.h> �� �ʿ�

   // ���� �õ带 �����մϴ�.
   srand(GetTickCount64());
   // GetTickCount64() :
   // ��ǻ�Ͱ� ������ ������ ���� �ð��� �и��ʴ����� ��ȯ�ϴ� �Լ�

   // min ~ max ���� ���� ���� ������ ����
   // - rand % (max - min + 1) + min;

// ������(ENUM) 
    // - ���� ������ ������� ����
    // - enum �� Ű���� ���
    enum RandType { Normal = 100 , Rare, Unique };

    enum RandType randType = Normal;
*/


// ex) Up-Down Game
#include<stdio.h>
#include<string.h>
#include<windows.h> //�ܼ�â�� ����
#include<stdlib.h>
#pragma warning(disable : 4996)

// ���̵�
/// - ��
///   ��ȸ : 5
///   ���� ���� ���� : 1 ~ 20
/// - ��
///   ��ȸ : 7
///   ���� ���� ���� : 1 ~ 100
/// - ��
///   ��ȸ : 9
///   ���� ���� ���� : 1 ~ 500

// â�� ������ ��Ÿ�� �� ����� ����
typedef int     BOOL;
#define FALSE   0
#define TRUE    1

// ���̵��� ��Ÿ�� �� ����� ���� Ÿ��
enum GameLevel {LOW, MIDDLE, HIGH};

// �Է� ����� ��Ÿ�� �� ����� ���� Ÿ��
enum InputResult {CORRECT, NOT_CORRECT};

// ���� ������ ��Ÿ�� �� ����� ����ü
typedef struct GameInfo
{
    // ����
    int Rand_num;

    // ���� ��ȸ
    int Life;

    // ������ ���� ����
    int MaxRand_num;
}*PGameInfo;

// ���� ������ �ʱ�ȭ
// - gameInfo : �ʱ�ȭ�� ���� ���� ������ ����
// - Level : ������ ���̵��� ����
void initGame(PGameInfo gameInfo, GameLevel level)
{
    // ���̵��� ���� ���� ������ ����
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
    
    // ������ ����
    gameInfo->Rand_num = (rand() % gameInfo->MaxRand_num) + 1;
}

// ������ ���ڿ��� ���� ���̵� ������ ��ȯ�ϴ� �Լ�
GameLevel getGameLevel(const char* levelString, BOOL* outSucceeded)
{
    // ��ȯ�� ���̵� ������ ������ ����
    GameLevel gameLevel = LOW;

    (*outSucceeded) = TRUE;

    // ���޵� ���ڿ��� ���� �̿��Ͽ� ���̵��� ����
    if (strcmp(levelString, "LOW") == 0)   gameLevel = LOW;
    else if (strcmp(levelString, "MIDDLE") == 0)    gameLevel = MIDDLE;
    else if (strcmp(levelString, "HIGH") == 0)    gameLevel = HIGH;

    // ���� ���̵��� LOW / MIDDLE / HIGH �� �ƴ϶��
    else (*outSucceeded) = FALSE;
  
    // ������ ���̵� ������ ��ȯ
    return gameLevel;
}

// �Է��� ���� ���� ����� ����ϴ� �Լ�
InputResult printResult(PGameInfo gameInfo, int inputValue)
{
    // ��ȯ ���� ������ ����
    InputResult inputResult = CORRECT;

    // ����
    if (gameInfo->Rand_num == inputValue)
        printf("����!\n");
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

// ���� ������ ���� �Լ�
void startGame(PGameInfo gameInfo)
{
    // ���� ��ȸ�� 0�� �ƴ� ��� ������ ����
    while (gameInfo->Life != 0)
    {
        system("cls");
        
        printf("���� ��ȸ : %d \n", gameInfo->Life);
        printf("���ڸ� �Է��ϼ��� : ");
        int inputNumber;
        scanf("%d", &inputNumber);

        // �Էµ� ���� 1 ~ maxRand_num ������ ���� �ƴ� ��� ���Է�
        if (inputNumber<1 || inputNumber > gameInfo->MaxRand_num)
        {
            system("cls");
            printf("�Է� ���� �߸��Ǿ����ϴ�.\n");
            Sleep(500);
            continue;
        }

        // ��ȸ�� �϶�
        gameInfo->Life--;

        // ����� ���
        if (printResult(gameInfo, inputNumber) == CORRECT)
            return;

        Sleep(500);
    }
    system("cls");
    printf("GAME OVER.. \n");
    printf("���� : %�� \n", gameInfo->Rand_num);
    Sleep(500);
}

int main() 
{
	// �õ� ���� ����
    srand(GetTickCount64());

    GameInfo gameInfo;

    while (TRUE)
    {

#pragma region ���̵� �Է�

        system("cls");

        // ���� �Է¹ޱ�
        printf("���� ������ �����ϼ���.\n");
        printf("[ LOW / MIDDLE / HIGH ]\n");
        char inputLevel[256];
        scanf("%s", inputLevel);
#pragma endregion

#pragma region ���̵� ����
        // ���̵� ���� ���� ���θ� ��Ÿ�� ����
        BOOL succeeded;

        // ���̵��� ����
        GameLevel gameLevel = getGameLevel(inputLevel, &succeeded);

        // ���������� ���̵��� �������� �ʾҴٸ� �ٽ� ó������ ����
        if (succeeded == FALSE) continue;
#pragma endregion

        // ���� ���� �ʱ�ȭ
        initGame(&gameInfo, gameLevel);

        // ���� ����
        startGame(&gameInfo);
    }

	return 0;
}