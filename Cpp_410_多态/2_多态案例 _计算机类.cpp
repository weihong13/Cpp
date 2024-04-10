//#include <iostream>
//#include <string>
//using namespace std;
//
////
//// 普通写法和多态分别实现 计算器
//// 
//// 多态优点
//// 代码组织结构清晰
//// 可读性强
//// 利于前期和后期的扩展与维护
//// 
////
//
//// 简单是实现
//
//class Calculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return num1 + num2;
//		}
//		else if (oper == "-")
//		{
//			return num1 - num2;
//		}
//		else if (oper == "*")
//		{
//			return num1 * num2;
//		}
//		return 1;
//		// 先扩展新的功能，需要修改源码
//		// 在真实的开发环境中，提倡开闭原则
//		// 开闭原则：对扩展进行开放，对修改进行关闭
//
//	}
//	int num1;
//	int num2;
//
//};
//
//
//// 普通的运算器
//void test01()
//{
//	Calculator cul;
//	cul.num1 = 10;
//	cul.num2 = 10;
//	cout << "加法" << cul.getResult("+") << endl;
//}
//
//
//// 使用多态实现计算器
//// 实现计算器抽象类
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	
//	int num1;
//	int num2;
//};
//
//// 加法类
//class Add :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return num1 + num2;
//	}
//};
//// 减法类
//class Sub :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return num1 - num2;
//	}
//};
//
//// 乘法类
//class Mul :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return num1 * num2;
//	}
//};
//
//// 多态实现的计算机测试
//void test02()
//{
//	// 多态的使用方法
//	// 父类指针或引用 执行子类函数
//
//	// 加法
//	// 使用 AbstractCalculator 父类指针，创建一个子类Add 的对象
//	AbstractCalculator* abc = new Add;
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << "加法 " << abc->getResult() << endl;
//	delete abc; // 释放内存
//
//	// 减法
//	abc = new Sub;
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << "减法 " << abc->getResult() << endl;
//	delete abc;
//
//}
//
//int main()
//{
//	// test01();
//	test02();
//	system("pause");
//	return 0;
//}