/*
 // ���
   - �θ� ������ �ִ� ���� �����޾� ���� �����ϸ� ���ư� Ȯ���ϴ� ����
   - ����� Ŭ�������� ����� �ڵ带 ���� ��� Ŭ����(�θ� Ŭ����)�� ����
   - ���ο� Ŭ�������� �ۼ��� �� ���� �ڵ带 �ٽ� �ۼ����� �ʵ��� �Ͽ� ���꼺�� ���̴� �ڵ� ���

 // ������
   - �ֻ��� ��� Ŭ������ �����ں��� ������ Ŭ������ ������ ������ ȣ��

 // �Ҹ���
   - ������ ��� Ŭ������ �Ҹ��ں��� �ֻ��� Ŭ������ �Ҹ��� ������ ȣ��

 // �Ļ� Ŭ�������� ��� Ŭ������ ������ ��� ���Ǵ� ������ ������ ���

								���Ŭ���� �ɹ�					�Ļ�Ŭ���� �ɹ�
   - [public Parent]			public							public
								protected						protected
   
   - [protected Parent]			public							protected
								protected						protected

   - [private Parent]			public							private
								protected						private		
*/

#include "ChildClass01.h"
int main()
{
	// ��ü ����
	ChildClass01 childClass;

	// �ڽ��� �Լ��� ȣ��
	childClass.ChildMehtod();

	// �ڽ� ��ü���� �θ��� �Լ��� ȣ��
	childClass.ParentMethod();

	// �θ� ��ü ����
	ParentClass01 parentClass;
	
	// �θ� ��ü������ �ڽ��� �Լ� ȣ�� �Ұ�
	// parentClass.ChildMehtod();
}