/*
==Note==

// 전역변수
  - 함수의 밖에서 선언되며, 지역성을 띄는 지역 변수와 다르게 지역성이 없는 변수를 의미
  - 프로그램이 실행될 때 데이터 메모리 영역에 할당되며, 프로그램이 종료될 때까지 존재
  - 전역변수는 초기화하지 않을 시 0으로 초기화
  - 전역변수와 지역변수의 이름이 같다면 지역변수에 먼저 접근
  - 스코프 연산자(::)를 통하여 전역변수에 접근 가능
  - 전역변수는 프로그램이 종료될 때 남아있는 데이터이므로 오류가 발생할 수 있어 사용 지양

 // 함수중복정의
  - 함수 호출시 호출대상을 찾는 기준은...
		C : 함수명	/	C++ : 함수명, 매개 변수 형식
		즉, 함수명이 같더라도 선언한 매개 변수의 형식이 다르면 같은 함수명을 중복해서도 사용 가능
  - 오버로딩 : 동일한 이름의 함수를 중복정의 하는 것

 // 선택적 매개변수
  - 기본값을 가지는 매개변수를 말하며, 필요에 따라 할당을 생략할 수 있는 매개변수
  - 필수 매개변수 뒤에 생성해야 사용 가능

 // 인라인함수
   - 짧은 코드로 구성된 함수에 대해 "함수 호출 오버헤드"로 인한 프로그램의 실행속도 저하를 줄이기 위해 도입된 기능
   - 일반 함수에 비해 실행 속도의 효율성
   - 복잡한 코드를 작성할 때 지양
   - 함수를 인라인화 시키는 방법 : inline, __forceinline

 // 매크로함수 : 매개변수형식이나 반환형식 지정 불가능
   - #define add(x,y)(x+y)

 // 문자열
   - C++에서는 string을 이용하여 문자열 사용 가능
   - string을 선언
	string string1 = "HELLO";
	string1 = "HELLO WORLD!";
	string string2("CAT");
	cout << "string1 = " << string1 << endl;

   - length() : NULL문자를 제외한 문자열의 길이를 반환
		for (int i = 0; i < string1.length(); i++)
		cout << string1[i] << endl;

   - capacity() : 문자열이 차지하고 있는 메모리 공간 크기를 반환
		cout << "string1 size = " << string1.capacity() << endl;

   - strcat() : 문자열을 잇는 힘수
		string2 += "Cafe";
		cout << string2 << endl;

   - strcpy() : 문자열 복사
		string1 = string2;
		cout << string2 << endl;

   - 문자열의 숫자를 해당 자료형으로 변환
		string intString = "1000";
		int myInt = stoi(intString);
		
		stoi = string to int
		stof = string to float
		stol = string to long
		stod = string to double

   - 입력
		string InputString;
		cin >> InputString;
		cout << "입력값 : " << InputString << endl;
		int StringInt = 100;

   - double, char, longlong, float 모두 동일
		to_string() : 숫자 자료형을 문자 자료형으로 변환
		string changeString = to_string(StringInt);

   - 문자열 비교
		if (string1 == string2) cout << "SAME!" << endl;
		printString(string1);

*/

#pragma warning(disable : 4996)
#include<iostream>
#include<string>
using namespace std;


int main()
{
	string Job;
	string Lv;
	cout << "전직을 입력해 주세요 : ";
	cin >> Job;
	cout << "레벨을 입력해 주세요 : ";
	cin >> Lv;

	int doubleLv = stoi(Lv);

	cout << "입력받은 문자열 길이 : " << Job.length() << endl;
	cout << "입력받은 문자열 크기 : " << Job.capacity() << endl;

	cout << "Lv" << Lv << " " << Job << endl;

	return 0;
}