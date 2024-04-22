#include<iostream>
using namespace std;
#include<deque>

//
// deque大小操作
// 
// deque中 没有容量的概念
// 
// deque.empty();     //判断容器是否为空
// deque.size();      //返回容器中元素的个数
// deque.resize(num);  //重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
//					   //如果容器变短，则末尾超出容器长度的元素被删除。
// 
// deque.resize(num, elem); //重新指定容器的长度为num,若容器变长，则以elem值填充新位置。
//						    //如果容器变短，则末尾超出容器长度的元素被删除。
//
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
	//构造
	deque<int> d1(5, 13);
	printDeque(d1);
	cout << "判空：" << d1.empty() << endl;

	cout << "大小：" << d1.size()<< endl;

	// deque.resize(num); 重新指定长度,默认填充
	d1.resize(10);
	printDeque(d1);
	d1.resize(5);

	// deque.resize(num, elem); 以elem填充
	d1.resize(10,99);
	printDeque(d1);
}

int main()
{
	test01();

	system("pause");
	return 0;
}