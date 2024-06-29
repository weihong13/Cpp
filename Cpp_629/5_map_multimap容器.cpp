#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <map>
#include <string>
using namespace std;

/*
map构造和赋值
	功能描述:
		。对map容器进行构造和赋值操作
	构造:
		map<T1,T2> mp;    //map默认构造函数:
		map(const maÃ&mp);//拷贝构造函数
	赋值:
		map& operator=(const map &mp); //重载等号操作符

map大小和交换
	功能描述:
		统计map容器大小以及交换map容器
	函数原型:
		size();   //返回容器中元素的数目
		empty();  //判断容器是否为空
		swap(st); //交换两个集合容器

map插入和删除

	功能描述:
		map容器进行插入数据和删除数据
	函数原型:
		insert(elem);    //在容器中插入元素。
		clear();         //清除所有元素
		erase(pos);      //删除pos迭代器所指的元素，返回下一个元素的迭代器,
		erase(beg, end); //删除区间[beg,end)的所有元素，返回下一个元素的迭代器。
		erase(key);      //删除容器中值为key的元素。

map查找和统计
	功能描述:
		对map容器进行查找数据以及统计数据
	函数原型:
		find(key);  //查找key是否存在,若存在，返回该键的元素的迭代器;若不存在，返回set.end();
		count(key); //统计key的元素个数

*/
void printMap(const map<int, string> mp)
{
	for (map<int, string>::const_iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << "编号：" << it->first << ", 姓名：" << it->second << endl;
	}

}

void test01()
{
	map<int, string> mp;

	//插入　4种
	mp.insert(pair<int, string>(1, "张三"));
	mp.insert(make_pair(2,"李四"));
	mp.insert(map<int, string>::value_type(3, "王五"));
	mp[4] = "赵六"; // 不建议用来插入
	//  mp[5]; // key不存在时，会创建一个 key为5，value为默认值的值

	// 如果确认key存在，可以根据key找的 key的value值
	cout << mp[4] << endl; // 赵六
	printMap(mp);
}
// map容器排序
// map容器默训排序规则为 按照key值进行 从小到大排序
// 改为从大到小
// 内置数据类型
class MyCmp
{
public:
	bool operator()(int v1,int v2) const
	{
		return v1 > v2;
	}
};
void test02()
{
	map<int, string,MyCmp> mp;

	// 插入
	mp.insert(pair<int, string>(3, "张三"));
	mp.insert(make_pair(1, "李四"));
	mp.insert(map<int, string>::value_type(2, "王五"));
	mp[4] = "赵六"; // 不建议用来插入

	for (map<int, string, MyCmp>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << "编号：" << it->first << ", 姓名：" << it->second << endl;
	}
}

//　自定义数据类型
class Person
{
public:
	Person()
	{

	}
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

class MyCmp1
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};

void test03()
{
	map<int, Person, MyCmp1> mp;

	Person p1("张三", 34);
	Person p2("李四", 28);
	Person p3("王五", 53);
	Person p4("赵六", 23);

	// 插入
	mp.insert(pair<int, Person>(3, p1));
	mp.insert(make_pair(1, p2));
	mp.insert(map<int, Person, MyCmp1>::value_type(2, p3));
	mp[4] = p4; // 不建议用来插入

	for (map<int, Person, MyCmp1>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << "编号：" << it->first << ", 姓名：" << it->second.m_Name << ", 年龄："<< it->second.m_Age << endl;
	}
}

int main()
{
	// test01();
	// test02();
	test03();
	return 0;
}