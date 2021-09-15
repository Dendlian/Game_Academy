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
	// Human Ÿ���� vector ����
	vector<Human>myVector;

	// Human(const char* name) ������ ����ȯ �Ǿ� �߰�
	myVector.push_back("Jake");
	myVector.push_back("Mike");

	// size() : ����� ������ ��ȯ�ϴ� �Լ�
	for (int i = 0; i < myVector.size(); i++)
		cout << myVector[i].name << endl;

	// erase(��ġ) : �ش� ��ġ�� �ִ� ��Ҹ� ����
	myVector.erase(myVector.begin());

	vector<Human>::iterator iter = myVector.begin();
	myVector.erase(iter + 1);

	for (int i = 0; i < myVector.size(); i++)
		cout << myVector[i].name << endl;

	myVector.insert(myVector.end(), "Mike");
	// insert() : ù��° ���ڿ� ���� ��ġ, �ι�°�� �߰��� ��Ҹ� �־� ��ġ�� �����Ͽ� ��Ҹ� �߰��� �� �ִ� �Լ�

	cout << endl;
	for (int i = 0; i < myVector.size(); i++)
		cout << myVector[i].name << endl;

	return 0;
}