#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

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

/*
常函数：
	const修饰成员函数为常函数
	常函数里面的this（const A* const this;） 和 非常函数的this （A* const this;）不同
	不能修改成员变量,如果想修改成员变量，在变量定义前面加 mutable 关键字
*/

class A
{
public:
	mutable int num;
	A() {}

	void work()
	{
		this; //A* const this;

		this->num = 2;
		fun(); //非常函数调用常函数相当于给 *this 加上了const属性
	}

	//如果常函数里面的this 给非常函数里面的this赋值相当于去掉了 *this  const 属性,所以不对
	void fun() const
	{
		this; // const A* const this;
		num = 2;
		cout << "fun const" << endl;
	}

	void  fun() //因为常函数和非常函数的隐含参数this不同，所以常函数和非常函数是重载关系
	{
		cout << "fun" << endl;
	}
};
int main()
{
	A a; //变量可以调用非常成员函数也可以调用常成员函数
	const A b; //常量只能调用常成员函数，因为在给this 传参的时候const属性不能被去掉
	a.fun();
	b.fun();
}
