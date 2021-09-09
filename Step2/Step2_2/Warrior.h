#pragma once
#include"Job.h"

class Warrior : public Job
{
private :
	float Atk;

public :
	Warrior(string name, string weapon, float atk);
	void Attack();
	void PrintInfo();
};

