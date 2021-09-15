/*
==Note==
 // STL
   - ���α׷��� �ʿ��� �ڷᱸ���� �˰��� Templete ���·� �����ϴ� ���̺귯��
 // STL ����
   - Container					: �ڷᱸ���� ��Ÿ���� ��ü���� �����ϴ� ��ü
   - Container Adapter			: ���� ����� �������̽��� �����Ͽ� ���ο� �������̽��� ���� ���� ��ҷ� ����
   - Interactor					: �����̳ʿ� �ִ� ��ҵ��� ��ȸ�ϰų� ������ �� �ְ� ���ִ� ��ü
   - Algorithm					: �����͸� �ٷ�� ���� �Լ�
   - Functor					: �����ڸ� �����ε��� Ŭ������ ��ü
   - Allocator					: �����̳��� �޸� �Ҵ� ��å�� ĸ��ȭ�� ��ü

 // Container
   - ������ �����̳� 
		- �ڷḦ ���������� �����ϴ� �����̳�
		- �������� ������ �����̹Ƿ�, �����͸� �ִ� ������� ��Ұ� �Ҵ�
		- Ư���� �����̳�, ���� ��Ģ ������ �����͸� ���� ����
		- vector, list, deque

 // vector : �迭 ��� �����̳�
   - ��Ҹ� ���� / ������ �� �ڵ����� �ڽ��� ũ�⸦ ����
   - ���� / ���� �ӵ� : LOW
   - ���� / ���Ž� �ݺ��� ��ȿȭ ������ �Ͼ ���ɼ� ����
  
 // list : ���� ���� ����Ʈ
    - Ž�� �ӵ� : LOW
	- ����� ���� ���� �ӵ� : FAST
*/

#include<vector>
#include<iostream>
using namespace std;

int main()
{
	// vector <������ �ڷ���> ������ �̸�
	vector <int> vec;

	// �ڿ� ��Ҹ� ����
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);

	vector<int>::iterator iter = vec.begin();
	// begin() : ������ ù ��° ����� ��ġ�� ����
	// iter : �ּҰ��� �����ϴ� ����

	// cout << iter[1] << endl;
	// cout << *(iter + 1) << endl;
	// 
	// cout << "front()" << endl;
	// cout << vec.front() << endl;
	// 
	// cout << "back()" << endl;
	// cout << vec.back() << endl;
	// 
	// cout << "begin()" << endl;
	// cout << *vec.begin() << endl;

	for (iter = vec.begin(); iter != vec.end(); iter++)
		cout << *iter << endl;

	// ���������� �߰��� ��Ҹ� ����
	vec.pop_back();

	cout << "back()" << endl;
	cout << vec.back() << endl;
	cout << vec.size() << endl;

	return 0;
}