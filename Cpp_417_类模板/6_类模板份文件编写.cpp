
// 直接导头文件，连接错误
// #include"person.h" //err

// 第一种解决方式---直接导入.cpp文件
//#include"person.cpp"

// 第二种方式
// 将声明和实现写道同一个文件中，并更改后缀名为 .hpp
#include"person.hpp"

// 类模板的分文件编写
// 
// 问题：
// 类模板中的成员函数是在调用函数时才会创建，导致分文件编写时连接不到
// 
// 解决方式：
// 1.直接包含源.cpp 文件
// 2.将声明和实现写道同一个文件中，并更改后缀名为 .hpp, .hpp 是约定的名称，不是强制的
// 
//  
//

//void test01()
//{
//	Person<string, int> p1("张三", 34);
//	p1.showPerson();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}