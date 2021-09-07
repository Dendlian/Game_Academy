#include<iostream>
using namespace std;

#define FORCEINLINE __forceinline

class Monster
{
private:
	// 정적 맴버 변수 선언
	static int MonsterNum;
	// 객체들이 각각의 맴버들을 가지고 있다면 정적 맴버 변수는 객체들이 모두 공유하고 있는 맴버
	// 일반 맴버와는 다르게 한 객체에서 값을 변경한다면, 모든 같은 객체에서 값을 동일하게 변경
	// 클래스 외부에서 초기화를 진행해야 적용 가능

	// 정적 맴버 상수 선언
	const static int Lv = 1;
	// 값을 변경할 수 없고 맴버들이 모두 공유하는 상수
	// const static == static const
	// 클래스 내부에서 초기화를 진행해야 적용 가능

	string Name;
	// 값을 변경하지 못하는 맴버 상수
	const string Rate;
	int Hp;

public:
	Monster(const char* name, int hp, const char* rate);
	~Monster() {}

	void PrintMonster();
};

// 정적 맴버 변수를 초기화
int Monster::MonsterNum = 0;

// 초기화 리스트 생성자 : 맴버 변수명(초기화할 값)
// 생성자를 실행할 때 초기화 값을 넘겨받아 맴버를 초기화하여 주는 기능
Monster::Monster(const char* name, int hp, const char* rate) : Rate(rate)
{
	Hp = hp;
	Name = name;
	++MonsterNum;
	
	cout << "현재 생성된 몬스터의 수 : " << MonsterNum << endl;
}

void Monster::PrintMonster() 
{
	cout << "이름 : " << Name << endl;
	cout << "체력 : " << Hp << endl;
	cout << "등급 : " << Rate << endl;
}

int main()
{
	Monster monster[2] = { Monster("Goblin",100,"Nomal"), Monster("Slaime",200,"Named") };

	monster[0].PrintMonster();
	cout << endl;
	monster[1].PrintMonster();

	return 0;
}