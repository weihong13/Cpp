//#include <iostream>
//#include <fstream>
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
//// 写文件步骤
//// 
//// 1.包含头文件：#include <fstream>
//// 2.创建对象流：ofstream ofs;
//// 3.打开文件: ofs.open("文件路径",打开方式)
//// 4.写数据：ofs<<"写入的数据"
//// 5.关闭文件：ofs.close();
//// 
//// 打开方式            解释
////ios::in             为读文件而打开文件
////ios::out            为写文件而打开文件
////ios : ate           初始位置 : 文件尾
////ios::app I          追加方式写文件
////ios::trunc          如果文件存在先删除，再创建
////ios::binary         二进制方式
////
////
////
////
//// 文件打开方式可以配合使用，用 | 操作符
//// ios::binary | ios::out   以二进制方式写文件
////
////
//// 
//// 
////
//

//// 文本文件--写文件
//void test01()
//{
//	// 创建流对象
//	ofstream ofs;
//	// 打开文件
//	ofs.open("test1.txt", ios::out);
//	// 写入内容
//	ofs << "姓名：拾叁" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：24" << endl;
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