#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

/*
拷贝构造：
	拷贝构造的调用时机：
		1、使用一个对象初始化一个新的对象（直接调用拷贝构造）
		2、值传递的方式给形参传值（函数的参数为对象，调用参数时，将传入的参数给形参初始化）
		3、以值的方式返回局部对象（函数内以值传递的方式返回一个对象）
	形参或返回值为引用时，可以避免调用拷贝构造
*/
class A
{
private:
	int num;
	int* p;
public:
	A() 
	{ 
		num = 2; 
		p = nullptr;
		cout << "无参构造" << endl; 
	}
	A(int a) 
	{ 
		this->num = a;
		this->p = new int[num];
		for (int i = 0; i < num; i++)
		{
			p[i] = i + 10;
		}
		cout << "有参构造" << endl;
	}

	// 拷贝构造的参数必须是引用类型
	// 如果拷贝构造的参数不是引用的话，则会陷入无限递归（自调用）
	// 如果拷贝构造的形参不是引用，在给形参赋值的时候就会进行拷贝构造，调用拷贝构造，又得调用拷贝构造，就会陷入循环的自调用
	A(const A& other) 
	{	
		/*
		* 浅拷贝：就是简单的赋值操作
		* 浅拷贝的问题：
		*		如果成员变量有指针指向堆区内存，浅拷贝就会使 不同的对象指向同一块内存空间
		*		在两个对象进行析构时，就会多次释放同一块堆区内存，这种错误是致命的
		*/
		// 浅拷贝
		// this->p = other.p; // error

		// 深拷贝，自己申请一块新的堆区内存空间，并保证新对象的值与拷贝之前的值一致
		this->num = other.num;
		this->p = new int[num];
		for (int i = 0; i < num; i++)
		{
			this->p[i] = other.p[i];
		}

		cout << "拷贝构造" << endl;
	}
	~A()
	{
		if (p) delete[]p;
	}
};
// 1、使用一个对象初始化一个新的对象
void test01()
{
	A a;
	A b = a; // 拷贝构造的隐式法
	A c(a);  // 拷贝构造的括号法

}

// 2、值传递的方式给形参传值（函数的参数为对象，调用参数时，将传入的参数给形参初始化）
void test02(A a)
{
	// 如果形参是引用类型，就不会调用拷贝构造，因为他没有新的对象产生

}

// 以值的方式返回局部对象（函数内以值传递的方式返回一个对象）
// 如果返回值是引用类型，就不会调用拷贝构造，因为他没有新的对象产生
A test03()
{
	A a;
	return a; // 拷贝构造--拷贝一个匿名对象
}
//int main()
//{
//	// 使用一个对象初始化一个新的对象
//	// test01();
//	
//	// 值传递的方式给形参传值（函数的参数为对象，调用参数时，将传入的参数给形参初始化）
//	// 如果形参是引用类型，就不会调用拷贝构造，因为他没有新的对象产生
//	A a;
//	// test02(a);
//	
//	// 以值的方式返回局部对象（函数内以值传递的方式返回一个对象）
//	// 如果返回值是引用类型，就不会调用拷贝构造，因为他没有新的对象产生
//	test03();
//	return 0;
//}
// 


// 拷贝构造练习

class Car
{
	int age;
	int* fuel;
public:
	Car()
	{
		age = 0 ;
		fuel = 0;
		cout << "无参构造" << endl;
	}
	Car(int age, int fuel)
	{
		this->age = age;
		this->fuel = new int(fuel);
		cout << "有参构造" << endl;
	}
	Car(const Car& car)
	{
		this->age = car.age;
		this->fuel = new int(*car.fuel);
		cout << "拷贝构造" << endl;
	}
	~Car()
	{
		if (fuel) delete fuel;
	}

};

class Arr
{

public:
	Arr()
	{
		num = 0;
		arr = nullptr;
		cout << "无参构造" << endl;
	}
	Arr(int a)
	{
		this->num = a;
		this->arr = new int[num];
		for (int i = 0; i < num; i++)
		{
			cin >> this->arr[i];
		}
		cout << "有参构造" << endl;
	}
	Arr(const Arr& other)
	{
		this->num = other.num;
		this->arr = new int[num];
		for (int i = 0; i < num; i++)
		{
			this->arr[i] = other.arr[i];
		}

		cout << "拷贝构造" << endl;
	}
	~Arr()
	{
		if (arr) delete[]arr;
	}

	int num;
	int* arr;
};

class vector
{

	int* arr;
public:
	vector()
	{
		arr = nullptr;
	}
	vector(int a)
	{
		if (a > 0) arr = new int[a];
		else vector();
	}
};

int main()
{
	Arr arr1 = 5;
	Arr arr2 = arr1;
	for (int i = 0; i < 5; i++)
	{
		cout << arr1.arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr2.arr[i] << " ";
	}
	return 0;
}