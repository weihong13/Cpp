#include"MyArray.hpp"

//
// 类模板案例
// 案例描述:实现一个通用的数组类，要求如下
// 可以对内置数据类型以及自定义数据类型的数据进行存储
// 将数组中的数据存储到堆区
// 构造函数中可以传入数组的容量
// 提供对应的拷贝构造函数以及operator = 防止浅拷贝问题
// 提供尾插法和尾删法对数组中的数据进行增加和删除
// 可以通过下标的方式访问数组中的元素
// 可以获取数组中当前元素个数和数组的容量
//
//



void test01()
{
	MyArray<int> arr(5);
	cout << "-------------" << endl;
	MyArray<int> arr1(arr);
	cout << "-------------" << endl;
	MyArray<int> arr2(1);
	arr2 = arr;


}
// 对内置数据类型的操作
void test02()
{
	MyArray<int> arr(5);
	
	for (int i = 0; i < arr.getCapacity() ;i++)
	{
		arr.TailInsert(i + 10);
		cout << arr.getSize() << endl;

	}
	arr.TailDel();
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << "  " << arr.getSize() << endl;
	}

}

// 对自定义数据类型的操作

class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->N_Age = age;
	}

	string m_Name;
	int N_Age;
};

void test03()
{
	MyArray<Person> pArr(10);

	Person p1("weihong1", 23);
	Person p2("weihong2", 24);
	Person p3("weihong3", 25);
	Person p4("weihong4", 26);
	Person p5("weihong5", 27);

	pArr.TailInsert(p1);
	pArr.TailInsert(p2);
	pArr.TailInsert(p3);
	pArr.TailInsert(p4);
	pArr.TailInsert(p5);

	for (int i = 0; i < pArr.getSize(); i++)
	{
		cout << "姓名：" << pArr[i].m_Name 
			 << "  年龄：" << pArr[i].N_Age << endl;
	}
}


int main()
{

	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}