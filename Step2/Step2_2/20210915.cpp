/*
==Note==
 // STL
   - 프로그램에 필요한 자료구조와 알고리즘 Templete 형태로 제공하는 라이브러리
 // STL 구성
   - Container					: 자료구조를 나타내며 객체들을 저장하는 객체
   - Container Adapter			: 구성 요소의 인터페이스를 변경하여 새로운 인터페이스를 갖는 구성 요소로 변경
   - Interactor					: 컨테이너에 있는 요소들을 순회하거나 접근할 수 있게 해주는 객체
   - Algorithm					: 데이터를 다루기 위한 함수
   - Functor					: 연산자를 오버로딩한 클래스의 객체
   - Allocator					: 컨테이너의 메모리 할당 정책을 캡슐화한 객체

 // Container
   - 시퀀스 컨테이너 
		- 자료를 선형구조로 관리하는 컨테이너
		- 선형적인 데이터 집합이므로, 데이터를 넣는 순서대로 요소가 할당
		- 특별한 제약이나, 관리 규칙 ㅇ벗이 데이터를 관리 가능
		- vector, list, deque

 // vector : 배열 기반 컨테이너
   - 요소를 삽입 / 제거할 때 자동으로 자신의 크기를 조정
   - 삽입 / 제거 속도 : LOW
   - 삽입 / 제거시 반복자 무효화 현상이 일어날 가능성 보유
  
 // list : 이중 연결 리스트
    - 탐색 속도 : LOW
	- 요소의 삽입 제거 속도 : FAST
*/

#include<vector>
#include<iostream>
using namespace std;

int main()
{
	// vector <저장할 자료형> 백터의 이름
	vector <int> vec;

	// 뒤에 요소를 삽입
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);

	vector<int>::iterator iter = vec.begin();
	// begin() : 백터의 첫 번째 요소의 위치를 지정
	// iter : 주소값을 저장하는 변수

	// cout << iter[1] << endl;
	// cout << *(iter + 1) << endl;
	// 
	// cout << "front()" << endl;
	// cout << vec.front() << endl;
	// 
	// cout << "back()" << endl;
	// cout << vec.back() << endl;
	// 
	// cout << "begin()" << endl;
	// cout << *vec.begin() << endl;

	for (iter = vec.begin(); iter != vec.end(); iter++)
		cout << *iter << endl;

	// 마지막으로 추가한 요소를 제거
	vec.pop_back();

	cout << "back()" << endl;
	cout << vec.back() << endl;
	cout << vec.size() << endl;

	return 0;
}