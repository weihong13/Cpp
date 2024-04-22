//#include<iostream>
//using namespace std;
//#include<vector>
////
//// vector容器互换
//// 
//// 实现两个容器的元素互换，容量也交换了
//// swap(vec)
//// 
//
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
//	// 构造
//	vector<int> v1(10, 11);
//	vector<int> v2(5, 12);
//
//	
//	cout << "v1的容量：" << v1.capacity() << endl;
//	cout << "v2的容量：" << v2.capacity() << endl;
//	printVecror(v1);
//	printVecror(v2);
//	cout << "-----交换-----"  << endl;
//	v2.swap(v1);
//	cout << "v1的容量：" << v1.capacity() << endl;
//	cout << "v2的容量：" << v2.capacity() << endl;
//	
//}
//
//// swap 使用技巧
//// 使用swap收缩内存
//void test02()
//{
//	vector<int> v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	// 系统分配内存时，会比10w大一些。
//	cout << "v的容量：" << v.capacity() << endl; // 138255
//	cout << "v的大小：" << v.size() << endl;     // 100000
//
//	// 使用resize 改变容量大小，其大小会改为3 ，但容量不变
//	v.resize(3);
//	cout << "v的容量：" << v.capacity() << endl; // 138255
//	cout << "v的大小：" << v.size() << endl;     // 3
//
//	vector<int>(v).swap(v);
//	// 分为两个部分  vector<int>(v)  和  .swap(v)
//	// vector<int>(v) 
//	// 匿名对象，会根据已存在的对象大小（3），
//	// 在内存中创建一个一模一样的对象，但是没有具体的名字
//	// 在本条语句结束后，系统自动回收
//	// 
//	// .swap(v)
//	// 将匿名对象和v进行交换，把容量为138255 给了 匿名对象
//	// 容量为3 的 给了 v 
//	// 而匿名对象在本条语句结束后被回收
//	// v 的容量缩小为 3
//	//
//	cout << "v的容量：" << v.capacity() << endl; // 3
//	cout << "v的大小：" << v.size() << endl;     // 3
//}
//
//int main()
//{
//	// test01();
//	test02();
//	system("pause");
//	return 0;
//}