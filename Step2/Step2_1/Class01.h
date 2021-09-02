#pragma once
#include "Base.h"

class Human
{
public : 
	// ������ ��Ÿ���� ���� ��������
	enum class HumanGender {Man, Woman};

private :
	// �̸�
	string Name;

	// ����
	HumanGender Gender;

	// ����
	int Age;

public : 
	// ������ �ʱ�ȭ�ϴ� �޼���
	void InitHumanInfo(string name, HumanGender gender, int age);

	// ������ ����ϴ� �޼���
	void PrintHumanInfo() const;
	// �޼��� �� const�� �ǹ� : �ɹ� ������ ����� ���� �������� �ʴ� �޼������� ���

	// �ζ��� �Լ�
	FORCEINLINE string GenderToString() const
	{return (Gender == HumanGender::Man) ? "����" : "����";}


};