#pragma once
#include"Base.h"

class Class02
{
private:
	int Variable;

public:
	Class02();
	explicit Class02(int var);
	// explicit : �������� ������ ����ȯ ����
	~Class02();

	FORCEINLINE int GetVariable() const
	{
		return Variable;
	}

};

