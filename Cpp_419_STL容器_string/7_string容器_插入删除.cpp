//#include<iostream>
//using namespace std;
//#include<string>
//
//
////
//// 字符串插入删除
//// 
//// string& insert(int pos, const char* s)!      //插入字符串
//// string& insert(int pos, const string& str);  //插入字符串
//// string& insert(int pos, int n, char c);      //在指定位置插入n个字符c
//// string& erase(int pos, int n = npos);       //删除从Pos开始的n个字符
//// 
//
//
//
//void test01()
//{
//	string str1 = "weihong";
//	// str1.insert(2, "xxxx");
//	cout << str1 << endl;
//	
//	// 从下标1 到下标5 插入字符xxx，后面的也不变
//	str1.insert(1, 5, 'x'); 
//	cout << str1 << endl; // wxxxxxeihong
//
//	// 删除从下标1 到下标5的字符
//	str1.erase(1, 5);
//	cout << str1 << endl; // weihong
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