//#include<iostream>
//using namespace std;
//#include<vector>
//
////
//// vector的构造函数
//// 
//// vector<T> v;                // 采用模板实现类实现，默认构造函数
//// vector(v.begin()，v.end()); // 将v[begin(), end())区间中的元素拷贝给本身,前闭后开
//// vector(n, elem);            // 构造函数将n个elem拷贝给本身。
//// vector(const vector& vec);  // 拷贝构造函数。
////
////
//
//void printVecror(vector<int> &v1)
//{
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//// vector 构造函数
//void test01()
//{
//	vector<int> v1; // 默认无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i+1);
//	}
//	printVecror(v1);
//
//	// 通过区间进行构造
//	vector<int> v2(v1.begin(), v1.end());
//	printVecror(v2);
//
//	// 构造函数:n个elem
//	vector<int> v3(10, 13);
//	printVecror(v3);
//
//
//	// 拷贝构造函数。
//	vector<int> v4(v3);
//	printVecror(v4);
//
//}
//
//int main() 
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}