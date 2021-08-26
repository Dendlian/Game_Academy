/*
==Note==
// #include <stdio.h> : C��� ǥ�� ����� �������
// C++������ C���� ����ϴ� ����� ��� ����

#include<iostream> : // C++ ���� �����Ǵ� ����� �������
  - std : namespace�� �ǹ��ϸ�, �̴� �Ҽӵ� ��ġ�� �ǹ�
  - :: : ���� ���� ������(������ ������) => ��� ������ �����ִ� ��ҿ� ������ �� ����ϴ� ������
  - << : ����Ʈ �����ڰ� �ƴ�, ���� ����� �����ε��� ������ (������ �����ε�)
  - endl : ���� ��ġ���� �����Ų�ٴ� ���� �ǹ�

 // namespace
  - Ư���� ������ �̸��� �ٿ��ֱ� ���� ������ ���
  - ��� �̸��� �Ҽӵ� ������ �ǹ�

 // using namespace : ���ӽ����̽��� ������ ��Ҹ� ����� �� ���ӽ����̽����� ��� ���� ����

  namespace Addition
  {
	int Calculation(int a, int b){return (a+b);}
  }

  namespace Subtraction
  {
	int Calculation(int a, int b){return (a-b);}
  }

  int main()
  {
	int num1 =20, num2 = 10;
	cout << Addition::Calculate(num1, num2) << std::endl;
  }

 // C++���� �߰��� ����
   - bool : ��(true)�� ����(false)�� ���� �� �ִ� ������ �ǹ�

 // auto : Ÿ�� �߷���
   - �ʱⰪ�� ���Ŀ� ���� �����ϴ� ������ ������ �ڵ����� ����
   - auto�� ��Ÿ���� �ƴ�, ������ �������� �ڷ������� �������� ������ auto ������ ������ �����ص� ������ ���� X
   - ����� �ʱ�ȭ ���� �ʼ�

   - auto�� �Լ��� ��ȯ �������� ����ϴ� ���� ����
   - �Լ��� ��ȯ Ÿ���� ȣ���ڰ� �Լ����� � ���� ��ȯ���� ����
   - �� �������� auto�� ����ϰ� �Ǹ� �� �� �ؼ��Ͽ� ������ ���� ���ɼ� ����
*/

#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	//std::cout << "HELLO WORLD!" << std::endl;
	//
	//int value;
	//std::cin >> value;
	//cout << "value �� : " << value << endl;
	//
	//while (getchar() != '\n');
	//char str[256];

	// std::cin.getline(str, sizeof(str), '\n');
	// ù��° �μ� : �Է¹��� ���ڿ��� ������ ���ڿ�
	// �ι�° �μ� : �� ��° �μ��� ������ �Է¹��� �ִ� ���� ��
	// ����° �μ� : ���� ������ ����
	// std::cout << str << std::endl;

	char Name[256];
	int Age;
	cout << "�̸��� �Է����ּ��� : ";
	cin.getline(Name, sizeof(Name), '\n');
	cout << "������ �Է����ּ��� : ";
	cin >> Age;
	cout << "�̸� : " << Name << endl << "���� : " << Age << endl;

	return 0;
}