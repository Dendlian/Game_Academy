#include<iostream>
using namespace std;

// extern���� �ܺ��� ���� ���� ���
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