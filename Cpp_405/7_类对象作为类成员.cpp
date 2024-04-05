//#include<iostream>
//#include<string>
//using namespace std;
//
//// 类对象作为类成员
//class A {
//
//};
//
//class B {
//	A a;
//};
//
//// B类中 有A类的对象a作为成员
//// 当创建B类的对象b时，A，B构造和析构的顺序是？
//// 先构造a，再构造b
//// 先析构b，在析构a
//// 
//// 其他类对象作为本类成员，先构造其他类对象，再构造自身
//// 析构顺序与构造相反
//// 
////
//class Phone {
//public:
//	string pName;
//
//	Phone(string p_name):pName(p_name) {
//		cout<< "Phone 的构造函数" << endl;
//	}
//
//	~Phone() {
//		cout << "Phone 的析构函数" << endl;
//
//	}
//
//};
//
//class Person
//{
//public:
//	string name;
//	Phone phone;
//	// phone(p_name) = Phone phone = p_name，隐式类型转换
//	Person(string m_name, string p_name) :name(m_name), phone(p_name) {
//		cout << "Person 的构造函数" << endl;
//
//	}
//	~Person() {
//		cout << "Person 的析构函数" << endl;
//
//	}
//};
//
//
//void test() {
//	Person p("张三", "苹果X");
//
//	cout <<p.name <<"拿的手机是： " <<p.phone.pName <<endl;
//
//}
//
//int main() {
//
//	test();
//	system("pause");
//	return 0;
//
//}