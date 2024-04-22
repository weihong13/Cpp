//#include<iostream>
//using namespace std;
//#include<vector>
////
//// 插入删除
//// 
//// 尾部插入元素ele
//// push back(ele); 
//// 
//// 删除最后一个元素
//// pop_back();
//// 
//// 迭代器指向位置pos插入元素ele
//// insert(const iterator pos, ele);
//// 
//// 迭代器指向位置pos插入count个元素ele
//// insert(const_iterator pos，int count, ele);
//// 
//// 删除迭代器指向的元素
//// erase(const iterator pos); 
//// 
//// 删除迭代器从start到end之间的元素
//// erase(const_iterator start, const_iterator end);
//// 
//// clear(); //删除容器中所有元素
//	
//// 
//// 
//// 
//// 
//// 
//// 
//
//
//
//
//void printVecror(vector<int>& v1)
//{
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;
//	// 尾插
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	cout << v1.capacity() << endl;
//	printVecror(v1);
//	// 尾删除
//	v1.pop_back();
//	cout << v1.capacity() << endl; // 容量不变
//	printVecror(v1);
//
//	// 迭代器指向位置pos插入元素ele
//	// insert(const iterator pos, ele);
//	
//	v1.insert(v1.begin(), 100);
//	cout << v1.capacity() << endl; // 容量不变
//	printVecror(v1);
//
//
//	// 迭代器指向位置pos插入count个元素ele
//	// insert(const_iterator pos，int count, ele);
//	v1.insert(v1.begin(), 2, 99);
//	cout << v1.capacity() << endl; // 容量 9
//	printVecror(v1);
//
//	// 删除迭代器指向的元素
//	// erase(const iterator pos); 
//	v1.erase(v1.begin()+2);
//	cout << v1.capacity() << endl; // 容量不变
//	printVecror(v1);
//
//
//	// 删除迭代器从start到end之间的元素
//	// erase(const_iterator start, const_iterator end);
//	// [start,end) 左闭右开
//	v1.erase(v1.begin(), v1.begin() + 2);
//	printVecror(v1);
//
//
//	v1.clear(); //删除容器中所有元素
//	cout << v1.capacity() << endl; // 容量不变
//	printVecror(v1);
//
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}