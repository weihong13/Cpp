#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<list>
using namespace std;


//int main()
//{
//	//
//	// list 双向链表
//	//
//
//	list<int> ls;
//
//	ls.size(); // 0
//
//	ls.push_back(1); //　尾插
//	ls.push_front(5);  // 头查
//
//	ls.sort(); // 升序排序；
//
//
//
//	return 0;
//}


//
// 容器-- set、map、string、vector、list 
//



// stack--栈

// 先进后出
// 
// 压栈--进数据
// 弹栈--出数据
// 
//

#include<stack>
//int  main()
//{
//	stack<int> s;
//
//	s.size();
//
//	s.push(1);
//	s.push(5);
//	s.pop();
//	s.push(3);
//	s.push(2);
//	s.push(4);
//
//	cout << s.top() << endl; // 栈顶数据
//
//	// 判断是否为空
//	s.empty(); // 空返回1；非空返回0
//
//
//
//	return 0;
//}


// 判断括号是否匹配
#include<string>

//// oj-3102
//int main()
//{
//	string str;
//	cin >> str;
//
//	stack<char> s;
//	int i = 0;
//	while (str[i] != '@')
//	{
//		if (str[i] == '(')
//		{
//			s.push(str[i]);
//		}
//		else if (str[i] == ')')
//		{
//			s.pop();
//		}
//		i++;
//	}
//
//	if (s.empty())
//	{
//		cout << "YES" << endl;
//	}
//	else 
//	{
//		cout << "NO" << endl;
//
//	}
//
//	return 0;
//}


// 3103
#include<vector>
int main()
{
	int n;
	cin >> n;
	vector<string> str1(n);
	vector<vector<char>> str(n, vector<char>(n));
	string str;

	stack<char> s;

	for(int i = 0; i < str.size();i++)
	{
		if (str[i] == '(' || str[i] == '[')
		{
			s.push(str[i]);
		}
		else
		{
			if (s.empty())
			{
				cout << "Wrong" << endl;
				return 0;
			}
			else
			{
				if (str[i] == ')' && s.top() == '(' || str[i] == ']' && s.top() == '[')
				{
					s.pop();
				}
				else
				{
					cout << "Wrong" << endl;
					return 0;
				}

			}
		}

	}

	if (s.empty())
	{
		cout << "OK" << endl;
	}
	else
	{
		cout << "Wrong" << endl;

	}

	return 0;
}

