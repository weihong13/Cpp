#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <deque>
/*
	deque& operator = (const deque &deq); //重载等号操作符
	assign(beg, end);                  //将[beg, end)区间中的数据拷贝赋值给本身
	assign(n, elem);                   //将n个elem拷贝赋值给本身。
*/

//void printDeque(const deque<int>& d1)
//{	// 打印
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
//	//deque<T> deqT;  //默认构造形式
//	deque<int> d1;
//
//	// 插入数据
//	for (int i = 1; i <= 10; i++)
//	{
//		d1.push_back(i);
//	}
//	
//	// deque& operator=(const deque & deq); //重载等号操作符
//	deque<int> d2;
//	d2 = d1;
//	printDeque(d2);
//
//	// assign(beg, end);  //将[beg, end)区间中的数据拷贝赋值给本身
//	deque<int> d3;
//	d3.assign(d2.begin(), d2.end());
//	printDeque(d3);
//
//	// assign(n, elem);   //将n个elem拷贝赋值给本身。
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