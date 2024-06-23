#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <deque>
// 

//
// deque 基本概念
// 
// 双端数组-可以对头部进行操作
// 
// deque与vector区别:
// vector对于头部的插入删除效率低，数据量越大，效率越低
// deque相对而言，对头部的插入删除速度回比vector快
// vector访问元素时的速度会比deque快, 这和两者内部实现有关
// 
// vector 是一块连续的线性空间
//


// 构造函数
/*
	deque<T> deqT;          //默认构造形式
	deque(beg, end);        //构造函数将[beg,end)区间中的元素拷贝给本身,
	deque(n, elem);         //构造函数将n个elem拷贝给本身。
	deque(const deque &deg);//拷贝构造函数
*/

//void printDeque(const deque<int>& d1)
//{
//	// 这里因为是只打印 deque容器中的数据，不进行改变，所有传入时，使用const 修饰参数
//	// 因为传入参数时，使用const修饰了，所以，这里的迭代器也需要改为 const_iterator(只读迭代器)
//	for (deque<int>::const_iterator it = d1.begin(); it != d1.end(); it++)
//	{
//		// *it = 100; // error
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test()
//{	
//	//deque<T> deqT;  //默认构造形式
//	deque<int> d1;
//
//	// 插入数据
//	for (int i = 1; i <= 10; i++)
//	{
//		d1.push_back(i);
//	}
//	// 打印
//	printDeque(d1);
//
//
//	// deque(beg, end); //构造函数将[beg,end)区间中的元素拷贝给本身
//	deque<int> d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	// deque(n, elem);  //构造函数将n个elem拷贝给本身。
//	deque<int> d3(10, 1);
//	printDeque(d3);
//
//	// deque(const deque & deg);//拷贝构造函数
//	deque<int> d4(d3);
//	printDeque(d4);
//
//}


//int main()
//{
//	test();
//
//
//	system("pause");
//	return 0;
//}
