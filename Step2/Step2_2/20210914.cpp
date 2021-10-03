/*
==Note==

 // ���� �����Լ�
   - �Ļ�Ŭ�������� �ݵ�� ������ �ؾ��ϴ� �޼��带 �ǹ�
   - �Լ��� ���� �����ϸ�, �����ϴ� ����X
   - �߻� Ŭ���� : C++ ���� �̷��� ���� �����Լ��� �ϳ� �̻� ������ �ִ� Ŭ����

 // �߻� Ŭ����
   - ���� �����Լ� �ϳ� �̻��� ������ �ִ� �������� �ʴ� Ŭ������ �ǹ�
   - �������� �ʴ� Ŭ�����̹Ƿ� �ν��Ͻ�ȭ �� ��ü�� ������ �Ұ�
   - �߻� Ŭ������ ������ �� 'abstract'�� �̿��Ͽ� �߻� Ŭ�������� ���
*/


#include"Base.h"

class SampleAbstractClass abstract
{
public:
	// ���� ���� �Լ�
	virtual void Print() =0;
	// �����Լ� �ڿ� '=0'�� ������ ����
};

class SampleClass : public SampleAbstractClass
{
public:
	virtual void Print() override
	{
		cout << "Print() Call" << endl;
	}
};

int main()
{
	SampleAbstractClass* sample = new SampleClass();
	sample->Print();

	delete sample;
	sample = nullptr;
	return 0;
}