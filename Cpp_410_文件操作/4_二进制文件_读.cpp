#include <iostream>
#include <fstream>
using namespace std;

//
// 二进制文件读写
// 
// 注意打开方式 ios::binary 二进制方式   
// 
// 
// 二进制方式读文件主要利用流对象调用成员函数read
// 函数原型:ostream& read(char* buffer, int ikn);
// 参数解释:字符指针buffer指向内存中一段存储空间。len是读写的字节数
//       
//
class Person
{
public:
	char name[20];
	int age;
};

// 二进制文件--写文件
void test01()
{
	// 创建流对象-在创建对象的时候就可以打开
	ifstream ifs;
	// 打开文件
	ifs.open("person.txt", ios::out | ios::binary);
	// 判断读取是否成功
	if (!ifs.is_open())
	{
		return;
	}
	// 写入内容

	Person p;
	ifs.read((char*)&p, sizeof(Person));

	cout << "姓名：" << p.name << endl;
	cout << "年龄：" << p.age << endl;


	// 关闭文件
	ifs.close();
}

int main()
{
	test01();

	system("pause");
	return 0;
}