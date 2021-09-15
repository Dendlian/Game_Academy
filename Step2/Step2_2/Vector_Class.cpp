#include<iostream>
#include<vector>
using namespace std;

class Human
{
public:
	string name;

public:
	Human(const char* name)
	{
		this->name = string(name);
	}
};

int main()
{
	// Human 타입의 vector 생성
	vector<Human>myVector;

	// Human(const char* name) 묵시적 혈변환 되어 추가
	myVector.push_back("Jake");
	myVector.push_back("Mike");

	// size() : 요소의 개수를 반환하는 함수
	for (int i = 0; i < myVector.size(); i++)
		cout << myVector[i].name << endl;

	// erase(위치) : 해당 위치에 있는 요소를 제거
	myVector.erase(myVector.begin());

	vector<Human>::iterator iter = myVector.begin();
	myVector.erase(iter + 1);

	for (int i = 0; i < myVector.size(); i++)
		cout << myVector[i].name << endl;

	myVector.insert(myVector.end(), "Mike");
	// insert() : 첫번째 인자에 저장 위치, 두번째에 추가할 요소를 넣어 위치를 지정하여 요소를 추가할 수 있는 함수

	cout << endl;
	for (int i = 0; i < myVector.size(); i++)
		cout << myVector[i].name << endl;

	return 0;
}