//#include<iostream>
//#include<string>
//
//using namespace std;
//
////
//// 成员变量和成员函数分开存储
//// 
//// 只有非静态的成员变量属于类的对象上，其他都不属于
//// 非静态成员变量，属于类的对象上
//// 静态成员变量，不属于类的对象上
//// 非静态成员函数，不属于类的对象上
//// 静态成员函数，不属于类的对象上
//// 
////
//
//class Person
//{
//public:
//	// 非静态成员变量，在类的对象上
//	int a; // 0-3
//	char d; // 4
//	char e; // 5
//	int c;  // 8-11
//	// 也有对齐
//	
//
//	// 静态成员变量，不在类的对象上
//	static int b;
//
//	// 非静态成员函数，不在类的对象上
//	void func() {
//
//	}
//	static void func2() {
//
//	}
//	
//};
//
//void  test01() 
//{
//	//// 空的对象，占一个字节
//	//// C++ 编译器会给每一个空对象也分配一个空间
//	//Person p;  
//	//cout << sizeof(p) << endl;  // 1
//	
//	// 非静态成员变量，在类的对象上，计算内存
//	Person p1;  
//	cout << sizeof(p1) << endl; //4
//	
//	// 静态成员变量，不在类的对象上
//	Person p2;
//	cout << sizeof(p2) << endl; //4
//
//
//	// 非静态成员函数，不在类的对象上
//	Person p3;
//	cout << sizeof(p3) << endl; //4
//
//	// 静态成员函数，不在类的对象上
//	Person p4;
//	cout << sizeof(p4) << endl; //4
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}