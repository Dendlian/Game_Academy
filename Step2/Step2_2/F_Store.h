#include<iostream>
#include<string.h>
#include<windows.h>
#include<map>
#define FORCEINLINE __forceinline
typedef unsigned int UINT;
using namespace std;

#define PrintMap(map) for (auto iter = fruits.begin(); iter != fruits.end(); iter++){ cout << iter->first << " : " << iter->second << endl; }

class F_Store
{
private:
	map<string, UINT>fruits;
	bool isPlaying;
	UINT Money;

public:

	F_Store();

	void Select_Menu();
	void Select_Sell();
	void Buy_F();

	FORCEINLINE bool SetPlay(bool isplaying)
	{ isPlaying = isplaying; }

	FORCEINLINE bool GetPlay()
	{ return isPlaying;}
};
