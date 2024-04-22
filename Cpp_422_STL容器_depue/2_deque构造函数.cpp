//#include<iostream>
//using namespace std;
//#include<deque>
//
//
//
////
//// deque构造函数
//// deque<T> degT;     // 默认构造形式
//// deque(n, elem);  // 构造函数将[beg,end)区间中的元素拷贝给本身
//// deque(beg, end); // 构造函数将n个elem拷贝给本身
//// deque(const deque& deg); // 拷贝构造函数
//// 
//// 
////
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
//	// 默认构造
//	deque<int> d1;
//
//	// deque(n, elem);  
//	// 构造函数将[beg,end)区间中的元素拷贝给本身
//	deque<int> d2(5, 13);
//	printDeque(d2);
//
//	// deque(beg, end); 
//	// 构造函数将n个elem拷贝给本身
//	deque<int> d3(d2.begin(), d2.end());
//	printDeque(d3);
//
//	// deque(const deque& deg); 
//	// 拷贝构造函数
//	deque<int> d4(d3);
//	printDeque(d4);
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