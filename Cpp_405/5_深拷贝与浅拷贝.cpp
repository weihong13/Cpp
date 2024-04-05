//#include<iostream>
//#include<string>
//using namespace std;
//
//
////
//// 深拷贝与浅拷贝
//// 浅拷贝：简单的复制拷贝-编译器默认的就是浅拷贝
//// 
//// 深拷贝：在堆区重新开辟空间，进行拷贝操作
//// 
//// 使用深拷贝的原因
//// 
//// 在涉及到在堆区创建的成员属性时，就涉及到在析构时，使用delete来释放堆区的内存
//// 如果只是简单的使用浅拷贝，只是将拷贝后的指针 指向 拷贝前的堆区
//// 一旦程序结束，在析构时，会分别对两个对象进行析构，而此时也会通过delete对堆区进行释放
//// （此时两个对象的成员属性是指向同一个堆区内存的）
//// 不管哪个先进行析构，都将堆区的内存释放了
//// 然后另一个进行析构时，就会对该堆区进行再次释放（这是不合法的）
//// 
//// 因此，在拷贝时，需要使用深拷贝对成员属性在堆区重新开辟内存，而不是简单的进行赋值
//// 
//// 
//// 
////
//
//class Person
//{
//public:
//	int age; // 年龄
//	int* height; // 身高指针
//	// 构造函数-无参
//	Person() {
//		cout << "Person 无参构造函数的调用" << endl;
//	}
//	// 构造函数-有参
//	Person(int a,int h) {
//		age = a;
//		// 在堆区开辟一块空间，存放 h（身高），指向height指针
//		height = new int(h);
//		cout << "Person 有参构造函数的调用" << endl;
//	}
//	// 以上两种都是普通构造 
//	// 构造函数-拷贝
//	Person(const Person &p) {
//		//// 将传入的对象浅拷贝--编译器默认方式--err
//		//age = p.age; 
//		//height = p.height; // 简单的赋值一份，此时两个对象的height均指向一块堆区内存
//
//		// 深拷贝
//		age = p.age;
//		height = new int(*p.height); // 拷贝时，在堆区重新开辟内存
//
//		cout << "Person 拷贝构造函数的调用" << endl;
//	}
//	// 析构函数
//	~Person() {
//		// 释放堆区内存
//		if (height != nullptr) {
//			delete height;
//		}
//		cout << "Person析构函数的调用" << endl;
//	}
//};
//
//// 调用
//void test() {
//	Person p1(18, 160);
//	cout << "年龄："<< p1.age << "  身高：" << *p1.height<< endl;
//	Person p2(p1);
//	cout << "年龄：" << p2.age << "  身高：" << *p2.height << endl;
//
//}
//
//int main() {
//	test();
//
//	// Person p; // 程序结束前才会调用析构
//	system("pause");
//	return 0;
//}