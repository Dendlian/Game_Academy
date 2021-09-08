/*
 // 상속
   - 부모가 가지고 있는 것을 몰려받아 같이 공유하며 나아가 확장하는 개념
   - 비슷한 클래스들을 공통된 코드를 묶어 기반 클래스(부모 클래스)를 생성
   - 새로운 클래스들을 작성할 때 같은 코드를 다시 작성하지 않도록 하여 생산성을 높이는 코딩 기법

 // 생성자
   - 최상위 기반 클래스의 생성자부터 최하위 클래스의 생성자 순서로 호출

 // 소멸자
   - 최하위 기반 클래스의 소멸자부터 최상위 클래스의 소멸자 순서로 호출

 // 파생 클래스에서 기반 클래스를 지정할 경우 사용되는 세가지 형태의 상속

								기반클래스 맴버					파생클래스 맴버
   - [public Parent]			public							public
								protected						protected
   
   - [protected Parent]			public							protected
								protected						protected

   - [private Parent]			public							private
								protected						private		
*/

#include "ChildClass01.h"
int main()
{
	// 객체 선언
	ChildClass01 childClass;

	// 자식의 함수를 호출
	childClass.ChildMehtod();

	// 자식 객체에서 부모의 함수를 호출
	childClass.ParentMethod();

	// 부모 객체 선언
	ParentClass01 parentClass;
	
	// 부모 객체에서는 자식의 함수 호출 불가
	// parentClass.ChildMehtod();
}