#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<list>
using namespace std;



bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	list<int> ls; // ˫������

	// ��㣺 ��Ϣ��---ָ����
	// 
	// ��һ���ڵ� next
	// ��һ���ڵ� prior
	//

	cout << ls.size() << endl; //�����н�������Ԫ�ظ�����
	ls.push_back(5); // β��
	ls.push_front(4); // ͷ��
	ls.push_back(3);
	ls.push_front(1);
	ls.push_back(2);

	ls.sort(); // ������--Ĭ������

	ls.sort(cmp); // ���ñȽ���ʵ�ֽ���--list ���õ�sort����

	for (auto i : ls) 
	{
		cout << i << " ";
	}
	cout << endl;

	for (auto it = ls.begin(); it != ls.end(); it++)
	{
		cout << *it << " ";
	}


	return 0;
}