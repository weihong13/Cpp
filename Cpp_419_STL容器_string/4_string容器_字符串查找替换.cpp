//#include<iostream>
//#include<string>
//using namespace std;
//
//// 
//// 字符串查找和替换
//// find、rfind、  replace
//// find: 从左往右查找
//// rfind： 从右往左查找
//// 
//// 
//// replace
//// string& replace(int pos,int n,const string& str);  替换从pos开始n个字符为字符串str
//// string& replace(int pos, int n, const char* s); 替换从pos开始的n个字符为字符串s
////
////
////
//
//
//// 查找
//void test01()
//{
//	string str1 = "weihong";
//
//	// find查找，从左往右查找，找到了，返回下标位置，没找到返回-1；
//	int ret = str1.find("ho1");
//	cout << ret << endl;
//	// rfind 从右往左查找，找到了，返回下标位置，没找到返回-1；
//	ret = str1.rfind("ei");
//	cout << ret << endl;
//
//	string str2 = "weihongwei";
//	ret = str2.find("ei");
//	cout << ret << endl; // 1
//	ret = str2.rfind("ei");
//	cout << ret << endl; // 8 
//
//}
//
//// 替换
//void test02()
//{
//	string str1 = "weihong";
//	// 替换从pos开始n个字符为字符串str
//	// 从e开始3个字符 eih 替换为 xxxxx
//	str1.replace(1, 3, "xxxxx");
//	cout << str1 << endl;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}