//#include<iostream>
//using namespace std;
//
//
////
//// 继承 --- 面向对象三大特性：封装、继承、多态
//// 
//// 继承特点
//// 下级别除了有上一级的共性，还有自己的特性
//// 
////              动物
////     猫                 狗
//// 橘猫   狸花猫    哈士奇    边牧
//// 
//// 好处：利用继承来减少代码重复
//// 语法：class 子类: 继承方式  父类
//// 
//// 子类---派生类
//// 父类---基类
////
//
//// 继承实现页面
//class BasePage
//{
//public:
//	void header() {
//		cout << "这是页面头部！！！" << endl;
//	}
//	void footer() {
//		cout << "这是页面尾部！！！" << endl;
//	}	void letf() {
//		cout << "这是页面左侧列表！！！" << endl;
//	}
//};
//
//// Java页面实现 -- 公共继承
//class Java: public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java视频链接！" << endl;
//	}
//};
//
//// Python页面实现 -- 公共继承
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python视频链接！" << endl;
//	}
//};
//// C++页面实现 -- 公共继承
//class Cpp : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++视频链接！" << endl;
//	}
//};
//
//void test01()
//{
//	// Java页面实现
//	Java ja;
//	ja.header();
//	ja.letf();
//	ja.content();
//	ja.footer();
//	cout << "-----------------" << endl;
//	// Python页面实现
//	Python py;
//	py.header();
//	py.letf();
//	py.content();
//	py.footer();
//
//	cout << "-----------------" << endl;
//	// C++页面实现
//	Cpp cpp;
//	cpp.header();
//	cpp.letf();
//	cpp.content();
//	cpp.footer();
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}