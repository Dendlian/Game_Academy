/*
==Note==
 // 연산자 오버로딩
   - 기존에 존재하던 연산자의 기본 기능 이외에 다른 기능을 추가하는 것

 // 오버로딩이 불가능한 연산자
   - .  : 맴버 선택
   - :: : 범위
   - ?  : 조건
   - #  : 문자열 전처리기 변환
   - ## : 전처리기 연결
*/

enum class Axis {X,Y};

#include<iostream>
using namespace std;
#define FORCEINLINE __forceinline

class VectorClass
{
private:
	float X;
	float Y;

public:
	VectorClass();
	VectorClass(float x, float y);
	void Print() const;
public:
	// 연산자 오버로딩 방법
	// 반환타입 operater 오버로딩할 연산자 (피연산자)
	// 반환타입 : 연산이 완료된 후 나올 결과 값을 쓸 타입을 지정
	// 피연산자 : 연산의 대상
#pragma region 산술연산자 오버로드
	// Vector vec(1,3);
	// vec + Vector(1,2)
	FORCEINLINE VectorClass operator+(const VectorClass& value)
	{ return VectorClass(X + value.X, Y + value.Y); }
	FORCEINLINE VectorClass operator+(const int& value)
	{ return VectorClass(X + value, Y + value); }
	
	FORCEINLINE VectorClass operator+(const float& value)
	{ return VectorClass(X + value, Y + value); }

	FORCEINLINE VectorClass operator-(const VectorClass& value)
	{ return VectorClass(X - value.X, Y - value.Y); }
	FORCEINLINE VectorClass operator*(const VectorClass& value)
	{ return VectorClass(X * value.X, Y * value.Y); }
	FORCEINLINE VectorClass operator/(const VectorClass& value)
	{ return VectorClass(X * value.X, Y / value.Y); }

	FORCEINLINE VectorClass operator+=(const VectorClass& value)
	{ 
		X += value.X;
		Y += value.Y;
		return *this;
	}
	FORCEINLINE VectorClass operator-=(const VectorClass& value)
	{ return VectorClass(X -= value.X, Y -= value.Y); }
	FORCEINLINE VectorClass operator*=(const VectorClass& value)
	{ return VectorClass(X *= value.X, Y *= value.Y); }
	FORCEINLINE VectorClass operator/=(const VectorClass& value)
	{ return VectorClass(X /= value.X, Y /= value.Y); }

	// 후위 연산자
	FORCEINLINE const VectorClass operator++(int)
	{
		VectorClass prev = *this;
		X += 1;
		Y += 1;
		return prev;
	}
	
	FORCEINLINE const VectorClass operator--(int)
	{
		VectorClass prev = *this;
		X -= 1;
		Y -= 1;
		return prev;
	}
#pragma endregion



#pragma region 
	FORCEINLINE float operator[](Axis axis)
	{
		switch (axis)
		{
		case Axis::X: return X;
			break;
		case Axis::Y: return Y;
			break;
		default:
			break;
		}
		return -1;
	}
#pragma endregion

#pragma region 함수호출연산자 오버로드
	FORCEINLINE void operator()() const
	{ Print(); }
#pragma endregion
};

