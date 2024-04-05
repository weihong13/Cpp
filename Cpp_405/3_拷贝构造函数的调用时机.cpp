//#include<iostream>
//#include<string>
//
//using namespace std;


//
// 拷贝构造函数的调用时机
// 1.使用已经创建好的对象来初始化一个新的对象
// 2.值传递的方式给函数传值
// 3.以值的方式返回局部对象
// 
//
//class Person
//{
//public:
//	int age;
//	// 构造函数-无参
//	Person() {
//		cout << "Person 无参构造函数的调用" << endl;
//	}
//	// 构造函数-有参
//	Person(int a) {
//		age = a;
//		cout << "Person 有参构造函数的调用" << endl;
//	}
//	// 以上两种都是普通构造 
//	// 构造函数-拷贝
//	Person(const Person &p) {
//		age = p.age; // 将传入的对象拷贝一份
//		cout << "Person 拷贝构造函数的调用" << endl;
//	}
//	// 析构函数
//	~Person() {
//		cout << "Person析构函数的调用" << endl;
//	}
//};
//
//// // 1.使用已经创建好的对象来初始化一个新的对象
//void test1() {
//	Person p1(10);
//	Person p2(p1);
//}
//// 2.值传递的方式给函数传值
//void doWork(Person p) {
//	// 给函数传入一个参数，函数会拷贝一份形参，此时会用到拷贝函数
//}
//
//void test2() {
//	Person p1(10); // 有参构造
//	
//	doWork(p1); // 给函数传入一个参数，函数会拷贝一份形参，此时会用到拷贝函数
//}
//
//// 3.以值的方式返回局部对象
//Person doWork2() {
//	Person p;
//	// 返回一个对象，会复制一份，这时会用到拷贝构造
//	return p;
//}
//
//void test3() {
//	Person p1(10); // 有参构造
//	Person p = doWork2();
//}
//
//int main() {
//
//	//test1();
//	// test2();
//	test3();
//
//	// Person p; // 程序结束前才会调用析构
//	system("pause");
//	return 0;
//}


