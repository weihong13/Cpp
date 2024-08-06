#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>
#include <vector>

#include<algorithm>


// 字符串的输入
/*
	cin
		cin 是靠空格、换行、tab 来区分是否输入结束的，因此它无法输入空格、换行、tab

	getline(): 读入一行，空格不是分隔符

*/
void test01() 
{
	string str,str1;
	cin >> str; // 因此它无法输入空格、换行、tab
	getline(cin, str1);// 读入一行，空格不是分隔符


}
void test02()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);

	if (str1 > str2) // 在string内部，比较运算符重载
	{
		cout << "str1大" << endl;
	}
	else if (str1 < str2)
	{
		cout << "str2大" << endl;
	}
	else
	{
		cout << "相同" << endl;
	}

	// []运算符重载，返回的是引用类型，因此可以被修改
	// 如果不是引用类型，就会报错 表达式必须是可修改的左值

	str1[2] = '2'; 
}


string str = "adsasd";
char& get(int i)
{
	return str[i];
}

void test03()
{
	string str = "abdssd";
	string str1 = str; // 拷贝构造
	string str2;
	str2 = str1; // 赋值运算符重载

	// str1 + str2 + str; // +运算符重载
	str += 'a'; // +=重载

}

void test04()
{
	// STL迭代器：为了统一STL容器的遍历方式
	// 所以支持遍历的容器都有迭代器 vector  string  map  un_map  set  un_set  list
	// 栈、优先级队列不支持遍历，所以没有迭代器（能遍历就破环了其数据结构的特性）

	// 迭代器失效
	// 由于插入删除操作，导致迭代器指向的内存指向别的空间了，造成迭代器失效（野指针）
	string str = "qwea sdret";

	string::const_iterator it = str.begin();
	for (;  it != str.end(); it++)
	{
		cout << *it;
	}
	cout <<  endl;
	cout << str.find(" ") << endl;

}

void test05()
{
	vector<int> vec = { 9,7,8,-1,3,4,2,6,5 };
	
	sort(vec.begin(), vec.end()); // 从小到大排序
	sort(vec.rbegin(), vec.rend());// 从大到小排序

	reverse(vec.begin(), vec.end());// 反转



}

void test06()
{
	//将字符串转换成整型
	string s = "123", s1 = "456";
	int sum = stoi(s) + stoi(s1);
	cout << sum << endl;
	//将字符串转换成double类型
	string s2 = "12.3", s3 = "1.4";
	double sum1 = stod(s2) + stod(s3);
	cout << sum1 << endl;
	//将整数或小数转换成字符串
	int a = 2;
	double b = 2.3;
	string  sum3 = to_string(a) + to_string(b);
	cout << sum3 << endl;
}


// 常量可以通过const_case修改
void test07()
{
	const int a = 2;
	const int* p = &a;
	// *p = 3; // error

	int* p1 = const_cast<int*> (p);
	*p1 = 3;


}

int main()
{
	test04();

	get(2) = '2';

	return 0;
}