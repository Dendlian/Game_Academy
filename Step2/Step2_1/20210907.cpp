/*
==Note==

 // 얕은 복사
	- 포인터가 가리키는 데이터는 빼놓고 피상적으로 그 변수값, 즉 주소값만 복사하여 맴버 대 맴버의 복사를 수행
	- Name = weapon.Name;

 // 깊은 복사
	- 포인터 변수값만 복제하는 것이 아닌, 그 변수에 맥락에 맞게 연관된 데이터까지 온전하게 복제

 // static
	- 정적 변수, 정적 함수임을 의미
	- 변수에 선언될 경우 : 정적 변수, 정적 전역 변수
	- 함수에 선언될 경우 : 정적 함수
*/

#include"Class03.h"

// 전역변수
int myVariable = 10;
// 외부 파일에서 extern으로 사용 가능

// 정적 전역변수
static int staticVariable = 100;
// static을 붙힌 정적 전역변수
// 함수 해당 파일 내부에서만 사용 가능하며, 외부 파일에서 extern 사용 불가

//함수
void helloworld()
{
	cout << "helloworld" << endl;
};

//정적함수
static void Helloworld()
{
	cout << "Helloworld" << endl;
};


void addNumaber(int value)
{
	// 정적변수
	static int result = 0;
	// 단 한번의 초기화를 진행하며, 데이터 메모리 영역에 할당
	// 프로그램이 종료될 때까지 데이터를 유지
	// 함수 내부에 선언되었기 때문에 선언된 블록 내에서만 사용 가능
	result += value;
	cout << "result : " << result << endl;
}


int main()
{
	Weapon weapon1 = Weapon("Sword", 100);
	weapon1.PrintWeapon();

	Weapon weapon2 = weapon1;
	weapon2.PrintWeapon();

	addNumaber(10);
	addNumaber(20);
	addNumaber(30);

	return 0;
}