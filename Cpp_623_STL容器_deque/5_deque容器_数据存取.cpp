#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <deque>

// 数据存取

/*
	at(int idx);   //返回索引idx所指的数据
	operator[];    //返回索引idx所指的数据
	front();       //返回容器中第一个数据元素
	back();        //返回容器中最后一个数据元素
*/

void printDeque(const deque<int>& d1)
{	// 打印
	for (deque<int>::const_iterator it = d1.begin(); it != d1.end(); it++)
	{
		// *it = 100; // error
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//deque<T> deqT;  //默认构造形式
	deque<int> d1;

	// 插入数据
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