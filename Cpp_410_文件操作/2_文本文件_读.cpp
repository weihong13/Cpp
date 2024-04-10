//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//
////
//// 文件操作--头文件<fstream>
//// 
//// 文件类型
//// 1.文本文件：文件以文本的ASCII码形式存储在计算机中
//// 
//// 2.二进制文件：文件以文本的二进制形式存储在计算机中，用户一般读不懂
//// 
//// 
//// 文件操作的三大类
//// 1.ofstream：写操作-从内存输出到文件，是输出流
//// 2.ifstream：读操作-从文件读入内存，是输入流
//// 3.fstream：读写操作
//// 
//// 
//// 读文件步骤
//// 
//// 1.包含头文件：#include <fstream>
//// 2.创建对象流：ifstream ifs;
//// 3.打开文件，并判断是否打开成功: ifs.open("文件路径",打开方式); isopen
//// 4.读数据：四种读取方式
//// 5.关闭文件：ifs.close();
//
//
//// 文本文件--读文件
//void test01()
//{
//	// 创建流对象
//	ifstream ifs;
//	// 打开文件
//	ifs.open("test1.txt", ios::out);
//	// 判断是否读到
//	if (!ifs.is_open())
//	{
//		return ;
//	}
//
//	// 读内容
//	// 1
//	//char buf[100] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	// 2
//	//char buf[100] = { 0 };
//	//while (ifs.getline(buf,sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	// 3 全局getline
//	//string buf;
//	//while (getline(ifs,buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	// 4 不推荐
//	char buf; 
//	while ( (buf = ifs.get()) != EOF )
//	{
//		cout << buf;
//	}
//
//
//	// 关闭文件
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}