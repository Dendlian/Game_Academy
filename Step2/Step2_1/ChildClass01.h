#pragma once
#include "ParentClass01.h"

// �Ļ�(�ڽ�) Ŭ������ �� Ŭ����
// ParentClass01�� �Ļ�(�ڽ�) Ŭ���� ChildClass01�� ����
class ChildClass01 : public ParentClass01
		// - ��� Ŭ������ ������ �� Colon(:)�� �̿�
		// - Ŭ�� �ڿ� ���� ���������ڴ� ����� ������ �ǹ�
		// - public, private, protected ��� ����
{
public:
	ChildClass01();
	~ChildClass01();

	void ChildMehtod();
};

