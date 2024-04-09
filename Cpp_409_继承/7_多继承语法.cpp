//#include <iostream>
//using namespace std;
//
////
//// 多继承语法
//// C++ 中允许 子类继承多个父类
//// 
//// 语法
//// class 子类: 继承方式 父类1, 继承方式 父类2
//// 
//// 多继承可能引发父类中存在同名,需要加作用域进行区分
//// 
//// C++ 实际开发中不建议使用多继承 
////
//
//// 父类1
//class Base1
//{
//public:
//	int m_A;
//	int m_S;
//};
//// 父类2
//class Base2
//{
//public:
//	int m_B;
//	int m_S;
//
//};
//
//// 子类1
//class Son :public Base1, public Base2
//{
//public:
//	int m_C;
//};
//
//void test01()
//{
//	cout << "size of Son: " << sizeof(Son) << endl;
//
//	Son s1;
//	s1.m_A = 100;
//	s1.m_B = 200;
//	s1.m_C = 300;
//
//	// 父类存在同名成员属性,就会冲突
//	// s1.m_S = 100; // err 不知道访问那个父类的成员属性
//	// 得写出作用域
//	s1.Base1::m_S = 100;
//	s1.Base2::m_S = 200;
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