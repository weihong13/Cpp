#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <vector>

int findMax(const vector<int> v)
{
	int n = v.size();
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (v[max] < v[i])
		{
			max = i;
		}
	}
	return v[max];
}
void BucketSort(vector<int>& v)
{
	int n = v.size();
	int max = findMax(v); // 查找最大值
	vector<int> bucket(max + 1); // 初始化桶
	for (int i = 0; i < n; i++) 
	{	// 计数
		bucket[v[i]]++; 
	}
	int index = 0;
	for (int i = 0; i < max+1; i++) // 遍历桶
	{
		// 根据计数进行值插入
		while (bucket[i]--)
		{
			v[index++] = i;
		}
	}

}

//int main()
//{
//	vector<int> nums = { 20,30,80,40,10,60,50,20,60,80 };
//	BucketSort(nums);
//
//	for (auto i : nums)
//	{
//		cout << i << " "; 
//	}
//	return 0;
//}