/*
==Note==
 // List
   - ������ �����̳�
   - ����� ���� / ���Ű� ������ Ž�� �ӵ� : Low

*/

#include<iostream>
#include<list>

using namespace std;
#define Print(List) for(auto iter = List.begin(); iter!=List.end(); iter++) cout << *iter << endl
#define Log(str) cout << str << endl

int main()
{
	// list ����
	list<int>myList;
	
	myList.assign(2, 9);
	// assign : ��Ҹ� �ʱ�ȭ
	// ù��° ���� : �߰��� ����� ����, �ι�° ���� : ����� ��
	// ��Ұ� �����Ѵٸ� ��� ��Ҹ� ����� ó������ ��Ҹ� �߰�
	
	/// ��� �߰�
	myList.push_back(20);
	myList.push_back(30);
	myList.push_back(40);
	myList.push_front(10);
	// push_front : �� �տ� ��Ҹ� �߰�

	//for (auto iter = myList.begin(); iter != myList.end(); iter++)
	//	cout << *iter << endl;

	Print(myList);

	myList.reverse();
	// reverse : ���� ���� ��� ��ҵ��� ����
	
	Log("����");
	Print(myList);

	// ��� ����
	myList.remove(9);
	// remove(value) : value�� ���� ������ �ִ� ��� ��Ҹ� ����

	Log("");
	Print(myList);

	myList.clear();
	// clear : ��� ��Ҹ� �����ϴ� �Լ�

	Log("��� ��Ҹ� �����մϴ�.");
	Print(myList);

	// ��Ұ� ����ִ��� Ȯ��
	cout << "Mylist is empty? -> " << (myList.empty() ? "True" : "False") << endl;
	// empty : list�� ��Ұ� �ִٸ� false, ���ٸ� true�� ��ȯ�ϴ� �Լ�
}