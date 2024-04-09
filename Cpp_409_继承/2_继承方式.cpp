//#include<iostream>
//using namespace std;
//
//
//
//// 
//// 继承方式：公共、保护、私有
//// 
//// 父类中私有的内容，不论何种继承方式，子类都无法访问
//// 
//// 对于公共继承 public
//// 父类是什么类型，子类中就是什么类型，
//// 在父类中属性是public，子类中也是public
//// 在父类中属性是protected，子类中也是protected
//// 
//// 
//// 对于保护继承 protected
//// 在父类中属性是public，子类中变为protected
//// 在父类中属性是protected，子类中是protected
//// 
//// 
//// 对于私有继承 private
//// 在父类中属性是public，子类中变为private
//// 在父类中属性是protected，子类中是private
//// 
//// 
//// 
////
////
//
//// 父类
//
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
//	void func()
//	{
//		m_A = 10;
//		m_B = 20;
//
//		//m_C = 30; // err 无法访问父类的私有属性
//	}
//
//};
//// 公共继承测试
//void test01() 
//{
//	Son1 s1;
//	s1.m_A = 10;
//	// s1.m_B = 10; 父类中的保护属性，子类继承后也是保护属性，外界无法访问
//}
//
//// 保护继承
//class Son2:protected Base
//{
//public:
//	void func()
//	{
//		m_A = 10; // protected 
//		m_B = 10; // protected
//	}
//};
//// 保护继承测试
//void test02()
//{
//	Son2 s2;
//	// 保护继承，子类属性变为保护属性，无法访问
//	//s2.m_A;
//	//s2.m_B;
//}
//
//
//// 私有继承
//class Son3 :private Base
//{
//public:
//	void func()
//	{
//		// 私有继承，子类都为私有权限
//		m_A = 10;
//		m_B = 10; 
//	}
//};
//// 私有继承测试
//void test03()
//{
//	Son3 s3;
//	// 保护继承，子类属性变为私有权限，无法访问
//	//s3.m_A;
//	//s3.m_B;
//}
//
//// GrandSon , 继承 私有继承父类的Son
//class GrandSon :public Son3
//{
//public:
//	void func()
//	{
//		// 对于Son3 来说， 私有继承父类Base的属性均变为private
//		// 而对于GrandSon，无法继承父类Son3 中的私有成员
//		//m_A = 10;
//		//m_B = 10;
//	}
//};
//
//int main() {
//
//	
//
//	system("pause");
//	return 0;
//}