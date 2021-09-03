/*
==Note==
// �ν��Ͻ� �ʵ� ����
private :
	int variable1;
	int variable2;
public :
	// ������ 
	  - Class02();
	  - �Ű� ���� ��� ����
	  - �����ε� ���� (�����ε� : �Ű������� ��ȯ���� �޸��Ͽ� ���� �̸� �Լ��� ȣ���� �����ϴ� ��)
	  - ������ �Ű����� ��� ���� (Class02(int a, int b=100);)
	
	  - explicit : �������� ������ ����ȯ ����
	    Class02::Class02(int var)
		  {
			  Variable = var;
			  cout << "var = " << var << endl;
		  }

	// �⺻������
	  - Ŭ������ ������ �� ��������� �����ڸ� �������� �ʾƵ� �����Ϸ����� ������ִ� �⺻������ ������

	// �Ҹ��� 
	~Class02();
	// �Ű� ���� ��� �Ұ���
*/

#include"Class02.h"

void PrintClass(Class02 sample)
{
	cout << "GetVariable() = " << sample.GetVariable() << endl;
}



int main()
{
	Class02 sample1;
	PrintClass(sample1);
	PrintClass(Class02(500));
	
	// PrintClass(500);
	// �Լ��� ���ڷ� ������ 500�̶�� ���� �����Ͱ� �����Ϸ� �������� Class02(500)�� ���·� �ڵ� ��ȯ
	// (== ������ ����ȯ)

	return 0;
}