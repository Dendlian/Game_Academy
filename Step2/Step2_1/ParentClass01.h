#pragma once
#include "Base.h"

// ��� Ŭ����(��ӽ�ų Ŭ����, �θ� Ŭ����)�� �� Ŭ����
class ParentClass01
{
private: 
	// ���� �̸�
	string Name;

	// ��� ����
	string Weapon;

protected:
	ParentClass01(string name, string weapon);
	// �������� ���������ڸ� protected�� ������ ���
	// �ܺο��� ȣ���� �Ұ����Ͽ� �θ�Ŭ������ �ڽ�Ŭ�����κ��͸� �ν��Ͻ�ȭ ����

public:
	ParentClass01();
	~ParentClass01();

	void ParentMethod();
};

