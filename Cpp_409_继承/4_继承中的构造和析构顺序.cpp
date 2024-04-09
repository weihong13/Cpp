//#include<iostream>
//using namespace std;
//
//
//// 子类继承父类后,当子类创建对象时,子类也会调用父类的构造
//
//// 
//// 父类子类的构造析构顺序
//// Base的构造函数!
//// Son的构造函数!
//// Son的析构函数!
//// Base的析构函数!
//// 
//// 构造先父后子
//// 析构先子后父
////
//
//
//// 父类
//class Base
//{
//
//public:
//	Base() {
//		cout << "Base的构造函数!" << endl;
//	}
//	~Base() {
//		cout << "Base的析构函数!" << endl;
//	}
//
//};
//
//// 公共继承
//class Son :public Base
//{
//public:
//	Son() {
//		cout << "Son的构造函数!" << endl;
//	}
//	~Son() {
//		cout << "Son的析构函数!" << endl;
//	}
//};
// 
//void test01() 
//{
//	
//	Son s1;
//
//
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