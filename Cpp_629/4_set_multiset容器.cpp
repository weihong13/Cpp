#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <set>
#include <string>
using namespace std;

/*
	set/multiset基本概念

	简介:
		所有元素都会在插入时自动被排序
	
	本质:
		get/multiset属于关联式容器，底层结构是用二叉树实现。
	
	set和multiset区别:
		。set不允许容器中有重复的元素
		。multiset允许容器中有重复的元素

构造:
	set<T> st;          //默认构造函数:
	set(const set &st); //拷贝构造函数

赋值:
	set& operator=(const set &st);  //重载等号操作符


大小和交换
	size(); //返回容器中元素的数目
	empty(); //判断容器是否为空

插入和删除
	insert(elem);    //在容器中插入元素。
	clear();         //清除所有元素
	erase(pos);      //删除pos 迭代器所指的元素，返回下一个元素的迭代器。
	erase(beg, end); //删除区间[beg,end)的所有元素，返回下一个元素的迭代器
	erase(elem);    //删除容器中值为elem的元素。

查找和统计
	find(key); //查找key是否存在,若存在，返回该键的元素的迭代器;若不存在，返回set.end();
	count(key); //统计key的元素个数

set和multiset区别
	set不可以插入重复数据，而multiset可以
	set插入数据的同时会返回插入结果，表示插入是否成功
	multiset不会检测数据，因此可以插入重复数据

对组的创建
		功能描述:
			成对出现的数据，利用对组可以返回两个数据
		两种创建方式:
			pair<type,type>p( value1,value2 );
			pair<type,type>p=make_pair( value1,value2 );
set排序
	学习目标:
		set容器默认排序规则为从小到大，掌握如何改变排序规则
	主要技术点:
		利用仿函数，可以改变排序规则
*/

//void printSet(const set<int> s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " " ;
//	}
//	cout << endl;
//}
//void printMultiset(const multiset<int> ms)
//{
//	for (set<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//// 查找和统计
//// find(key); //查找key是否存在,若存在，返回该键的元素的迭代器;若不存在，返回set.end();
//// count(key); //统计key的元素个数
//void test01()
//{
//	set<int> st;
//
//	st.insert(2);
//	st.insert(5);
//	st.insert(4);
//	printSet(st);
//
//
//	// find(key); //查找key是否存在,若存在，返回该键的元素的迭代器;若不存在，返回set.end();
//
//	set<int>::iterator it = st.find(6);
//	if (it != st.end())
//	{
//		cout << "找到了" << endl;
//	}
//	else
//	{
//		cout << "不存在" << endl;
//
//	}
//
//	// count(key); //统计key的元素个数
//	cout << st.count(2) << endl;
//}
//
///*
//set和multiset区别
//	set不可以插入重复数据，而multiset可以
//	set插入数据的同时会返回插入结果，表示插入是否成功
//	multiset不会检测数据，因此可以插入重复数据
//*/
//void test02()
//{
//	set<int> st;
//
//	// set的插入会返回一个对组。pair<iterator, bool>
//	// 插入位置的迭代器和是否插入成功
//	pair<set<int>::iterator, bool>  ret = st.insert(8);
//	if (ret.second)
//	{
//		cout << "第一次插入成功！" << endl;
//	}
//	else
//	{
//		cout << "第一次插入失败！" << endl;
//	}
//	ret = st.insert(8);
//	if (ret.second)
//	{
//		cout << "第二次插入成功！" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败！" << endl;
//	}
//	printSet(st);
//
//	multiset<int> mst;
//	mst.insert(8);
//	mst.insert(8);
//	mst.insert(8);
//	printMultiset(mst);
//}
///*
//对组的创建
//		功能描述:
//			成对出现的数据，利用对组可以返回两个数据
//		两种创建方式:
//			pair<type,type>p( value1,value2 );
//			pair<type,type>p=make_pair( value1,value2 );
//
//*/
//
//void test03()
//{
//	pair<string, int> p("张三", 56);
//	cout << "姓名：" << p.first << "年龄：" << p.second << endl;
//	pair<string, int> p1 = make_pair(", 李四", 45);
//
//	cout << "姓名：" << p.first << ", 年龄：" << p.second << endl;
//
//}
///*
//set排序
//	学习目标:
//		set容器默认排序规则为从小到大，掌握如何改变排序规则
//	主要技术点:
//		利用仿函数，可以改变排序规则
//		
//		仿函数：重载了函数调用的小括号 ()
//*/
//
//// set 存放内置类型的排序
//class MyCmp
//{
//public:
//	// () 操作符的重载 
//	// const 限定 调用 () 的set对象不能修改v1，v2的值
//	bool operator()(int v1,int v2) const
//	{
//		return v1 > v2;
//	}
//};
//void test04()
//{
//	// 默认从小到大
//	set<int> st;
//	st.insert(5);
//	st.insert(2);
//	st.insert(1);
//	st.insert(3);
//	st.insert(4);
//
//	printSet(st);
//
//	// 指定排序规则为 从大到小
//	set<int, MyCmp> s2;
//	s2.insert(5);
//	s2.insert(2);
//	s2.insert(1);
//	s2.insert(3);
//	s2.insert(4);
//	
//	// 迭代器也要改变
//	for (set<int, MyCmp>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//}

// set 存放自定义数据类型的排序
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

class MyCmpByAge
{
public:
	bool operator()(const Person& p1, const Person& p2) const
	{
		return p1.m_Age > p2.m_Age;
	}
};
void test05()
{
	// 自定义的数据类型，都会指定排序规则
	set<Person, MyCmpByAge> st;

	Person p1("张三", 35);
	Person p2("李四", 36);
	Person p3("王五", 32);
	Person p4("赵六", 33);
	Person p5("钱七", 38);

	st.insert(p1);
	st.insert(p2);
	st.insert(p3);
	st.insert(p4);
	st.insert(p5);

	for (set<Person, MyCmpByAge>::iterator it = st.begin(); it != st.end(); it++)
	{
		cout << "姓名：" << it->m_Name << ", 年龄：" << it->m_Age << endl;
	}

}


//int main()
//{
//	//test01();
//	//test02();
//	test05();
//	return 0;
//}