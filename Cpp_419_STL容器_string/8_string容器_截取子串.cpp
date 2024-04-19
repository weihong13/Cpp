#include<iostream>
using namespace std;
#include<string>


//
// 字符串截取子串
// 从哪个位置起，截多少个
// string substr(int pos=8，intn=npos)const; //返回由pos开始的n个字符组成的字符串
// 



void test01()
{
	string str1 = "xxxweihongxxx";
	
	string str2;
	// 返回由3开始的7个字符组成的字符串
	str2 = str1.substr(3, 7);
	cout << str2 << endl;

	string email = "WeiHong@163.com";
	int pos = email.find('@');

	string userName = email.substr(0, pos);
	cout << userName << endl;


}

int main()
{
	test01();

	system("pause");
	return 0;
}