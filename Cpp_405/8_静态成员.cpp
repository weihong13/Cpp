#include<iostream>
#include<string>
using namespace std;


//
// 静态成员--加static
// 
// 静态成员变量、静态成员函数
// 
// 静态成员变量：
//		所有对象访问一份数据
//		在编阶段分配内存
//		类内声明，类外初始化
// 静态成员函数：
//		所有对象共享一个函数
//		静态成员函数只能访问静态成员变量
// 
//


// 静态成员变量：

class Person {
public:
	// 类内声明
	static int age;
	string name;

	// 静态成员变量也有权限
private:
	static int id;

public:
	// 静态成员函数--只能访问静态成员变量
	static void func() {
		// 只能访问类内的静态成员变量
		age = 200;

		// 不能访问非静态的成员变量，因为非静态成员变量是对象特有的属性，需要通过对象才能访问
		// 不然不知道要修改哪个对象的值
		// name = "weihong"; //err
		cout << "Person 静态成员函数的调用" << endl;
	}

private:
	// 私有的 静态成员函数
	static void func2() {
		cout << "Person 静态成员函数的调用" << endl;
	}

};

// 类外初始化
int Person::age = 100;
int Person::id = 123;

void test1() {
	Person p;
	cout << p.age << endl;

	// 
	Person p2;
	p2.age = 200;
	
	// p的age也被改变
	cout << p.age << endl;

}

void test2() 
{
	// 静态成员变量，不属于某个对象上，所有对象分分享一份数据
	// 因此，静态成员变量有两种访问方式

	// 1.通过对象访问
	//Person p;
	//cout << p.age << endl;
	//// 2.通过类名访问
	//cout << Person::age << endl;
	
	// 访问private，访问不到
	// cout << Person::id << endl; // err


	// 静态成员函数也有两种访问方式
	// 1.通过对象访问
	Person p1;
	p1.func;
	// 2.通过类名访问
	Person::func();

	// 访问private，访问不到
	// Person::func2();  //err



}

int main() {

	// test1();
	test2();

	system("pause");
	return 0;
}