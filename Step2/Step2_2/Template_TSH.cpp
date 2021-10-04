#include<iostream>
using namespace std;

// �Լ� ���ø� Ư��ȭ
/// - Ư���� �ڷ����� ���� �ٸ� ó���� �ϴ� ���� �ǹ�

template<typename T>
T Add(T a, T b)
{ return a + b; }

// �Լ� ���ø� Ư��ȭ ���
/// - typenmae T�� ����� ���ø� �ڷ��� ��� Ư��ȭ ��ų �ڷ����� ����
template<>
const char* Add(const char* a, const char* b)
{ return "���ڿ��� ���� �� �����ϴ�."; }


template<typename T, typename U>
T Sub(T a, U b)
{ return a - b; }

// Template�� �κ��� Ư��ȭ�� �������� �ʰ� ����� Ư��ȭ�� ����
template<typename T>
int Sub(T a, T b)
{ 
	cout << "�κ��� Ư��ȭ" << endl;
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