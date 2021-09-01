/*
==Note==
 // 클래스(class)
   - 구조체와 비슷하며, 특정한 종류의 객체를 만들기 위한 수단
   - 통상적으로 구조체는 간단한 데이터 형식을, 클래스는 복잡한 데이터 형식을 나타낼 떄 사용
   - class 키워드를 이용하여 선언

 // 접근 제한자
   - 외부로부터 맴버들로의 접근을 제한할 떄 사용하는 한정자
   // public : 클래스 & 구조체의 내부 / 외부 모든 곳에서 접근이 가능
   // private : 클래스 & 구조체의 내부에서만 접근이 가능
   // protected : 클래스 & 구조체 외부에서는 접근이 불가능하지만 자신이나, 파생된 클래스 & 구조체에서 접근이 가능

 // 클래스와 구조체의 차이
   - 클래스는 접근제한자를 명시하지 않으면 private로 설정
   - 구조체는 접근제한자를 명시하지 않으면 public으로 설정

 // C vs C++
   - 절차지향 / 객체지향

 // 객체지향 프로그래밍의 3대 특성
   - 은닉성 : 값의 보호를 위하여 객체의 필드 / 메서드를 필요에 의해 감추거나 공개 (접근제한자)
   - 상속성 : 부모가 가진 것을 자식 클래스가 물려받아 같이 공유하며 확장하는 개념
			  기존의 코드를 재사용하여 보다 더 쉽게 코드를 작성하는 기법을 의미
   - 다형성 : 같은 타입이지만, 실행 결과가 다양한 객체를 이용할 수 있는 성질을 의미 (구조체, 클래스)


   class myClass
   {
   public:
		int variable;
   
		void PrintVariable()
		{cout << "variable = " << variable << endl;}
   };

   int main()
   {
		// myClass 객체 선언
		myClass myClssInstance;

		myClassInstance.variable = 10;
		myclassInstance.PrintVariable();
		return 0;
   }

*/

#include <iostream>
using namespace std;

struct Human
{
	string Name;
	int Age;

	void PrintHuman()
	{
		cout << "이름 : " << Name << endl;
		cout << "나이 : " << Age << endl;
	}
};

int main() 
{
	// 객체 배열
	// 객체들을 저장할 수 있는 배열
	Human humanArray[3];
	humanArray[0].Age = 20;
	humanArray[0].Name = "철수";
	humanArray[1].Age = 30;
	humanArray[1].Name = "유리";
	humanArray[2].Age = 40;
	humanArray[2].Name = "맹구";

	for (int i = 0; i < 3; i++)
		humanArray[i].PrintHuman();

	// 객체 포인터
	Human human;
	human.Age = 10;
	human.Name = "짱구";

	Human* phuman = &human;
	phuman->Age = 5;
	phuman->Name = "훈이";

	human.PrintHuman();
	phuman->PrintHuman();

	Human* HumanArray1[3]; // 포인터 배열 : 주소를 저장
	HumanArray1[0] = new Human;
	HumanArray1[1] = new Human;
	HumanArray1[2] = new Human;
	HumanArray1[2]->Age = 10;

	Human* HumanArray2 = new Human[3]; // 배열 포인터 
	HumanArray2[2].Age;


	return 0;
}