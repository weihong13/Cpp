//#include<iostream>
//#include<string>
//
//using namespace std;
//
////
//// this 指针
//// 
//// 我们知道，非静态的成员函数只有一份实例，也就是说多个对象回调用同一块代码
//// 那么如何区分是哪一个对象在调用函数呢？----使用this指针
//// 
//// this指针指向被调用的成员函数所属的对象
//// 那个对象调用函数，this就指向谁
//// 
//// this指针是隐含在每一个非静态成员函数内的 
//// this不需要定义，之间使用即可
//// 
//// this指针用途
//// 1.解决名称冲突
////		当形参和成员变量名相同时，可以使用this来区分
//// 2.返回对象本身用 *this
////		在类的非静态成员函数中返回对象本身，可以使用return *this
//// 
//// 
////
//
//
////
//class Person
//{
//public:
//	int age;
//	// 1.解决名称冲突
//	Person(int age) {
//		this->age = age;
//	}
//
//	// 返回对象本身
//	// 这里返回的必须是 person的 引用
//	// 因为根据拷贝构造，他之间返回值的话他会重新定义一个对象，
//	// 就不是在原来的对象是改变了
//	//
//	Person& personAddAge(Person &p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//};
//
////
//void test01()
//{
//	Person p(10);
//	cout << "年龄为：" << p.age << endl;
//}
////
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	// 可以实现链式访问
//	p2.personAddAge(p1).personAddAge(p1).personAddAge(p1);
//
//	cout << "年龄为：" << p2.age << endl;
//}
//int main() {
//	
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}