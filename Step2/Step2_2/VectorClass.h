/*
==Note==
 // ������ �����ε�
   - ������ �����ϴ� �������� �⺻ ��� �̿ܿ� �ٸ� ����� �߰��ϴ� ��

 // �����ε��� �Ұ����� ������
   - .  : �ɹ� ����
   - :: : ����
   - ?  : ����
   - #  : ���ڿ� ��ó���� ��ȯ
   - ## : ��ó���� ����
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
	// ������ �����ε� ���
	// ��ȯŸ�� operater �����ε��� ������ (�ǿ�����)
	// ��ȯŸ�� : ������ �Ϸ�� �� ���� ��� ���� �� Ÿ���� ����
	// �ǿ����� : ������ ���
#pragma region ��������� �����ε�
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

	// ���� ������
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

#pragma region �Լ�ȣ�⿬���� �����ε�
	FORCEINLINE void operator()() const
	{ Print(); }
#pragma endregion
};

