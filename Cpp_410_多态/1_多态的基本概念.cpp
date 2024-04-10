//#include <iostream>
//using namespace std;
//
//
////
//// 多态
//// 
//// 面向对象三大特征：封装、继承、多态
//// 
//// 多态分为两大类
//// 静态多态：函数重载 和 运算符重载 属于静态多态，复用函数名
//// 动态多态：派生类 和 虚函数实现运行时多态
//// 
//// 静态多态和动态多态区别
//// 静态多态的函数地址早绑定---编译阶段确定函数地址
//// 动态多态的函数地址晚绑定---运行阶段确定函数地址
//// 
//// 动态多态满足条件
//// 1.有继承关系
//// 2.子类重写父类的虚函数（区别重载与重写，重载是函数参数不同，重写都相同）
////   子类重写时，virtual可写可不写
////  
//// 动态多态使用
//// 父类指针或者引用 执行子类对象
////
//
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//
//};
//
//class Cat: public Animal
//{
//public:
//	// 子类函数重写，可加virtual，也可不加
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	// 子类函数重写，可加virtual，也可不加
//	virtual void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//
//// 执行说话的函数  
//// Animal &animal = cat, 形参是动物类对象的引用，传入的是 子类的对象
//// 子类和父类可以相互转化，无需进行强制类型转换
//// 这里，如果父类speak不是虚函数，就是地址早绑定
//// 在编译阶段就确定了函数地址，这里调用的就是父类中的speak
//// 而我们传入的是cat的对象，本意是想让猫说话，
//// 那这个函数的地址就不能早绑定，而是在运行阶段才绑定，因此要将父类speak改为虚函数
//// 
//// // 动态多态使用
//// 父类指针或者引用 执行子类对象
//// 这里就是父类的引用 来执行子类对象（传入的是cat对象）
////
//void doSpeak(Animal &animal)
//{
//	// 这里调用的是 虚函数，就会发生晚绑定
//	animal.speak();
//}
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//
//}
//
////
//// 多态的原理
//// 通过sizeof查看animal类的大小
//// 当 speak 为普通函数时，该类的大小为1字节，因为成员函数不属于类的对象上，是一个空类
//// 
//// 在x86 环境下，当设置speak为虚函数时，该类的大小为4个字节，指针大小
//// 在x64 环境下，当设置speak为虚函数时，该类的大小为8个字节，指针大小
//// 
//// 虚函数指针（虚函数表指针）（vfptr：virtual function pointer）
//// animal的vfptr指针 指向 ------> animal的vftable（虚函数表）
//// animal虚函数表里 存放的虚函数的地址 &Animal::speak
//// 
//// 对于Cat类，如果不发生重写，子类Cat类就会直接继承父类的内容
//// Cat的vfptr指针 指向 ------> Cat的vftable（虚函数表）
//// Cat虚函数表里 存放的虚函数的地址 &Animal::speak
//// 
//// Cat类 重写 speak函数之后，Cat中的虚函数表内部 就会替换为 子类虚函数的地址
//// Cat的vfptr指针 指向 ------> Cat的vftable（虚函数表）
//// Cat虚函数表里 存放的虚函数的地址 &Cat::speak
//// 
//// 当 父类对象指针 或引用 执行子类对象时，就发生了多态
//// Animal &animal = cat
//// 此时 因为调用的是Cat类的对象，虚函数指针就会指向cat的虚函数表
//// 
//// 
//// 
//// 可以使用 命令行查看类的构造 
//// 
////
//void test02()
//{
//
//	cout << "size of Animal: " << sizeof(Animal) << endl;
//	cout << "size of Cat: " << sizeof(Cat) << endl;
//
//}
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}
