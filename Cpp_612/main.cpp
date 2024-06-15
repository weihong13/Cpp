#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//
// 函数在执行的时候，会开辟一块函数栈（不执行就不开辟）
// 函数栈里存(参数、局部变量)
// 函数结束（函数栈被销毁）
// 
// 
// 而返回值会返回一个和a相同的对象，但是没有名字：匿名对象。
//

//int fun()
//{
//	int a = 2;
//	return a;
//
//}
//int& fun1() // 返回值是引用类型。返回的就是a自己
//{
//	int a = 10;
//	return a;
//}
//
//int main()
//{
//	cout << fun() << endl; // 这里的返回值不是 fun中的a，而是一个匿名对象
//
//	// 使用引用接收，就是一个别名，a1就是fun1中的a本身，一段时间后，a销毁，a1也就没了。
//	int& a1 = fun1();   
//	cout << a1 << endl; // 10
//	cout << a1 << endl; // 随机值(销毁的时间不一定)
//	cout << a1 << endl; // 随机值
//	cout << a1 << endl; // 随机值
//
//	int a2 = fun1();    // 使用变量接收，相当于又复制了一份，a2不会销毁，fun1的返回值会被销毁
//	cout << a2 << endl; // 10
//	cout << a2 << endl; // 10
//	cout << a2 << endl; // 10
//	cout << a2 << endl; // 10
//
//	return 0;
//}


//int& test01()
//{
//	static int a = 2;
//	return a;
//
//}
//
//
//int main()
//{
//	
//	// 使用引用接收，就是一个别名，a1就是fun1中的a本身，一段时间后，a销毁，a1也就没了。
//	// 但使用了 static 扩展了生命周期
//	int& a1 = test01();
//	cout << a1 << endl; // 10
//	cout << a1 << endl; // 10
//	cout << a1 << endl; // 10
//	cout << a1 << endl; // 10
//
//	return 0;
//}


/*
	左值右值：
		左值：有名字，能被修改
		右值：没名字，不能被修改
*/

//int& test01()
//{
//	int a = 2;
//	return a;
//
//}
//
//int test02()
//{
//	int a = 3;
//	return a;
//
//}
//
//
//int main()
//{
//	
//
//	return 0;
//}

// // 函数声明与 默认参数
//void fun(int a = 0, int b = 10, int c = 20)
//{
//	cout << a << " " << b << " " << c << endl;
//}
//void fun1(int a = 10); // 声明时给了参数默认值，实现的时候就不能给默认值了
//int main()
//{
//	fun();
//	fun1();
//
//}
//
//void fun1(int a) // 声明时给了参数默认值，实现的时候就不能给默认值了
//{
//	cout << a << endl;
//}


// lc /88
#include<vector>
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int max = m > n ? m : n;
	int i = 0;
	int j = 0;
	while (i < max || j < max)
	{
		if (nums1[i] <= nums2[j])
		{
			
		}
	}
}

int main()
{
	vector<int> nums1 = { 1,2,3,0,0,0 };
	vector<int> nums2 = { 2,5,6};
	int m = 3;
	int n = 3;

	// merge(nums1, m, nums2, n);

	cout << *nums1.begin();

	return 0;
}