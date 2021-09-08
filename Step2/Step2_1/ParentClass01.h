#pragma once
#include "Base.h"

// 기반 클래스(상속시킬 클래스, 부모 클래스)가 될 클래스
class ParentClass01
{
private: 
	// 직업 이름
	string Name;

	// 사용 무기
	string Weapon;

protected:
	ParentClass01(string name, string weapon);
	// 생성자의 접근제한자를 protected로 성정한 경우
	// 외부에서 호출이 불가능하여 부모클래스는 자식클래스로부터만 인스턴스화 가능

public:
	ParentClass01();
	~ParentClass01();

	void ParentMethod();
};

