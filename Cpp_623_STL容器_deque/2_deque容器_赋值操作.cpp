#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <deque>
/*
	deque& operator = (const deque &deq); //���صȺŲ�����
	assign(beg, end);                  //��[beg, end)�����е����ݿ�����ֵ������
	assign(n, elem);                   //��n��elem������ֵ������
*/

//void printDeque(const deque<int>& d1)
//{	// ��ӡ
//	for (deque<int>::const_iterator it = d1.begin(); it != d1.end(); it++)
//	{
//		// *it = 100; // error
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//deque<T> deqT;  //Ĭ�Ϲ�����ʽ
//	deque<int> d1;
//
//	// ��������
//	for (int i = 1; i <= 10; i++)
//	{
//		d1.push_back(i);
//	}
//	
//	// deque& operator=(const deque & deq); //���صȺŲ�����
//	deque<int> d2;
//	d2 = d1;
//	printDeque(d2);
//
//	// assign(beg, end);  //��[beg, end)�����е����ݿ�����ֵ������
//	deque<int> d3;
//	d3.assign(d2.begin(), d2.end());
//	printDeque(d3);
//
//	// assign(n, elem);   //��n��elem������ֵ������
//	deque<int> d4;
//	d4.assign(10, 10);
//	printDeque(d4);
//
//}
//
//
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}