/*
==Note==
 // List
   - 시퀀스 컨테이너
   - 요소의 삽입 / 제거가 빠르며 탐색 속도 : Low

*/

#include<iostream>
#include<list>

using namespace std;
#define Print(List) for(auto iter = List.begin(); iter!=List.end(); iter++) cout << *iter << endl
#define Log(str) cout << str << endl

int main()
{
	// list 선언
	list<int>myList;
	
	myList.assign(2, 9);
	// assign : 요소를 초기화
	// 첫번째 인자 : 추가할 요소의 개수, 두번째 인자 : 요소의 값
	// 요소가 존재한다면 모든 요소를 지우고 처음부터 요소를 추가
	
	/// 요소 추가
	myList.push_back(20);
	myList.push_back(30);
	myList.push_back(40);
	myList.push_front(10);
	// push_front : 맨 앞에 요소를 추가

	//for (auto iter = myList.begin(); iter != myList.end(); iter++)
	//	cout << *iter << endl;

	Print(myList);

	myList.reverse();
	// reverse : 벡터 안의 모든 요소들을 반전
	
	Log("반전");
	Print(myList);

	// 요소 제거
	myList.remove(9);
	// remove(value) : value의 값을 가지고 있는 모든 요소를 삭제

	Log("");
	Print(myList);

	myList.clear();
	// clear : 모든 요소를 제거하는 함수

	Log("모든 요소를 제거합니다.");
	Print(myList);

	// 요소가 비어있는지 확인
	cout << "Mylist is empty? -> " << (myList.empty() ? "True" : "False") << endl;
	// empty : list에 요소가 있다면 false, 없다면 true를 반환하는 함수
}