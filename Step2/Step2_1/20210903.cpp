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