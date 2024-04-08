//#include<iostream>
//#include<string>
//using namespace std;
//
//
////
//// 友元--friend
//// 
//// 例如
//// 家里有客厅（public）、卧室（private）
//// 客人只能去客厅，对于卧室是无法访问的
//// 但如果是你的好基友，是可以进卧室的
//// 
//// 在程序中，有些私有属性，也想让类外的一些特殊函数或者类进行访问，就需要用到友元
//// 
//// 友元的目的是让一个函数或类 访问另一个类的私有成员
//// 
//// 友元的三种实现
//// 1.全局函数做友元
//// 2.类做友元
//// 3.成员函数做友元
//// 
//// 
//
//
//// 1.全局函数做友元
//class Person
//{
//	// 声明goodGay是友元，可以访问私有成员
//	friend void goodGay(Person* p);
//public:
//	string name;
//private:
//	int age;
//
//public:
//	Person() {
//		this->name = "weihong";
//		this->age = 19;
//	}
//
//};
//
//// 全局函数
//void goodGay(Person* p) 
//{
//	cout << "好基友正在访问你的名字" << p->name << endl;
//	cout << "好基友正在访问你的年龄" << p->age << endl;
//}
//void ordinaryFriends(Person* p)
//{
//	cout << "普通朋友正在访问你的名字" << p->name << endl;
//	// 访问不到
//	// cout << "好基友正在访问你的年龄" << p->age << endl;
//}
//
//void test01() 
//{
//	Person p1;
//	goodGay(&p1);
//	ordinaryFriends(&p1);
//
//}
//
//int main() {
//
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
