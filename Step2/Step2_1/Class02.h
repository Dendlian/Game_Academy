#pragma once
#include"Base.h"

class Class02
{
private:
	int Variable;

public:
	Class02();
	explicit Class02(int var);
	// explicit : 생성자의 묵시적 형변환 방지
	~Class02();

	FORCEINLINE int GetVariable() const
	{
		return Variable;
	}

};

