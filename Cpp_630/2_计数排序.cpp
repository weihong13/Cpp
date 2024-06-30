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
	int max = findMax(v); // �������ֵ
	vector<int> bucket(max + 1); // ��ʼ��Ͱ
	for (int i = 0; i < n; i++) 
	{	// ����
		bucket[v[i]]++; 
	}
	int index = 0;
	for (int i = 0; i < max+1; i++) // ����Ͱ
	{
		// ���ݼ�������ֵ����
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