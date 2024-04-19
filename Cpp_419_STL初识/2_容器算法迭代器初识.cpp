//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////
//// 容器、算法、迭代器初识
//// 
//// STL中最常用的容器是Vector，可以理解为数组 
//// 
//// vector容器存放内置数据类型，并实现插入、遍历等操作
////
//
//
//
//void myIntPrint(int val)
//{
//	cout << val << endl;
//}
//
//// vector容器存放内置数据类型
//void test01()
//{
//	// 创建了一个vector容器，数组
//	vector<int> arr;
//
//	// 向容器中插入元素
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//	arr.push_back(40);
//	arr.push_back(50);
//
//	//// 通过迭代器访问中期中的数据
//	//vector<int>::iterator itBegin = arr.begin(); // 起始迭代器，指向容器中的第一个元素
//	//vector<int>::iterator itEnd = arr.end();     // 结束迭代器 指向容器中最后一个元素的下一个位置
//	//// 遍历
//	//for (itBegin; itBegin != itEnd; itBegin++)
//	//{
//	//	cout << *itBegin << endl;
//	//}
//
//	// 通过算法--STL提供遍历算法(for_each)，头文件<algorithm>
//	// for_each(_InIt _First, _InIt _Last, _Fn _Func)
//	// 在for_each内部、也是一个for循环，会将first的内容解引用传入_Func
//	for_each(arr.begin(), arr.end(), myIntPrint);
//
//
//}
//void myStrPrint(string str)
//{
//	cout << str << endl;
//}
//
//void test02()
//{
//	vector<string> str;
//
//	str.push_back("weihong1");
//	str.push_back("weihong2");
//	str.push_back("weihong3");
//	str.push_back("weihong4");
//	str.push_back("weihong5");
//
//	for_each(str.begin(), str.end(), myStrPrint);
//}
//
//
//int main() 
//{
//	test02();
//
//	system("pause");
//	return 0;
//}
//
//
