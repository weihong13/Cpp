//#include<iostream>
//#include<string>
//using namespace std;
//
//
//
////
//// string基本概念
//// 
//// 本质
//// string本质上是一个类
//// 
//// string和 char*的区别
//// 
//// char* 是一个指针
//// string 是一个类，类的内部封装了一个char* 来管理字符串
//// 
//// 特点
//// string内部封装了很多成员方法
//// 例如：查找find、拷贝copy、删除delete、替换replace、插入insert
//// 
////
//
//
//
////
//// string构造函数
//
//// string构造函数
//void test01()
//{
//	// 无参构造--创建一个空字符串
//	string str;
//	// 使用字符串char*构造
//	const char* str1 = "weihong";
//	string str2(str1);
//	cout << "str2: " << str2 << endl;
//	// 使用一个string对象初始化另一个对象
//	string str3 = "weihong2";
//	string str4(str3);
//	cout << "str4: " << str4 << endl;
//
//	// 使用n个字符c
//	char c = 'a';
//	string str5(5, c);
//	cout << "str5: " << str5 << endl;
//
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
//
//
