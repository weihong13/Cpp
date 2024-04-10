//#include <iostream>
//#include <fstream>
//using namespace std;
//
////
//// 二进制文件读写
//// 
//// 注意打开方式 ios::binary 二进制方式   
//// 
//// 
//// 二进制方式写文件主要利用流对象调用成员函数write
//// 函数原型:ostream& write(const char* buffer, int ikn);
//// 参数解释:字符指针buffer指向内存中一段存储空间。len是读写的字节数
////       
////
//class Person
//{
//public:
//	char name[20];
//	int age;
//};
//
//// 二进制文件--写文件
//void test01()
//{
//	// 创建流对象-在创建对象的时候就可以打开
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	// 打开文件
//	// ofs.open("test1.txt", ios::out);
//	// 写入内容
//	
//	Person p = { "拾叁",24 };
//
//	// 取 对象p的地址，转为const char* 以字符输入，输入字符大小为 sizeof(Person)，一个类的大小
//	ofs.write((const char*)&p, sizeof(Person));
//
//	// 关闭文件
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}