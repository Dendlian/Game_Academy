#include<iostream>
using namespace std;

// 함수 템플릿 특수화
/// - 특수한 자료형에 대해 다른 처리를 하는 것을 의미

template<typename T>
T Add(T a, T b)
{ return a + b; }

// 함수 템플릿 특수화 방법
/// - typenmae T를 지우고 템플릿 자료형 대신 특수화 시킬 자료형을 대입
template<>
const char* Add(const char* a, const char* b)
{ return "문자열은 더할 수 없습니다."; }


template<typename T, typename U>
T Sub(T a, U b)
{ return a - b; }

// Template은 부분적 특수화는 지원하지 않고 명시적 특수화만 가능
template<typename T>
int Sub(T a, T b)
{ 
	cout << "부분적 특수화" << endl;
	return a - b; 
}

int main()
{
	cout << "Add(10, 20) = " << Add<int>(10, 20) << endl;
	cout << "Add(ABC, DEF) = " << Add<const char*>("ABC", "DEF") << endl;

	cout << "Sub(5,10) = " << Sub<int, int>(5, 10) << endl;
	cout << "Sub(5, 5.0) = " << Sub<int, double>(5, 5.0f) << endl;
	return 0;
}