//#include<iostream>
//#include<string>
//
//using namespace std;
//
//
////
//// 运算符重载
//// 对于内置的数据类型，编译器明白该如何运算，例如两个整数的相加
//// 
//// 而对于自己定义的类型，比如一个类，直接使用加号，编译器是无法进行相加的
//// 
//// 我们可以自己写一个成员函数，实现两个对象的属性相加，然后再返回一个新的对象
//// 
//// 这样的话，每个程序员写的相加都不一样
//// 因此，编译器给了一个统一的名称----operator+
//// 可以通过成员函数来实现加号的重载，也可以通过全局函数来实现
//// 
//// 
////  
////
//
//class Person
//{
//public:
//	int m_A;
//	int m_B;
//
//	// 无参构造
//	Person() 
//	{
//		
//	}
//	// 有参构造
//	Person(int a, int b) 
//	{
//		m_A = a;
//		m_B = b;
//	}
//
//	void showPerson()
//	{
//		cout << "A为：" << this->m_A << endl;
//		cout << "B为：" << this->m_B << endl;
//
//	}
//
//	// 自己写一个成员函数实现加号重载
//	Person personAdd(Person& p) 
//	{
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}
//	//// 使用编译器提供的重载名
//	//Person operator+(Person& p) 
//	//{
//	//	Person temp;
//	//	temp.m_A = this->m_A + p.m_A;
//	//	temp.m_B = this->m_B + p.m_B;
//	//	return temp;
//	//}
//
//};
//
////  通过全局函数重载 +
//Person operator+(Person &p1, Person &p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
////  通过全局函数重载 + 然后进行函数重载
//Person operator+(Person& p1, int a)
//{
//	Person temp;
//	temp.m_A = p1.m_A + a;
//	temp.m_B = p1.m_B + a;
//	return temp;
//}
//
//
//void test01()
//{
//	Person p1(10, 20);
//	Person p2(10, 20);
//	// 使用自己的成员函数进行相加
//	Person p3;
//	p3 = p2.personAdd(p1);
//	p3.showPerson();
//
//	//// 使用编译器的重载名
//	//Person p4;
//	// 成员函数调用的本质
//	// //p4 = p1.operator+(p2);
//	//p4 = p1 + p2;  // 简化操作，直接用加号即可实现
//	//p4.showPerson();
//
//
//	// 使用全局函数重载+进行相加
//	Person p5;
//	// 全局函数调用的本质
//	// p5 = operator+(p1, p2);
//	// 简化为
//	p5 = p1 + p2;
//	p5.showPerson();
//
//	// 运算符重载，也可以进行函数重载
//	p5 = p1 + 100; // person + int
//	p5.showPerson();
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
