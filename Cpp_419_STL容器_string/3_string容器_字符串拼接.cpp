//#include<iostream>
//#include<string>
//using namespace std;
//
//
//
//
//
//
///*
//string& operator+=(const char* str);   //重载+=操作符  
//string& operator+=(const char c);      //重载+=操作符
//string& operator+=(const string& str); //重载+=操作符
//string& append(const char *s);         //把字符串s连接到当前字符串结尾
//string& append(const char *s, int n);  //把字符串s的前n个字符连接到当前字符串结尾
//string& append(const string &s);       // 同operator+=(const string& str)
//string& append(const string &s,int pos,int n);//字符串s中从pos开始的n个字符连接到字符串结尾
//*/
//
//void test01()
//{
//	string str1 = "wei";
//	string str2 = "hong";
//	str1 += "hong";
//	cout << str1 << endl;
//
//	str2 += '!';
//	cout << str2 << endl;
//
//	str2 += str1;
//	cout << str2 << endl;
//
//	str1.append("weihong");
//	cout << str1 << endl;
//	str2.append(str2);
//	cout << str2 << endl;
//
//	str1.append("xxxxxx", 3);
//	cout << str1 << endl;
//
//	str1.append("abcdefg", 1, 4);
//	cout << str1 << endl;
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