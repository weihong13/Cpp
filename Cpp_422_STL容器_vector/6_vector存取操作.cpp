//#include<iostream>
//using namespace std;
//#include<vector>
////
//// vector存取操作
//// 
//// at(int idx);  // 返回索引idx所指的数据
//// operator[];   // 返回索引idx所指的数据, [] 重载
//// front();      // 返回容器中第一个数据元素
//// back();       // 返回容器中最后一个数据元素
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
//
//	// at(int idx);  // 返回索引idx所指的数据
//	cout << "v1.at(2)：" << v1.at(2) << endl;
//	// operator[];   // 返回索引idx所指的数据, [] 重载
//	cout << "v1[2]：   " << v1[2] << endl;
//	// front();      // 返回容器中第一个数据元素
//	cout << "第一个元素为：" << v1.front() << endl;
//	// back();       // 返回容器中最后一个数据元素
//	cout << "最后一个元素为：" << v1.back() << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}