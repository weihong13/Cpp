#include<iostream>
#include<string>
using namespace std;


//
// const 修饰成员函数
// 
// 常函数
// 成员函数后加const后称之为常函数
// 常函数不可以修改成员属性
// 成员属性声明时加关键字 mutable后，在常函数中也可以修改
// 
// 常对象
// 声明对象前加 const称该对象为常对象
// 常对象只能调用常函数
// 
//



class Person
{
public:
	int id;
	mutable int age;

	// this 指针的本质是一个指针常量，指针的指向是不可以修改的
	// Person* const this --- this 指向不能修改，this指向的那个变量可以修改
	// 在函数后加const 相当于 const Person* const this
	// this 指向不能修改，this指向的那个变量也不可以修改
	// 如果要修改 得在 this指向的那个变量前 加 mutable 
	void showPersonAge() const 
	{
		if (this == NULL) return;
		this->age = 100;
		cout << "Age: " << age << endl;
	}

	void func() {
		cout << "函数func的调用 " << endl;

	}
};

// 常函数
void test01() {
	//// 空指针访问成员函数
	// Person* p = NULL;
	// p->showPersonAge();

	Person p1;
	p1.showPersonAge();
}

// 常对象
void test02() {

	// const 修饰的 常对象
	const Person p;
	p.age = 1000;
	// p.id = 123;  // 未加mutable 不能修改

	// 常对象只能调用常函数
	p.showPersonAge();
	// 常对象不能调用普通函数
	// 普通成员函数可能修改成员属性
	// 而常对象是不能修改一般的成员属性的
	// p.func();  // err

}

//

int main() {
	test01();


	system("pause");
	return 0;
}
