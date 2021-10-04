/*
==Note==

 // Map
  - Container : ���� �����̳� (vs ������ �����̳�)
  - ���������̳� : ������ ��Ģ�� ���� �ڷḦ ����ȭ�Ͽ� �����ϴ� �����̳�
  - key�� value�� ���� �����ִ� ���� ��� ����
  - ����� Ž�� �ӵ� : HIGH

  - key�� value�� ������ ����Ǵ� �����̳�
  - ��Ҵ� key, value�� ���� pair ������ ���
  - key�� �ߺ� ��� X
*/

#include<iostream>
#include<map>
using namespace std;

#define PrintMap(map) for (auto iter = fruits.begin(); iter != fruits.end(); iter++){ cout << iter->first << " : " << iter->second << endl; }

int main()
{
	// map ����
	// map ����� key type(����) / value type(����)
	map<string, string>fruits;

	// pair ��ü ����
	pair<string, string> apple;
	apple.first = "���"; // key
	apple.second = "Apple"; // value

	// ������ pair��ü�� ��ҷ� �߰�
	fruits.insert(apple);
	// insert : map�� ��Ҹ� �߰��ϴ� �Լ�

	fruits.insert(pair<string, string>("�ٳ���", "Banana"));

	fruits.insert(make_pair("����", "Grape"));
	// make_pair : pair�� �����ϴ� �Լ�

	fruits["������"] = "Orange";
	// ���� [key]�� ���� ��Ұ� �������� �ʴٸ� key�� ���� ��Ҹ� �߰��ϰ� ���� value�� ����
	// ���� key�� ���� ��Ұ� �ִٸ� �ش� key�� ���� vlaue�� ����

	/*
	���
	�ٳ��� ���
	�ٳ��� ��� ������
	�ٳ��� ��� ������ ����
	*/

	fruits["����"] = "WhiteGrape";

	fruits.insert(make_pair("���", "Melon"));
	fruits.insert(make_pair("����", "Watermelon"));
	fruits.insert(make_pair("��纣��", "Blueberry"));

	fruits["����"] = "Lemon";
	fruits["�����"] = "Lazberry";

	PrintMap(furits);

	cout << endl;

	// '�ٳ���'��� Ű�� ���� ��Ҹ� ����
	fruits.erase("�ٳ���");
	PrintMap(fruits);

	auto iter = fruits.find("����");
	// find(key) : key�� ���� ����� ��ġ�� ��ȯ
	//				ã�� ���ߴٸ� end()�� ��ȯ

	if (iter == fruits.end()) cout << "������ ��Ҵ� �������� �ʽ��ϴ�." << endl;
	else
	{
		cout << "��Ҹ� ã�ҽ��ϴ�!" << endl;
		cout << iter->first << " : " << iter->second << endl;
	}

	fruits.clear();

	fruits.empty();
	
	fruits.size();

	return 0;
}