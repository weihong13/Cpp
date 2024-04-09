//#include<iostream>
//#include<string>
//
//using namespace std;
//
//
//
//
////
//// 运算符重载--递增
//// 
//// 内置的递增
//// 注意a++和++a的区别
////
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person p);
//
//public:
//
//	// 有参构造
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//	// 利用成员函数实现前置++
//	// 这里必须返回一个 引用，Person&
//	// 这样可以确保 修改的是一个值，
//	// 如果返回的只是 一个 Person类型的对象，会默认调用拷贝构造函数，
//	// 返回的是一个新的对象，而不是本来的那个对象
//	//
//	Person& operator++() { // ++p
//		m_A++;
//		m_B++;
//		return *this;
//	}
//	// 利用成员函数实现后置++
//	// Person& operator++(int) int 代表占位符，可以用来区分前置++和后置++
//	// 这里需要先保存传入的内容，然后对传入的内容操作
//	// 最后返回被保存的内容
//	// 而这里需要返回的是一个值，而不是引用，
//	// 这里如果你返回的是一个引用的话，返回的是一个局部变量的引用 temp
//	// 在函数调用后，temp就被销毁了
//	//
//	Person operator++(int) { // p++
//		// 记录
//		Person temp = *this;
//		// 运算
//		++m_A;
//		++m_B;
//		// 返回记录
//		return temp;
//	}
//
//
//private:
//	int m_A;
//	int m_B;
//};
//
//// 左移运算符的重载
//ostream& operator<<(ostream& cout, Person p)
//{
//	cout << "m_A: " << p.m_A << "\n" << "m_B: " << p.m_B;
//
//	return cout;
//}
//
//
//void test01()
//{
//	Person p1(10, 10);
//	cout << ++p1 << endl;
//	cout << p1 << endl;
//
//	cout << (p1++)++ << endl; // 这里是两个11 11，返回的是一个 person类型的变量，利用拷贝构造返回一个新的对象
//	cout << p1 << endl; 
//	cout << p1 << endl;
//
//}
//
//int main() {
//
//	test01();
//
//	//// 内置的递增运算符，前置可以实现链式访问，后置不行
//	//int a = 0;
//	//cout << ++(++a) << endl; // ok
//	//cout << a << endl;
//
//	//// cout << (a++)++ << endl; // err
//	//cout << a << endl;
//
//	system("pause");
//	return 0;
//}
//
