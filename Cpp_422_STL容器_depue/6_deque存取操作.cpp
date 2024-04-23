//
//#include<iostream>
//using namespace std;
//#include<deque>
//
////
//// deque存取操作
//// 
//// at(int idx);  // 返回索引idx所指的数据
//// operator[];   // 返回索引idx所指的数据  [] 重载
//// front();      // 返回容器中第一个数据元素
//// back();       // 返回容器中最后一个数据元素
//// 
//// 
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
//
//
//void test01()
//{
//	
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_back(40);
//	d1.push_back(50);
//	printDeque(d1);
//	// at(int idx);  
//	// 返回索引idx所指的数据
//	cout << d1.at(0) << endl;
//
//	// operator[];   
//	// 返回索引idx所指的数据  [] 重载
//	cout << d1[1] << endl;
//
//	// front();      
//	// 返回容器中第一个数据元素
//	cout << d1.front() << endl;
//
//	// back();       
//	// 返回容器中最后一个数据元素
//	cout << d1.back() << endl;
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
//
//
//
//
