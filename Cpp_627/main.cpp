#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <string>
#include <vector>


//class Student
//{
//public:
//	string m_Name;
//	string m_ID;
//	void showStudent()
//	{
//		cout << "姓名：" << this->m_Name << endl;
//		cout << "学号：" << this->m_ID<< endl;
//	}
//
//};
//
//
//
//int main()
//{
//	Student std;
//	std.m_Name = "张三";
//	std.m_ID = "1213123";
//	std.showStudent();
//	
//	int n;
//	cin >> n;
//	vector<Student> stuVec(n);
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> stuVec[i].m_Name >> stuVec[i].m_ID;
//	}
//
//	for (vector<Student>::iterator it = stuVec.begin(); it != stuVec.end(); it++)
//	{
//		it->showStudent();
//	}
//
//
//	return 0;
//}



//class Person
//{
//public:
//	string name;
//	void showPerson()
//	{
//		cout << "姓名：" << this->name << endl;
//		cout << "汽车：" << this->car << endl;
//		cout << "密码：" << this->passWord << endl;
//	}
//	void setPerson(string name,string car,string pwd)
//	{
//		// 格式检测
//		if (pwd.size() == 6)
//		{
//			for (int i = 0; i < pwd.size(); i++)
//			{
//				if (pwd[i] < '0' || pwd[i]>'9')
//				{
//					cout << "密码格式错误" << endl;
//					return;
//				}
//			}
//		}
//		else
//		{
//			cout << "请输入6位密码！" << endl;
//			return;
//		}
//		this->name = name;
//		this->car = car;
//		this->passWord = pwd;
//
//	}
//protected:
//	string car;
//private:
//	string passWord; // 要求6位数字，不能是负数
//};
//
//int main()
//{
//	Person p;
//	p.setPerson("张三", "奥迪", "898898");
//	p.showPerson();
//	
//	return 0;
//}

//class A
//{
//	/*
//	*	将成员设置为私有有什么好吃？
//			1.可以控制读写权限
//			2.可以检测数据的有效性
//	*/
//	int num; // 没写权限，默认是private
//public:
//	// 代码存放在代码区，所有对象共享同一份代码
//	void setNum(int num)
//	{
//		/*
//		*	this指针的作用：
//		*		1、区分同名的成员函数和形参
//		*		2、区分不同对象的同名成员变量
//		*	A * const this
//		*		使用const修饰的原因：防止指向被改变
//		*/
//		this->num = num;
//	}
//};
///*
//	C++内存分区
//		栈区：局部变量、编译器自己释放
//		堆区：需要手动开辟（malloc、new）、手动释放（free、delete）
//		全局区（静态区）：全局变量、静态变量
//		代码区：存放代码函数
//*/
//int main()
//{
//	A a, b, c, d;
//	a.setNum(1);
//	b.setNum(2);
//	c.setNum(3);
//	d.setNum(4);
//	return 0;
//}


// 
#include <stack>
vector<int> dailyTemperatures(vector<int>& t) {
    vector<int> ans(t.size(), 0);
    stack<int> stk;
    int i = 0;
    stk.push(i);
    for (i= 1; i < t.size(); i++)
    {
        while (!stk.empty() && i < t.size())
        {
            ans[stk.top()] = i - stk.top();
            stk.pop();

        }
        stk.push(i);
    }
    return ans;
}
int main()
{
    vector<int> nums = { 73,74,75,71,69,72,76,73 };
    vector<int> ret =  dailyTemperatures(nums);

    for (auto i : ret)
    {
        cout << i << " ";
    }
    return 0;
}