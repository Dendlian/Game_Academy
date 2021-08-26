/*
==Note==
// #include <stdio.h> : C언어 표준 입출력 헤더파일
// C++에서도 C언어에서 사용하는 기능을 사용 가능

#include<iostream> : // C++ 부터 제공되는 입출력 헤더파일
  - std : namespace를 의미하며, 이는 소속된 위치를 의미
  - :: : 범위 지정 연산자(스코프 연산자) => 어떠한 범위에 속해있는 요소에 접근할 때 사용하는 연산자
  - << : 시프트 연산자가 아닌, 같은 모양의 오버로딩된 연산자 (연산자 오버로딩)
  - endl : 현재 위치에서 개행시킨다는 것을 의미

 // namespace
  - 특정한 영역에 이름을 붙여주기 위한 문법적 요소
  - 어떠한 이름이 소속된 공간을 의미

 // using namespace : 네임스페이스의 공간의 요소를 사용할 때 네임스페이스명의 명시 없이 가능

  namespace Addition
  {
	int Calculation(int a, int b){return (a+b);}
  }

  namespace Subtraction
  {
	int Calculation(int a, int b){return (a-b);}
  }

  int main()
  {
	int num1 =20, num2 = 10;
	cout << Addition::Calculate(num1, num2) << std::endl;
  }

 // C++에서 추가된 변수
   - bool : 참(true)과 거짓(false)을 가질 수 있는 형식을 의미

 // auto : 타입 추론형
   - 초기값의 형식에 맞춰 선언하는 변수의 형식이 자동으로 결정
   - auto는 런타임이 아닌, 컴파일 시점에서 자료형식이 정해지기 때문에 auto 형식을 변수로 선언해도 성능의 저하 X
   - 선언시 초기화 진행 필수

   - auto를 함수의 반환 형식으로 사용하는 것은 지양
   - 함수의 반환 타입은 호출자가 함수에서 어떤 값을 반환할지 예상
   - 그 과정에서 auto를 사용하게 되면 잘 못 해석하여 오류가 생길 가능성 보유
*/

#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	//std::cout << "HELLO WORLD!" << std::endl;
	//
	//int value;
	//std::cin >> value;
	//cout << "value 값 : " << value << endl;
	//
	//while (getchar() != '\n');
	//char str[256];

	// std::cin.getline(str, sizeof(str), '\n');
	// 첫번째 인수 : 입력받은 문자열을 저장할 문자열
	// 두번째 인수 : 세 번째 인수를 포함한 입력받을 최대 문자 수
	// 세번째 인수 : 끝을 구분할 문자
	// std::cout << str << std::endl;

	char Name[256];
	int Age;
	cout << "이름을 입력해주세요 : ";
	cin.getline(Name, sizeof(Name), '\n');
	cout << "나이을 입력해주세요 : ";
	cin >> Age;
	cout << "이름 : " << Name << endl << "나이 : " << Age << endl;

	return 0;
}