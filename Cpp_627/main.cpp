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
//		cout << "������" << this->m_Name << endl;
//		cout << "ѧ�ţ�" << this->m_ID<< endl;
//	}
//
//};
//
//
//
//int main()
//{
//	Student std;
//	std.m_Name = "����";
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
//		cout << "������" << this->name << endl;
//		cout << "������" << this->car << endl;
//		cout << "���룺" << this->passWord << endl;
//	}
//	void setPerson(string name,string car,string pwd)
//	{
//		// ��ʽ���
//		if (pwd.size() == 6)
//		{
//			for (int i = 0; i < pwd.size(); i++)
//			{
//				if (pwd[i] < '0' || pwd[i]>'9')
//				{
//					cout << "�����ʽ����" << endl;
//					return;
//				}
//			}
//		}
//		else
//		{
//			cout << "������6λ���룡" << endl;
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
//	string passWord; // Ҫ��6λ���֣������Ǹ���
//};
//
//int main()
//{
//	Person p;
//	p.setPerson("����", "�µ�", "898898");
//	p.showPerson();
//	
//	return 0;
//}

//class A
//{
//	/*
//	*	����Ա����Ϊ˽����ʲô�óԣ�
//			1.���Կ��ƶ�дȨ��
//			2.���Լ�����ݵ���Ч��
//	*/
//	int num; // ûдȨ�ޣ�Ĭ����private
//public:
//	// �������ڴ����������ж�����ͬһ�ݴ���
//	void setNum(int num)
//	{
//		/*
//		*	thisָ������ã�
//		*		1������ͬ���ĳ�Ա�������β�
//		*		2�����ֲ�ͬ�����ͬ����Ա����
//		*	A * const this
//		*		ʹ��const���ε�ԭ�򣺷�ָֹ�򱻸ı�
//		*/
//		this->num = num;
//	}
//};
///*
//	C++�ڴ����
//		ջ�����ֲ��������������Լ��ͷ�
//		��������Ҫ�ֶ����٣�malloc��new�����ֶ��ͷţ�free��delete��
//		ȫ��������̬������ȫ�ֱ�������̬����
//		����������Ŵ��뺯��
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