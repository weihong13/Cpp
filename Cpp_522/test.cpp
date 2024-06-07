#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;



bool cmp(int a,int b)
{
	return a < b;
}
int main()
{
	int n = 0;
	int x = 0;
	int num = 0;
	cin >> n;
	int* Arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x % 2 == 1)
		{
			Arr[num] = x;
			num++;
		}
	}

	sort(Arr, Arr+num,cmp); // 快排

	for (int i = 0; i < num; i++) {
		cout << Arr[i];
		if (i != num - 1)
		{
			cout << ",";
		}
		
	}
	return 0;
}



//typedef struct Student
//{
//	int id;
//	double score;
//}Stu;
//
//
//bool cmp_by_sore(Stu x, Stu y)
//{
//	return x.score < y.score;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	cin >> n;
//	cin >> k;
//	Stu* stuArr = new Stu[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> stuArr[i].id;
//		cin >> stuArr[i].score;
//	}
//
//	sort(stuArr, stuArr + n, cmp_by_sore);
//
//	cout << stuArr[k-1].id << " " << stuArr[k-1].score << endl;
//
//	delete[] stuArr;
//
//	return 0;
//}


//typedef struct Student
//{
//	int id;
//	int chinese;
//	int math;
//	int english;
//	int sum;
//}Stu;
//
//
//bool cmp_by_sore(Stu x, Stu y)
//{
//	return x.sum > y.sum;
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	Stu* stuArr = new Stu[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		stuArr[i].id = i+1;
//		cin >> stuArr[i].chinese;
//		cin >> stuArr[i].math;
//		cin >> stuArr[i].english;
//		stuArr[i].sum = stuArr[i].chinese + stuArr[i].math + stuArr[i].english;
//	}
//
//	sort(stuArr, stuArr + n, cmp_by_sore);
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << stuArr[i].id << " " << stuArr[i].sum << endl;
//	}
//
//	delete[] stuArr;
//
//	return 0;
//}



//typedef struct Student
//{
//	string name;
//	int score;
//}Stu;
//
//
//bool cmp_by_sore(Stu x, Stu y)
//{
//	if (x.score != y.score) return x.score < y.score;
//
//	return x.name < y.name;
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	Stu* stuArr = new Stu[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> stuArr[i].name;
//		cin >> stuArr[i].score;
//	}
//
//	sort(stuArr, stuArr + n, cmp_by_sore);
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << stuArr[i].name << " " << stuArr[i].score << endl;
//	}
//
//	delete[] stuArr;
//
//	return 0;
//}

int main()
{	
	int n;
	cin >> n;
	int key;
	map<int, int> m;
	bool flag = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> key;
		m[key]++;
		if (m[key] > n / 2)
		{
			flag = 1;
			cout << key;
			return 0;
		}
	}
	if (flag == 0)
	{
		cout << "no";
	}
	return 0;
}

int main()
{
	string str;
	cin >> str;
	map<char, int> m;
	//遍历字符串 累计每个字符出现的次数 累计到 map 当中
	//每个字符对应的就是 key 键 每个字符出现的次数就是对应的 value 值
	for (int i = 0; i < str.size(); i++) 
	{
		m[str[i]]++;

	}
	// 找到最多的
	char max_key = 0;
	for (auto i : m)
	{
		if (i.second > max_key)
		{
			max_key = i.first;
		}
	}
	cout << max_key << " " << m[max_key];

	return 0;
}