#pragma once
#include "ParentClass01.h"

// 파생(자식) 클래스가 될 클래스
// ParentClass01의 파생(자식) 클래스 ChildClass01을 선언
class ChildClass01 : public ParentClass01
		// - 기반 클래스를 지정할 때 Colon(:)을 이용
		// - 클론 뒤에 오는 접근제한자는 상속의 유형을 의미
		// - public, private, protected 사용 가능
{
public:
	ChildClass01();
	~ChildClass01();

	void ChildMehtod();
};

