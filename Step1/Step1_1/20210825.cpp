/*
==Note==

 // ��ó�� ������
  - ���� �������� ���۵Ǳ� ���� �����Ϸ����� Ư���� ����� �̸� ó���ϵ��� ������ �� ����ϴ� ����
  - '#'���� ���۵Ǹ�, �� ���ο� �� ���� ��ó���� ��ɸ��� ���
  - ��ó���� ���þ�� ���� �����ݷ� �̻��

 // #include
  - ������ ������ ������ �о�� �����ڰ� �ۼ��� ���Ͽ� ����
  - ����� ���� ������� : ū ����ǥ ���	(#inlcude "myHeader.h")
  - �����Ǵ� ������� : ������	(#include <stdio.h>)

 // ��������̶�?
  - �ҽ��ڵ� ������ ����� ������� ���ǵǾ� �ִ� ����
  - ��� ������ ���������μ� ������Ͽ� �ִ� �Լ��� �������� ��� ����

 // #define : �ɺ�, �Ǵ� ��ũ�� ��� / �Լ��� ����

 #define DEBUG
 #define RELEASE
   - �ɺ� DEBUG, RELEASE�� ����

 #define PI 3.14f
   - ��ũ�� ��� ����
   - 3.14f�� PI Ű����� ����
   - ���� PI�� 3.14f��� �ڵ�� ġȯ

 #define plus(x,y)(x+y)
   - ��ũ�� �Լ� ����
   - (x+y)�ڵ带 plus(x,y)�� ����
   - ���� plus(x,y) �ڵ尡 (x+y)��� �ڵ�� ġȯ


 #define	ANDROID			0x0001
 #define	IOS				0x0001
 #define	PC				0x0001
 #define	PLATFORM		ANDROID
   - #if, #elif, #else : ������ ������ ���θ� ���ǿ� ���� ����
   - �� ���� ���� #endif�� ���� ���θ� ����
   /// ���ǿ� ���� ������
  
   #if PLATFORM == IOS
   #define ISIOS printf("�÷����� IOS �Դϴ�.\n");

   #elif PLATFORM == 0x0003
   #define ISPC printf("�÷����� PC �Դϴ�.\n");

   #else 
   #define ISANDROID printf("�÷����� ANDROID �Դϴ�.\n");

   #endif

 #pragma warning(disable : 4996)
   - #pragma warning(disable : code)
   - ������ �ڵ��� ��� �޼����� ����

 #pragma region
   - Ȯ�� / ����� �� �ִ� �ڵ����� ����
   - #pragma endregion���� ���� ���θ� ����

   decltype�� ���� �˾ƿ��ÿ�
 */

#include "Test.h"

typedef struct tag_Item
{
	char Name[256];
	int getsu;

}*pItem, Item;


int main()
{
	//Item Myitem;
	//strcpy(Myitem.Name, "���");
	//Myitem.getsu = 10;

	pItem Myitem;
	strcpy(Myitem->Name, "���");
	Myitem->getsu = 10;

	printf("%s, %d", Myitem->Name, Myitem->getsu);

	return 0;
}