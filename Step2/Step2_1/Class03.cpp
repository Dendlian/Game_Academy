#include "Class03.h"

Weapon::Weapon(const char* name, int atk)
{
	Atk = atk;
	Name = new char[256];
	strcpy(Name, name);
}

Weapon::Weapon(const Weapon& weapon)
{
	Atk = weapon.Atk;
	Name = new char[256];
	strcpy(Name, weapon.Name);
}

Weapon::~Weapon()
{
	delete[] Name;
	Name = nullptr;
}

void Weapon::PrintWeapon()
{
	cout << Name << "::" << Atk << endl;
}
