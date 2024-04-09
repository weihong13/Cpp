//#include<iostream>
//#include<string>
//
//using namespace std;
//
//
////
//// 赋值运算符重载
//// 
//// C++ 编译器至少给一个类添加四个函数（有6种默认函数）
//// 1.默认构造函数（无参，函数体为空）
//// 2.默认析构函数（无参，函数体为空）
//// 3.默认拷贝函数（对属性进行值拷贝）
//// 4.赋值运算符重载 operator= （对属性进行值拷贝）
//// 5.取地址操作符重载
//// 6.const修饰的取地址操作符重载
////
//
//
//// 4.赋值运算符重载 operator= （对属性进行值拷贝）
//// 如果类中又属性指向堆区，赋值操作也要考虑到深浅拷贝的问题
//
//class Person
//{
//public:
//	
//	Person(int age)
//	{
//		m_Age = new int(age);
//	
//	}
//	Person(Person& p) {
//		m_Age = new int(*p.m_Age);
//	}
//
//	~Person()
//	{
//
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	
//	// 重载赋值运算符
//	Person& operator=(Person& p)
//	{
//		// 
//		// 编译器提供的是浅拷贝
//		// m_Age = p.m_Age
//		
//		// 应该先判断是否有属性在堆区，如果有先释放再进行深拷贝
//		//
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//
//		return *this;
//	}
//	// 深拷贝
//	int* m_Age; // 创建一个年龄的指针，开辟内存到堆区
//};
//
//// 
//// 浅拷贝导致堆区内存重复释放
//// age 开辟在堆区
//// 局部变量在函数调用结束后，需要释放内存
//// 通过对析构函数的重载，将堆区内存释放
//// 
//// 而这里的 p2 = p1； 是浅拷贝，只是将两个地址指向了同一块内存空间
//// 这里在函数调用结束后，先对p2 进行析构操作，已经将堆区内存释放
//// 然后 对 p1 进行析构操作时，还要再次释放已经释放过的堆区内存，导致错误
////
//void test01()
//{
//	Person p1(28);
//	Person p2(20);
//	Person p3(25);
//
//
//	p3 = p2 = p1;
//
//	cout << "p1的年龄为：" << *p1.m_Age << endl;
//	cout << "p2的年龄为：" << *p2.m_Age << endl;
//	cout << "p3的年龄为：" << *p3.m_Age << endl;
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