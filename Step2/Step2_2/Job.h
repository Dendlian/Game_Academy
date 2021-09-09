#pragma once
#include "Base.h"
class Job
{
private:
	string Name;
	string Weapon;

protected:
	Job(string name, string weapon);
	// 생성자의 접근제한자를 protected로 설정한 경우 외부에서 호출이 불가능
	// 때문에 Job 클래스는 파생 클래스로부터만 인스턴스화 가능

public:
	// 직업의 정보를 출력하는 함수
	void PrintInfo();

	// 필드 Name에 대한 접근자
	FORCEINLINE string GetName() const
	{
		return Name;
	}
};

