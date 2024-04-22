//#include<iostream>
//using namespace std;
//#include<vector>
////
//// 容量大小操作
//// 
//// 
//// empty();         // 判断容器是否为空
//// capacity();      // 容器的容量
//// size();          // 返回容器中元素的个数
//// resize(int num); // 重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
////					// 如果容器变短，则末尾超出容器长度的元素被删除。
//// resize(int num, elem);// 重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
////                       // 如果容器变短，则末尾超出容器长度的元素被删除
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
//	// 判断容器是否为空
//	vector<int> v1;
//	cout << v1.empty() << endl;
//	v1.assign(10, 11);
//	cout << v1.empty() << endl;
//
//	// 容器的容量 capacity();
//	cout << v1.capacity() << endl;
//	// size();   // 返回容器中元素的个数
//	cout << v1.size() << endl;
//
//	// resize(int num);
//	// 重新指定容器的长度为num，若容器变长，则以默认值0填充新位置。
//    // 如果容器变短，则末尾超出容器长度的元素被删除。
//	v1.resize(12);
//	cout << v1.capacity() << endl;
//	printVecror(v1);
//	v1.resize(8);
//	cout << v1.capacity() << endl;
//	cout << v1.size() << endl;
//	printVecror(v1);
//
//	// resize(int num, elem);
//	// 重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//    // 如果容器变短，则末尾超出容器长度的元素被删除
//	v1.resize(12, 9);
//	cout << v1.capacity() << endl;
//	cout << v1.size() << endl;
//	printVecror(v1);
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}