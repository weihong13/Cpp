#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//int main()
//{
//	vector<int> v;
//	int n;
//	while(cin >> n)
//	{
//		v.insert(v.begin(),n);
//	}
//	sort(v.rbegin(), v.rend());
//	for (vector<int>::iterator it = v.begin();it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//
//	return 0;
//}


//int main()
//{
//
//	int n = 0;
//	cin >> n;
//	vector<vector<int>> v(5, vector<int>(5));
//	int m = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> m;
//			if ((i == j )| (i+j == n-1))
//			{
//				m += 10;
//			}
//			v[i][j] = m;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << v[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}


//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> v;
//	int m;
//	while (cin >> m)
//	{
//		v.push_back(m);
//	}
//	int temp = *(v.begin());
//	for (int i = 1; i<v.size(); i++)
//	{
//		v[i - 1] = v[i];
//	}
//	*(v.end()-1) = temp;
//	for (int i = 0; i < n; i++)
//	{
//		cout << v[i] << " ";
//	}
//
//	
//
//	return 0;
//}


//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> v;
//	int m;
//	for(int i = 0; i < n; i++)
//	{
//		cin >> m;
//		v.push_back(m);
//		if (m % 2 != 0)
//		{
//			cout << v[i] << " ";
//		}
//	}
//	
//		
//	
//
//	return 0;
//}


//int main()
//{
//
//	int n = 0;
//	int m = 0;
//	cin >> m;
//	cin >> n;
//	vector<vector<int>> v1(m, vector<int>(n));
//	vector<vector<int>> v2(m, vector<int>(n));
//
//	int temp = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> temp;
//			v1[i][j] = temp;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> temp;
//			v2[i][j] = temp;
//		}
//	}
//
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (v1[i][j] == v2[i][j])
//			{
//				count++;
//			}
//		}
//	}
//
//	double ret = (double)count / (m * n);
//	ret *= 100;
//
//	cout << (int)ret;
//	return 0;
//}


int main()
{

	int n = 0;
	cin >> n;
	vector<vector<int>> v(5);
	int m = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> m;
			v[i][j] = m;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
