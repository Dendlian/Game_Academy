/*
==Note==

// ��������
  - �Լ��� �ۿ��� ����Ǹ�, �������� ��� ���� ������ �ٸ��� �������� ���� ������ �ǹ�
  - ���α׷��� ����� �� ������ �޸� ������ �Ҵ�Ǹ�, ���α׷��� ����� ������ ����
  - ���������� �ʱ�ȭ���� ���� �� 0���� �ʱ�ȭ
  - ���������� ���������� �̸��� ���ٸ� ���������� ���� ����
  - ������ ������(::)�� ���Ͽ� ���������� ���� ����
  - ���������� ���α׷��� ����� �� �����ִ� �������̹Ƿ� ������ �߻��� �� �־� ��� ����

 // �Լ��ߺ�����
  - �Լ� ȣ��� ȣ������ ã�� ������...
		C : �Լ���	/	C++ : �Լ���, �Ű� ���� ����
		��, �Լ����� ������ ������ �Ű� ������ ������ �ٸ��� ���� �Լ����� �ߺ��ؼ��� ��� ����
  - �����ε� : ������ �̸��� �Լ��� �ߺ����� �ϴ� ��

 // ������ �Ű�����
  - �⺻���� ������ �Ű������� ���ϸ�, �ʿ信 ���� �Ҵ��� ������ �� �ִ� �Ű�����
  - �ʼ� �Ű����� �ڿ� �����ؾ� ��� ����

 // �ζ����Լ�
   - ª�� �ڵ�� ������ �Լ��� ���� "�Լ� ȣ�� �������"�� ���� ���α׷��� ����ӵ� ���ϸ� ���̱� ���� ���Ե� ���
   - �Ϲ� �Լ��� ���� ���� �ӵ��� ȿ����
   - ������ �ڵ带 �ۼ��� �� ����
   - �Լ��� �ζ���ȭ ��Ű�� ��� : inline, __forceinline

 // ��ũ���Լ� : �Ű����������̳� ��ȯ���� ���� �Ұ���
   - #define add(x,y)(x+y)

 // ���ڿ�
   - C++������ string�� �̿��Ͽ� ���ڿ� ��� ����
   - string�� ����
	string string1 = "HELLO";
	string1 = "HELLO WORLD!";
	string string2("CAT");
	cout << "string1 = " << string1 << endl;

   - length() : NULL���ڸ� ������ ���ڿ��� ���̸� ��ȯ
		for (int i = 0; i < string1.length(); i++)
		cout << string1[i] << endl;

   - capacity() : ���ڿ��� �����ϰ� �ִ� �޸� ���� ũ�⸦ ��ȯ
		cout << "string1 size = " << string1.capacity() << endl;

   - strcat() : ���ڿ��� �մ� ����
		string2 += "Cafe";
		cout << string2 << endl;

   - strcpy() : ���ڿ� ����
		string1 = string2;
		cout << string2 << endl;

   - ���ڿ��� ���ڸ� �ش� �ڷ������� ��ȯ
		string intString = "1000";
		int myInt = stoi(intString);
		
		stoi = string to int
		stof = string to float
		stol = string to long
		stod = string to double

   - �Է�
		string InputString;
		cin >> InputString;
		cout << "�Է°� : " << InputString << endl;
		int StringInt = 100;

   - double, char, longlong, float ��� ����
		to_string() : ���� �ڷ����� ���� �ڷ������� ��ȯ
		string changeString = to_string(StringInt);

   - ���ڿ� ��
		if (string1 == string2) cout << "SAME!" << endl;
		printString(string1);

*/

#pragma warning(disable : 4996)
#include<iostream>
#include<string>
using namespace std;


int main()
{
	string Job;
	string Lv;
	cout << "������ �Է��� �ּ��� : ";
	cin >> Job;
	cout << "������ �Է��� �ּ��� : ";
	cin >> Lv;

	int doubleLv = stoi(Lv);

	cout << "�Է¹��� ���ڿ� ���� : " << Job.length() << endl;
	cout << "�Է¹��� ���ڿ� ũ�� : " << Job.capacity() << endl;

	cout << "Lv" << Lv << " " << Job << endl;

	return 0;
}