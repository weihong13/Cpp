#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>

using namespace std;
/*
	功能描述:栈容器常用的对外接口
	构造函数:
		stack<T> stk;   // stack采用模板类实现，stack对象的默认构造形式
		stack(const stack &stk);  // 拷贝构造函数
	赋值操作:
		stack& operator=(const stack &stk);   // 重载等号操作符
	数据存取:
		push(elem);  // 向栈顶添加元素
		pop();     // 从栈顶移除第一个元素
		top();     // 返回栈顶元素

	大小操作:
		empty(); // 栈是否为空
		size();  // 返回栈的大小

*/

//int main()
//{
//	// 默认构造
//	stack<int> stk;
//
//	// 判空，空返回1 非空返回0
//	int ret = stk.empty();
//	cout << ret << endl;
//
//	// 进栈
//	stk.push(1);
//	stk.push(2);
//	stk.push(3);
//	stk.push(4);
//
//	// 拷贝构造
//	stack<int> stk1(stk);
//	// 等号操作符重载
//	stack<int> stk2 = stk1;
//
//	// 出栈
//	stk2.pop();
//
//	// 查看栈顶元素
//	cout << stk2.top() << endl;
//	// 查看栈的大小
//	cout << stk2.size() << endl;
//
//
//
//	return 0;
//}

