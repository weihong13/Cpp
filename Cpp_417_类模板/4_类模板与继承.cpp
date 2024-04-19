//#include<iostream>
//
//using namespace std;
//
//
////
//// 类模板与继承
//// 
//// 注意事项
//// 1. 如果一个子类继承的父类是一个类模板，子类在声明时，需要指定出父类T中的类型
//// 2. 如果不指定，编译器无法给子类分配内存
//// 3. 如果想灵活指定出父类中T的类型，那么子类也得成为类模板
//// 4.
////
//
//// son1 的父类 -- 是一个类模板
//template<class T>
//class Base
//{
//public:
//	// 虚函数-这个父类是一个抽象类模板
//	virtual void show() = 0;
//	T t;
//};
//
//// 1. 如果一个子类继承的父类是一个类模板，子类在声明时，需要指定出父类T中的类型
//// 2. 如果不指定，编译器无法给子类分配内存
//class Son1 : public Base<int> 
//{
//public:
//	// 普通构造函数
//	Son1()
//	{
//		;
//	}
//	// 带参数的构造
//	Son1(int a)
//	{
//		this->t = a;
//	}
//	// 拷贝构造
//	Son1(const Son1 &s)
//	{
//		this->t = s.t;
//	}
//	// 虚函数的实现
//	void show()
//	{
//		cout << "Son1的show调用"<< endl;
//		cout << "Base1 t：" << this->t << endl;
//	}
//};
//
//
//
//
//// 3. 如果想灵活指定出父类中T的类型，那么子类也得成为类模板
//template<class T>
//class Base2
//{
//public:
//	virtual void show() = 0;
//	T t;
//};
//// 3. 如果想灵活指定出父类中T的类型，那么子类也得成为类模板
//template<class S, typename T1> // son2 也是类模板，有两个参数
//class Son2 :public Base2<T1>
//{
//public:
//	// 带参数的构造
//	Son2(S obj, T1 t)
//	{
//		this->m_obj = obj;
//		this->t = t;
//	}
//	// 传入一个类的对象，通过show函数调用对象的show函数
//	void func()
//	{
//		m_obj.show();
//	}
//	// son2 的 函数
//	void show()
//	{
//		cout << "Son2的show调用" << endl;
//		cout << "Base2 t：" << this->t << endl;
//	}
//	
//	S m_obj;
//	
//
//
//};
//
//
//
//void test01()
//{
//	Son1 son1(10);
//	son1.show();
//
//	// 
//	Son2<Son1, int> son2(son1, 20);
//	son2.show();
//	son2.func();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}