//#include<iostream>
//#include<string>
//
//using namespace std;
//
//
//
//
////
//// 运算符重载--左移
//// 对于内置的数据类型，编译器明白该如何输出
//// 
//// 而对于自己定义的类型，比如一个类，只能通过获取其成员属性来进行cout输出
//// 
//// 可以通过全局函数来实现左移的重载，cout << p ;
//// 来直接输出一个对象
////
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	int m_A;
//	int m_B;
//	
//
//	// 有参构造
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//
//	// 利用成员函数实现左移运算符的重载，
//	// void operator<<(cout)  
//	// 使用方法为：p.operator(cout) 化简为：p << cout
//	// 而正确的输出应该是 cout << p;  无法实现 cout在左侧
//	// 因此 左移运算符的重载 只能使用 全局函数
//	//
//
//};
//
//
//// 左移运算符的重载
//// 为了防止成员属性是私有的，导致全局函数无法访问，需要将该全局函数设为友元
//// 这里的cout 只是一个引用（cout的别名），可以是任何名字
//// 为了实现链式访问，这里返回一个 ostream类型的 引用
//// ostream 输出流类型
////
//ostream& operator<<(ostream& cout, Person& p)
//{
//	cout << "m_A: " << p.m_A << "\n" << "m_B: " << p.m_B;
//
//	return cout;
//}
//
//void test01()
//{
//	Person p1(10, 20);
//	cout << p1 << endl;
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
//
