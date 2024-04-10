//#include <iostream>
//using namespace std;
//
////
//// 虚析构和纯虚析构
//// 
//// 多态在使用时，如果子类中有属性开辟到堆区内存，
//// 而父类指针在释放时，又无法调用到子类的析构代码
//// 就会导致内存无法释放的问题
//// 
//// 解决方式：将父类中的析构代码改为 虚析构 或者 纯虚析构
//// 
//// 虚析构和纯虚析构共性：
//// 1.可以解决父类指针释放子类对象
//// 2.都需要有具体的函数实现
//// 
//// 区别：
//// 如果是纯虚析构，那么该类是抽象类，无法实例化对象
//// 
//// 
//// 虚析构和纯虚析构 都是用来解决 父类指针释放子类对象的问题
//// 如果子类属性不涉及堆区内存，也不用写虚析构
//// 
//// 
////
//
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal 构造函数调用" << endl;
//		
//	}
//	// 虚析构
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal 析构函数调用" << endl;
//	//}
//
//	// 纯虚析构
//	// 只有声明，没有实现，会报错，需要到类外实现
//	// 而父类也有可能存在堆区属性，需要到类外实现
//	// 有了纯虚析构，这个类也成了抽象类，无法实例化对象
//	virtual ~Animal() = 0;
//
//
//	virtual void speak() = 0;
//
//	
//};
//Animal::~Animal()
//{
//	cout << "Animal 纯虚析构函数调用" << endl;
//}
//
//
//
//class Cat : public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat 构造函数调用" << endl;
//		// 在堆区创建属性，应该在对象调用结束后使用析构释放
//		m_Name = new string(name);
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat 析构函数调用" << endl;
//			delete m_Name;
//			m_Name = NULL;
//
//		}
//	}
//
//	void speak()
//	{
//		cout << *m_Name << " 小猫在说话" << endl;
//	}
//
//	string* m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	// 我们知道，父类和子类的构造和析构的顺序为
//	// 构造 先父后子
//	// 析构 先子后父
//	// 而这里，Cat没有被析构，堆区内存没用释放干净，内存泄露
//	// 这是由于，我们是通过父类指针来 执行子类属性
//	// 而父类指针在析构的时候，不会调用子类中的析构，
//	// 如果堆区存在堆区属性，就会出现内存泄露
//	// 
//	// 解决方案，将父类中的析构 改为 虚析构 加virtual
//	// 
//	delete animal;
//
//
//}
//
//int main() 
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}