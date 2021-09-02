#pragma once
#include "Base.h"

class Human
{
public : 
	// 성별을 나타내기 위한 열거형식
	enum class HumanGender {Man, Woman};

private :
	// 이름
	string Name;

	// 성별
	HumanGender Gender;

	// 나이
	int Age;

public : 
	// 정보를 초기화하는 메서드
	void InitHumanInfo(string name, HumanGender gender, int age);

	// 정보를 출력하는 메서드
	void PrintHumanInfo() const;
	// 메서드 뒤 const의 의미 : 맴버 변수에 저장된 값을 변경하지 않는 메서드임을 명시

	// 인라인 함수
	FORCEINLINE string GenderToString() const
	{return (Gender == HumanGender::Man) ? "남성" : "여성";}


};