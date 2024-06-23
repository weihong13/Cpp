#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <deque>



// 插入删除

/*
	两端插入操作:
	push back(elem);    //尾插，在容器尾部添加一个数据
	push front(elem);   //头插，在容器头部插入一个数据
	pop_back();         //尾删，删除容器最后一个数据
	pop_front();        //头删，删除容器第一个数据
	
	指定位置操作:
	insert(pos,elem);    //在pos位置插入一个elem元素的拷贝，返回新数据的位置。
	insert(pos,n,elem);  //在pos位置插入n个elem数据，无返回值。
	insert(pos,beg,end); //在pos位置插入[beg,end)区间的数据，无返回值。
	clear();             //清空容器的所有数据
	erase(beg,end);      //删除[beg,end)区间的数据，返回下一个数据的位置。
	erase(pos);          //删除pos位置的数据，返回下一个数据的位置。
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

/*
两端插入操作:
	push back(elem);    //尾插，在容器尾部添加一个数据
	push front(elem);   //头插，在容器头部插入一个数据
	pop_back();         //尾删，删除容器最后一个数据
	pop_front();        //头删，删除容器第一个数据
*/
//void test01()
//{
//	//deque<T> deqT;  //默认构造形式
//	deque<int> d1;
//
//	// 插入数据
//	for (int i = 1; i <= 10; i++)
//	{
//		d1.push_back(i);  // 尾插
//		d1.push_front(i + 100); // 头插
//	}
//
//	printDeque(d1);
//	d1.pop_front(); // 头删
//	d1.pop_back();  // 尾删
//
//}
///*
//指定位置操作:
//	insert(pos,elem);    //在pos位置插入一个elem元素的拷贝，返回新数据的位置。
//	insert(pos,n,elem);  //在pos位置插入n个elem数据，无返回值。
//	insert(pos,beg,end); //在pos位置插入[beg,end)区间的数据，无返回值。
//	clear();             //清空容器的所有数据
//	erase(beg,end);      //删除[beg,end)区间的数据，返回下一个数据的位置。
//	erase(pos);          //删除pos位置的数据，返回下一个数据的位置
//*/
//void test02()
//{
//	//deque<T> deqT;  //默认构造形式
//	deque<int> d1;
//
//	d1.insert(d1.begin(), 10);
//	d1.insert(d1.begin(), 20);
//	d1.insert(d1.begin(), 100);
//	d1.insert(d1.begin(), 200);
//
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.insert(it, 3, 10000);
//
//	deque<int> d2;
//	d1.insert(d2.begin(), 1);
//	d1.insert(d2.begin(), 2);
//	d1.insert(d2.begin(), 3);
//	// insert(pos,beg,end); //在pos位置插入[beg,end)区间的数据，无返回值
//	d1.insert(it, d2.begin(), d2.end());
//	// clear(); //清空容器的所有数据
//	d2.clear();
//
//	// erase(beg, end); //删除[beg,end)区间的数据，返回下一个数据的位置。
//	d1.erase(d1.begin() + 1, d1.end() - 5);
//
//	// erase(pos);   //删除pos位置的数据，返回下一个数据的位置
//	d1.erase(it);
//
//}

//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}