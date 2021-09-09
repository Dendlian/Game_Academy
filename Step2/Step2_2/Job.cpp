#include "Job.h"

Job::Job(string name, string weapon)
{
	Name = name;
	Weapon = weapon;
}

void Job::PrintInfo()
{
	cout << "Job : " << Name << endl;
	cout << "Weapon : " << Weapon << endl;
}
