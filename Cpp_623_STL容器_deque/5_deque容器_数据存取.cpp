#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <deque>

// ���ݴ�ȡ

/*
	at(int idx);   //��������idx��ָ������
	operator[];    //��������idx��ָ������
	front();       //���������е�һ������Ԫ��
	back();        //�������������һ������Ԫ��
*/

void printDeque(const deque<int>& d1)
{	// ��ӡ
	for (deque<int>::const_iterator it = d1.begin(); it != d1.end(); it++)
	{
		// *it = 100; // error
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//deque<T> deqT;  //Ĭ�Ϲ�����ʽ
	deque<int> d1;

	// ��������
	for (int i = 1; i <= 10; i++)
	{
		d1.push_back(i);
	}

	int ret = d1.at(4);
	cout << ret << endl;
	cout << d1[5] << endl;
	cout << d1.front() << endl;
	cout << d1.back() << endl;


}


int main()
{
	test01();


	system("pause");
	return 0;
}