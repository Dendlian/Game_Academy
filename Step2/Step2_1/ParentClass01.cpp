#include "ParentClass01.h"

ParentClass01::ParentClass01()
{cout << "부모의 생성자 호출!" << endl;}

ParentClass01::~ParentClass01()
{cout << "부모의 소멸자 호출!" << endl;}

void ParentClass01::ParentMethod()
{cout << "부모의 함수 호출!" << endl;}
