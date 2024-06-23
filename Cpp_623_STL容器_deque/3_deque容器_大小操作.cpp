#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <deque>


// 大小操作
/*
	deque.empty();         //判断容器是否为空
	deque.size();          //返回容器中元素的个数
	deque.resize(num);     //重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
						    //如果容器变短，则末尾超出容器长度的元素被删除。
	deque.resize(num,elem); //重新指定容器的长度为num,若容器变长，则以elem值填充新位置。
							//如果容器变短，则末尾超出容器长度的元素被删除。
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
//	cout << "is empty " << d1.empty() << endl;
//	cout << "deque size " << d1.size() << endl;
//
//	// deque.resize(num);   //重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
//							//如果容器变短，则末尾超出容器长度的元素被删除。
//	d1.resize(15);
//	printDeque(d1);
//	d1.resize(10);
//	// deque.resize(num, elem); //重新指定容器的长度为num,若容器变长，则以elem值填充新位置。
//							//如果容器变短，则末尾超出容器长度的元素被删除。
//	d1.resize(15, 100);
//	printDeque(d1);
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