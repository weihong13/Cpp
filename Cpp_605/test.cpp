#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
// i input o output 流（一段字节序列，字符串）
using namespace std;



//int main()
//{
//
//	bool a1 = -1; // 1 ,任何非0值都是1
//
//	return 0;
//}

/*
 new 和 malloc 的区别
	new的返回值不需要强转，而malloc需要强转
	new是运算符，而malloc是C语言的库函数
	new不需要传入具体的字节个数，malloc需要传入具体的字节个数
	new使用delete释放，malloc使用free释放

*/



/*
指针常量：指针的常量
	指针是常量，指针的指向不能修改，int * const p;
	
常量指针：
	指向常量的指针，
	常量：const int a;

*/

//int main()
//{
//	int* const p = NULL; // 指针常量
//
//	const int a = 9;  // 常量
//	int const* p = &a; // 常量指针，指向常量的指针
//
//	// int* p1 = &a; // error;
//
//}


/*
	引用：起别名
		语法：数据类型 &别名 = 原名
	
	引用的底层实现：引用的底层是指针常量--指针的指向不能修改

	引用的特点：
		引用关系不能修改
		引用必须初始化，并且不能初始化为空

	用法：
		引用做函数参数

*/

//int main()
//{
//	int a = 2;
//	
//	int& b = a; // b 是 a 的引用，这里的 & 不是取地址，而是定义引用的符号。
//
//	cout << a << " " << b << endl;
//
//	b = 5;
//	cout << a << " " << b << endl;
//
//	int c = 6;
//	b = c;
//
//
//	double a1 = 1.0;
//	double& b1 = a1;
//
//	cout << sizeof b1 << endl; // 8， = sizeof a1（别名）
//}


int main()
{
	int m = 0;
	int n = 1;
	int max = m > n ? m : n;
	cout << max;
	return 0;
}
