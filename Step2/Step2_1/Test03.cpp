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
		cout << "이름 : " << Name << endl;
		cout << "나이 : " << Age << endl;
	}
};


class Student : public Human
{
public:
	Student(string name, int age)
	{
		// Private로 접근제한자를 지정했기 때문에 자식 클래스에서도 접근 불가
		Name = name;
		Age = age;
	}

	void PrintInfo()
	{
		// 부모의 메서드를 호출
		Human::PrintInfo();

		cout << "이름(학생) : " << Name << endl;
		cout << "나이 : " << Age << endl;
	}

};

int main()
{
	Student student("철수", 20);
	student.PrintInfo();

	return 0;
}