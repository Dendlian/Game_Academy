#include "F_Store.h"

F_Store::F_Store()
{
	isPlaying = 1;
	Money = 10000;
}

void F_Store::Select_Menu()
{
	system("cls");

	int Select_num;
	cout << "SELECT NUMBER!" << endl << "1. Add thing to sell" << endl << "2. Done" << endl;
	cout << "INPUT : ";
	cin >> Select_num;

	if (Select_num == 1)
		Select_Sell();
	else if (Select_num == 2)
		Buy_F();
	else
	{ 
		cout << "Wrong Number!" << endl;
		Sleep(500);
	}
		
}

void F_Store::Select_Sell()
{
	system("cls");
	string K_Name;
	UINT V_Price;

	cout << "What subject do you want to sell?" << endl;
	cout << "INPUT : ";
	cin >> K_Name;
	
	cout << "How much is that?" << endl;
	cout << "INPUT : ";
	cin >> V_Price;

	fruits[K_Name] = V_Price;
}

void F_Store::Buy_F()
{
	while (true)
	{
		system("cls");
		string K_Name;

		// 출력
		PrintMap(fruits);
		cout << "==========================================" << endl;
		cout << "Money : " << Money << endl;
		cout << endl << "Whitch one you want to buy?";
		cout << " (If you want finish, Input END)" << endl << endl;
		cout << "INPUT : ";
		cin >> K_Name;

		// END 입력시 종료
		if (K_Name == "END")
		{
			cout << "You leave the Store" << endl;
			Sleep(1000);
			isPlaying = 0;
			break;
		}

		auto iter = fruits.find(K_Name);

		// 과일 구매
		if (iter == fruits.end())
		{
			cout << "There is no " << K_Name << endl;
			Sleep(1000);
		}
		else
		{
			if (Money >= iter->second)
			{
				cout << "Complete!" << endl;
				Money -= iter->second;
				fruits.erase(K_Name);
				Sleep(1000);
			}
			else
			{
				cout << "Not enough Money!" << endl;
				Sleep(1000);
			}
		}

		// 매진시 종료
		if (fruits.empty())
		{
			system("cls");
			cout << "It is Empty!" << endl << "You leave the Store" << endl;
			Sleep(1000);
			isPlaying = 0;
			break;
		}
	}
}


/*
auto iter = fruits.find("포도");

if (iter == fruits.end()) cout << "포도란 요소는 존재하지 않습니다." << endl;
	else
	{
		cout << "요소를 찾았습니다!" << endl;
		cout << iter->first << " : " << iter->second << endl;
	}

*/