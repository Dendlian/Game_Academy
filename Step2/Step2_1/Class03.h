#pragma once
#include"Base.h"


class Weapon
{
private:
	char* Name;
	int Atk;


public:
	Weapon(const char* name, int atk);
	// 복사생성자
	Weapon(const Weapon& weapon);
	~Weapon();
public:
	void PrintWeapon();

};

