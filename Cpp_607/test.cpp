#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;



//int main()
//{
//	vector<int> v;
//	v.insert(v.begin(), 5); // ָ��λ�ò���
//	v.push_back(6);// β�巨
//	v.pop_back();// βɾ
//
//
//	// vector �ı�����ʽ��3��
//
//
//	vector<int> vArr[10]; // һ������10��vector����������
//
//
//
//
//	return 0;
//}


//// oj 1525
//int main()
//{
//	int n = 0;
//	cin >> n;
//	vector<vector <int>> v(n, vector<int>(n));
//
//	for (int i = 0; i < n; i++)
//	{
//		v[i][0] = v[i][i] = 1;
//		for (int j = 0; j <= i; j++)
//		{
//			if (v[i][j] == 0)
//			{
//				v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			cout << v[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//
//	return 0;
//}


//// oj 1526
//int main()
//{
//	char x;
//	vector<char> str;
//
//	while (cin >> x)
//	{
//		str.push_back(x);
//	}
//	int i = 0;
//	int j = str.size()-1;
//	while (i < j)
//	{
//		if (str[i] != str[j])
//		{
//			cout << "No";
//			return 0;
//		}
//		i++;
//		j--;
//	}
//	cout << "Yse";
//	return 0;
//}