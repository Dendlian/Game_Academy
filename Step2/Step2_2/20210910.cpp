/*
==Note==
 // Overload�� Override�� �������� ������
  // ������
     - ������ �̸��� �Լ��� ������

   // ������
     - Overload : �Ű� ����, ��ȯ ������ �ϳ��� �޶�� ���� ����
	 - Override : �Ļ� Ŭ�������� �����Ǹ� �ؾ��ϸ� �Ű������� ��ȯ������ ��� ���ƾ� ���� ����
*/

#include<iostream>
using namespace std;

// ��� Ŭ����
class Parent
{
public:
	// �θ��� �޼���
	void SampleMethod()
	{cout << "Parent :: SamplaMethod() Call!" << endl;}
};

// Parent�� �Ļ� Ŭ����
class Child : public Parent
{
public:
	// �ڽ��� �޼���
	void SampleMethod()
	{cout << "Child :: SamplaMethod() Call!" << endl;}
};

// overrdie (�������̵�)
//   - ��� Ŭ������ �ִ� ���� �̸��� ������ �޼��带 �Ļ� Ŭ�������� �������ϴ� ��
//   - ��� Ŭ������ �����ǽ�ų �޼���� �����Լ���� �����ϴ� ���� ����

// overload (�����ε�)
//   - �ΰ� �̻��� �Լ��� ���� �Լ������� ���
//   - ���� �Լ����� ��ȯ���� �Ű������� ���̸� �־� ����
//   - ���� �Լ����̶� �ٸ� ����� �ϴ� �������� �Լ��� ���� ����


int main() 
{
	Child child;
	child.SampleMethod();

	// �ڽ��� �޼ҵ�ȿ� �θ��� �޼ҵ� ȣ��

	// ��� Ŭ���� �������� �Ļ�Ŭ���� ����
	 Parent* sampleClass = new Child;
	 sampleClass->SampleMethod();

	delete sampleClass;
	sampleClass = nullptr;

	return 0;
}