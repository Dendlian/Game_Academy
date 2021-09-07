#include<iostream>
using namespace std;

// extern으로 외부의 전역 변수 사용
extern int myVariable;

//extern int statiVariable;

//void HelloWorld();
void helloworld();

int main()
{
	helloworld();
	myVariable += 10;
	cout << myVariable << endl;

	//statiVariable += 10;
	//cout << statiVariable << endl;

}