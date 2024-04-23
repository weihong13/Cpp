//#include<iostream>
//using namespace std;
//#include<deque>
//
////
//// deque插入删除操作
//// 
//// 两端插入操作:
//// push back(elem);    // 在容器尾部添加一个数据
//// push front(elem);   // 在容器头部插入一个数据
//// pop_back();         // 删除容器最后一个数据
//// pop_front();        // 删除容器第一个数据
//
//
//
//
//// 指定位置操作:
//// insert(pos, elem);     // 在pos位置插入一个elem元素的拷贝，返回新数据的位置。
//// insert(pos, n, elem);  // 在pos位置插入n个elem数据，无返回值。
//// insert(pos, beg, end); // 在pos位置插入[beg,end)区间的数据，无返回值。
//// clear();               // 清空容器的所有数据
//// erase(beg, end);       //删除[beg,end)区间的数据，返回下一个数据的位置。
//// erase(pos);            //删除pos位置的数据，返回下一个数据的位置。
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
//// 两端插入操作:
//// push back(elem);    // 在容器尾部添加一个数据
//// push front(elem);   // 在容器头部插入一个数据
//// pop_back();         // 删除容器最后一个数据
//// pop_front();        // 删除容器第一个数据
//
//void test01()
//{
//	//默认构造
//	deque<int> d1;
//	// 头插
//	d1.push_front(3);
//	d1.push_front(2);
//	d1.push_front(1);
//	// 尾插
//	d1.push_back(4);
//	d1.push_back(5);
//	printDeque(d1);
//
//	// 头删
//	d1.pop_front();
//	// 尾删
//	d1.pop_back();
//	printDeque(d1);
//
//}
//
//// 指定位置操作:
//// insert(pos, elem);     // 在pos位置插入一个elem元素的拷贝，返回新数据的位置。
//// insert(pos, n, elem);  // 在pos位置插入n个elem数据，无返回值。
//// insert(pos, beg, end); // 在pos位置插入[beg,end)区间的数据，无返回值。
//// erase(beg, end);       //删除[beg,end)区间的数据，返回下一个数据的位置。
//// erase(pos);            //删除pos位置的数据，返回下一个数据的位置。
//// clear();               // 清空容器的所有数据
//void test02()
//{
//	deque<int> d2;
//	// insert(pos, elem);     
//	// 在pos位置插入一个elem元素的拷贝，返回新数据的位置。
//	d2.insert(d2.begin(), 1);
//	printDeque(d2);
//
//	// insert(pos, n, elem);  
//	// 在pos位置插入n个elem数据，无返回值。
//	d2.insert(d2.begin() + 1, 3, 13);
//	printDeque(d2);
//
//	// insert(pos, beg, end); 
//	// 在pos位置插入[beg,end)区间的数据，无返回值。
//	d2.insert(d2.begin() + 1, d2.begin(), d2.end());
//	printDeque(d2);
//
//	// erase(beg, end);       
//	//删除[beg,end)区间的数据，返回下一个数据的位置。
//	d2.erase(d2.begin() + 1, d2.begin() + 5);
//	printDeque(d2);
//
//
//	// erase(pos);            
//	//删除pos位置的数据，返回下一个数据的位置。
//	d2.erase(d2.begin());
//	printDeque(d2);
//
//	// clear();               
//	// 清空容器的所有数据
//	d2.clear();
//	printDeque(d2);
//}
//int main()
//{
//	// test01();
//	test02();
//
//	system("pause");
//	return 0;
//}