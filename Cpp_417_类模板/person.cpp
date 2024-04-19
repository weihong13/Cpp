#include"person.h"


// 构造函数实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) // 告诉person t1 t2 是一个类模板的参数
{
	this->m_Name = name;
	this->m_Age = age;
}

// 成员函数实现
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "姓名：" << this->m_Name << endl;
	cout << "年龄：" << this->m_Age << endl;
}