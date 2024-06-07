#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<list>
using namespace std;



bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	list<int> ls; // 双向链表

	// 结点： 信息域---指针域
	// 
	// 下一个节点 next
	// 上一个节点 prior
	//

	cout << ls.size() << endl; //链表中结点个数（元素个数）
	ls.push_back(5); // 尾插
	ls.push_front(4); // 头插
	ls.push_back(3);
	ls.push_front(1);
	ls.push_back(2);

	ls.sort(); // 排序函数--默认升序

	ls.sort(cmp); // 利用比较器实现降序--list 内置的sort函数

	for (auto i : ls) 
	{
		cout << i << " ";
	}
	cout << endl;

	for (auto it = ls.begin(); it != ls.end(); it++)
	{
		cout << *it << " ";
	}


	return 0;
}