/*
==Note==

 // Map
  - Container : 연관 컨테이너 (vs 시퀀스 컨테이너)
  - 연관컨테이너 : 일정한 규칙에 따라 자료를 조직화하여 관리하는 컨테이너
  - key와 value를 통해 관계있는 값을 묶어서 관리
  - 요소의 탐색 속도 : HIGH

  - key와 value가 쌍으로 저장되는 컨테이너
  - 요소는 key, value를 갖는 pair 형식을 사용
  - key의 중복 허용 X
*/

#include<iostream>
#include<map>
using namespace std;

#define PrintMap(map) for (auto iter = fruits.begin(); iter != fruits.end(); iter++){ cout << iter->first << " : " << iter->second << endl; }

int main()
{
	// map 선언
	// map 요소의 key type(좌측) / value type(우측)
	map<string, string>fruits;

	// pair 객체 생성
	pair<string, string> apple;
	apple.first = "사과"; // key
	apple.second = "Apple"; // value

	// 생성한 pair객체를 요소로 추가
	fruits.insert(apple);
	// insert : map에 요소를 추가하는 함수

	fruits.insert(pair<string, string>("바나나", "Banana"));

	fruits.insert(make_pair("포도", "Grape"));
	// make_pair : pair를 생성하는 함수

	fruits["오렌지"] = "Orange";
	// 만약 [key]를 갖는 요소가 존재하지 않다면 key를 갖는 요소를 추가하고 값을 value로 설정
	// 만약 key를 갖는 요소가 있다면 해당 key의 값을 vlaue로 설정

	/*
	사과
	바나나 사과
	바나나 사과 오렌지
	바나나 사과 오렌지 포도
	*/

	fruits["포도"] = "WhiteGrape";

	fruits.insert(make_pair("멜론", "Melon"));
	fruits.insert(make_pair("수박", "Watermelon"));
	fruits.insert(make_pair("블루베리", "Blueberry"));

	fruits["레몬"] = "Lemon";
	fruits["라즈베리"] = "Lazberry";

	PrintMap(furits);

	cout << endl;

	// '바나나'라는 키를 갖는 요소를 제거
	fruits.erase("바나나");
	PrintMap(fruits);

	auto iter = fruits.find("포도");
	// find(key) : key를 갖는 요소의 위치를 반환
	//				찾지 못했다면 end()를 반환

	if (iter == fruits.end()) cout << "포도란 요소는 존재하지 않습니다." << endl;
	else
	{
		cout << "요소를 찾았습니다!" << endl;
		cout << iter->first << " : " << iter->second << endl;
	}

	fruits.clear();

	fruits.empty();
	
	fruits.size();

	return 0;
}