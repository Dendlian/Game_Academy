#include<iostream>
using namespace std;

class Human
{
private:
	bool isPrivate;

protected:
	int Age;

public:
	string Name;
	void PrintInfo()
	{
		cout << "�̸� : " << Name << endl;
		cout << "���� : " << Age << endl;
	}
};


class Student : public Human
{
public:
	Student(string name, int age)
	{
		// Private�� ���������ڸ� �����߱� ������ �ڽ� Ŭ���������� ���� �Ұ�
		Name = name;
		Age = age;
	}

	void PrintInfo()
	{
		// �θ��� �޼��带 ȣ��
		Human::PrintInfo();

		cout << "�̸�(�л�) : " << Name << endl;
		cout << "���� : " << Age << endl;
	}

};

int main()
{
	Student student("ö��", 20);
	student.PrintInfo();

	return 0;
}