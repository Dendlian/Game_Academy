/*
==Note==
 // Ŭ����(class)
   - ����ü�� ����ϸ�, Ư���� ������ ��ü�� ����� ���� ����
   - ��������� ����ü�� ������ ������ ������, Ŭ������ ������ ������ ������ ��Ÿ�� �� ���
   - class Ű���带 �̿��Ͽ� ����

 // ���� ������
   - �ܺηκ��� �ɹ������ ������ ������ �� ����ϴ� ������
   // public : Ŭ���� & ����ü�� ���� / �ܺ� ��� ������ ������ ����
   // private : Ŭ���� & ����ü�� ���ο����� ������ ����
   // protected : Ŭ���� & ����ü �ܺο����� ������ �Ұ��������� �ڽ��̳�, �Ļ��� Ŭ���� & ����ü���� ������ ����

 // Ŭ������ ����ü�� ����
   - Ŭ������ ���������ڸ� ������� ������ private�� ����
   - ����ü�� ���������ڸ� ������� ������ public���� ����

 // C vs C++
   - �������� / ��ü����

 // ��ü���� ���α׷����� 3�� Ư��
   - ���м� : ���� ��ȣ�� ���Ͽ� ��ü�� �ʵ� / �޼��带 �ʿ信 ���� ���߰ų� ���� (����������)
   - ��Ӽ� : �θ� ���� ���� �ڽ� Ŭ������ �����޾� ���� �����ϸ� Ȯ���ϴ� ����
			  ������ �ڵ带 �����Ͽ� ���� �� ���� �ڵ带 �ۼ��ϴ� ����� �ǹ�
   - ������ : ���� Ÿ��������, ���� ����� �پ��� ��ü�� �̿��� �� �ִ� ������ �ǹ� (����ü, Ŭ����)


   class myClass
   {
   public:
		int variable;
   
		void PrintVariable()
		{cout << "variable = " << variable << endl;}
   };

   int main()
   {
		// myClass ��ü ����
		myClass myClssInstance;

		myClassInstance.variable = 10;
		myclassInstance.PrintVariable();
		return 0;
   }

*/

#include <iostream>
using namespace std;

struct Human
{
	string Name;
	int Age;

	void PrintHuman()
	{
		cout << "�̸� : " << Name << endl;
		cout << "���� : " << Age << endl;
	}
};

int main() 
{
	// ��ü �迭
	// ��ü���� ������ �� �ִ� �迭
	Human humanArray[3];
	humanArray[0].Age = 20;
	humanArray[0].Name = "ö��";
	humanArray[1].Age = 30;
	humanArray[1].Name = "����";
	humanArray[2].Age = 40;
	humanArray[2].Name = "�ͱ�";

	for (int i = 0; i < 3; i++)
		humanArray[i].PrintHuman();

	// ��ü ������
	Human human;
	human.Age = 10;
	human.Name = "¯��";

	Human* phuman = &human;
	phuman->Age = 5;
	phuman->Name = "����";

	human.PrintHuman();
	phuman->PrintHuman();

	Human* HumanArray1[3]; // ������ �迭 : �ּҸ� ����
	HumanArray1[0] = new Human;
	HumanArray1[1] = new Human;
	HumanArray1[2] = new Human;
	HumanArray1[2]->Age = 10;

	Human* HumanArray2 = new Human[3]; // �迭 ������ 
	HumanArray2[2].Age;


	return 0;
}