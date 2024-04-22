//#include<iostream>
//using namespace std;
//
//#include<deque>
//
//// deque& operator=(const deque& deg); // 重载等号操作符
//// assign(beg, end);                   // 将[beg, end)区间中的数据拷贝赋值给本身。
//// assign(n, elem);                    // 将n个elem拷贝赋值给本身。
//
//
//void printDeque(deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		// const_iterator 只读的迭代器，不能修改
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//构造
//	deque<int> d1(5,13);
//
//	// deque& operator=(const deque & deg); 
//	// 重载等号操作符
//	deque<int> d2;
//	d2 = d1;
//	printDeque(d2);
//
//	// assign(beg, end);
//	// 将[beg, end)区间中的数据拷贝赋值给本身。
//	deque<int> d3;
//	d3.assign(d2.begin(), d2.end());
//	printDeque(d3);
//
//	// assign(n, elem);                   
//	// 将n个elem拷贝赋值给本身。
//	deque<int> d4;
//	d4.assign(5, 11);
//	printDeque(d4);
//
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}