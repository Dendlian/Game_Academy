#pragma once
#include "Base.h"
class Job
{
private:
	string Name;
	string Weapon;

protected:
	Job(string name, string weapon);
	// �������� ���������ڸ� protected�� ������ ��� �ܺο��� ȣ���� �Ұ���
	// ������ Job Ŭ������ �Ļ� Ŭ�����κ��͸� �ν��Ͻ�ȭ ����

public:
	// ������ ������ ����ϴ� �Լ�
	void PrintInfo();

	// �ʵ� Name�� ���� ������
	FORCEINLINE string GetName() const
	{
		return Name;
	}
};

