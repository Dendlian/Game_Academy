/*
==Note==
// 인스턴스 필드 선언
private :
	int variable1;
	int variable2;
public :
	// 생성자 
	  - Class02();
	  - 매개 변수 사용 가능
	  - 오버로딩 가능 (오버로딩 : 매개변수와 반환값을 달리하여 같은 이름 함수의 호출을 구분하는 것)
	  - 선택적 매개변수 사용 가능 (Class02(int a, int b=100);)
	
	  - explicit : 생성자의 묵시적 형변환 방지
	    Class02::Class02(int var)
		  {
			  Variable = var;
			  cout << "var = " << var << endl;
		  }

	// 기본생성자
	  - 클래스를 선언할 때 명시적으로 생성자를 구현하지 않아도 컴파일러에서 만들어주는 기본형태의 생성자

	// 소멸자 
	~Class02();
	// 매개 변수 사용 불가능

	// 복사 생성자
	// 대입된 같은 형태의 객체 속 맴버가 가진 값을 자신의 맴버로 복사하는 생성자
	  - char*는 메모리의 주소값을 참조하여 실제의 값을 담는 변수
	  - 기본 복사생성자를 이용하여 복사하면 같은 주소를 저장하여 객체가 다르지만 동시에 값이 변경되는 오류 발생
      - 동적할당을 통해 공간을 따로 생성하여 오류 방지
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

	// 기본 복사 생성자 : C++에서 기본적으로 제공해주는 복사 생성자
	  - Monster monster2 = Monster(monster1);
      - Monster monster2 = monster1;


*/

#include"Class02.h"

void PrintClass(Class02 sample)
{
	cout << "GetVariable() = " << sample.GetVariable() << endl;
}



int main()
{
	Class02 sample1;
	PrintClass(sample1);
	PrintClass(Class02(500));
	
	// PrintClass(500);
	// 함수의 인자로 들어오는 500이라는 숫자 데이터가 컴파일러 과정에서 Class02(500)의 형태로 자동 변환
	// (== 묵시적 형변환)

	return 0;
}