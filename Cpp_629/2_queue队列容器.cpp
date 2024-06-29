#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>

using namespace std;

/*
	构造函数:
		queue<T> que;            //queue采用模板类实现，queue对象的默认构造形式
		queue(const queue &que); //拷贝构造函数

	赋值操作:
		queue& operator=(const queue &que);  //重载等号操作符

	数据存取:
		push(elem); //往队尾添加元素
		pop();      //从队头移除第一个元素
		back();     //返回最后一个元素
		front();    //返回第一个元素

	大小操作:
		empty();   //判断堆栈是否为空
		size();    //返回栈的大小
*/

//int main()
//{
//	// 默认构造
//	queue<int> q;
//
//	// 判空，空返回1 非空返回0
//	int ret = q.empty();
//	cout << ret << endl;
//
//	// 进队列
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	q.push(4);
//	q.push(5);
//	q.push(6);
//	
//	// 出队列
//	q.pop();
//
//	// 拷贝构造
//	queue<int> q1(q);
//	// 等号操作符重载
//	queue<int> q2 = q1;
//
//	// 出栈
//	q2.pop();
//
//	// 查看队头元素
//	cout << q2.front() << endl;
//	// 查看队尾元素
//	cout << q2.back()<< endl;
//	// 查看队列的大小
//	cout << q2.size() << endl;
//
//
//
//	return 0;
//}