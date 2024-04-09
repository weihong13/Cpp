//#include<iostream>
//using namespace std;
//
//
////
//// 继承中的对象模型
////
//
//// 父类
//class Base
//{
//
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//
//};
//
//// 公共继承
//class Son1 :public Base
//{
//public:
//	int m_D;
//};
//// cl /d1 reportSingleClassLayoutSon 3_继承中的对象模型.cpp
//// 提供命令行查看子类信息
//
//// class Son1      size(16) :
////	       +-- -
////	0      | +-- - (base class Base)
////	0      | | m_A
////	4      | | m_B
////	8      | | m_C
////         | +-- -
////	12     | m_D
////	       + -- -
//// 
//// 
//void test01() 
//{
//	// 
//	// 在父类中,所有的非静态成员都会被继承(包括私有的属性)
//	// 父类中的私有属性,是被编译器隐藏了,因此访问不到,但确实被继承了
//	cout << "size of Son: " << sizeof(Son1) << endl; // 16
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