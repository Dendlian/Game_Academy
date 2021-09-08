#include "ChildClass01.h"

ChildClass01::ChildClass01()
{cout << "자식의 생성자 호출!" << endl;}

ChildClass01::~ChildClass01()
{cout << "자식의 소멸자 호출!" << endl;}

void ChildClass01::ChildMehtod()
{cout << "자식의 함수 호출!" << endl;}
