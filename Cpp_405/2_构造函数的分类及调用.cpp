//#include<iostream>
//#include<string>
//using namespace std;

// 构造函数的分类及调用
// 两种分类方式：
//	   按参数分为：有参构造、无参构造
//	   按类型分为：普通构造、拷贝构造
// 三种调用方式
//	   括号法、显示法、隐式转换法
//

//// 构造函数的分类
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
//// 调用
//void test() {
//	// 括号法
//	Person p1;     // 默认调用
//	Person p2(10); // 有参调用
//	Person p3(p2); // 拷贝调用
//	// 默认构造函数不能加（）,编译器会认为这是一个函数声明
//	// Person p1(); // err 
//
//	// 显示法
//	Person p4;     // 默认调用
//	Person p5 = Person(10); // 有参调用
//	Person p6 = Person(p5); // 拷贝调用
//
//	// 匿名对象：该语句执行结束后，该对象会被立马销毁
//	Person(10);
//	cout << "aaaaaaa" << endl;
//	// 不能利用拷贝构造进行初始化匿名对象
//	// 编译器会认为 Person(p5) == Person p5;
//	// Person(p5);
//
//	// 隐式转换法
//	Person p7 = 10; // 有参调用
//	Person p8 = p5; // 拷贝调用
//}
//
//int main() {
//
//	test();
//
//	// Person p; // 程序结束前才会调用析构
//	system("pause");
//	return 0;
//}


