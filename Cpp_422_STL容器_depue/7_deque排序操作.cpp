#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>

//
// deque排序操作
// 
// 利用算法实现对deque容器排序
// 
// 算法 需要包含头文件algorithm
// sort(iterator beg，iterator lend)  //对beg和end区间内元素进行排序
// 



void printDeque(deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// const_iterator 只读的迭代器，不能修改
		cout << *it << " ";
	}
	cout << endl;
}



void test01()
{

	deque<int> d1;
	d1.push_back(1);
	d1.push_back(3);
	d1.push_back(2);
	d1.push_back(5);
	d1.push_back(4);
	printDeque(d1);

	// 默认是 从小到大 升序
	// 对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
	sort(d1.begin(), d1.end());
	printDeque(d1);
}


int main()
{
	test01();

	system("pause");
	return 0;
}




