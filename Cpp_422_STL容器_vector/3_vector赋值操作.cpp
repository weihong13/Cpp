//#include<iostream>
//using namespace std;
//#include<vector>
////
//// 赋值操作
////
//// vector& operator=(const vector& vec); // 重载等号操作符
//// assign(beg, end);                     // 将[beg, end)区间中的数据拷贝赋值给本身。
//// assign(n, elem);                      // 将n个elem拷贝赋值给本身。
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
//	vector<int> v1(10, 13);
//
//	// 重载等号操作符
//	vector<int> v2;
//	v2 = v1;
//	printVecror(v2);
//
//	// 将[beg, end)区间中的数据拷贝赋值给本身。
//	vector<int> v3;
//	v3.assign(v2.begin(), v2.end());
//	printVecror(v3);
//
//	// 将n个elem拷贝赋值给本身。
//	vector<int> v4(10, 11);
//	printVecror(v4);
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}