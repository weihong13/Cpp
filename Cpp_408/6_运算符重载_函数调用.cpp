//#include<iostream>
//#include<string>
//
//using namespace std;
//
////
//// 函数调用运算符重载 （）
//// 仿函数--stl常用
//// 仿函数没用固定写法，非常灵活
////
//
//
//class MyPrint
//{
//public:
//
//	void operator()(string str)
//	{
//		cout << str << endl;
//	}
//};
//
//class MyAdd
//{
//public:
//
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//};
//
//void test01()
//{
//	MyPrint myPrint;
//	myPrint("weihong");
//
//	// 匿名函数对象
//	cout << MyAdd()(100,100)<<endl;
//
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}