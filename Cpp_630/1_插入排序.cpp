#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <vector>
//
//void InsertSort(vector<int>& v)
//{
//	int n = v.size();
//	for (int i = 1; i < n; i++) // ������Ԫ�ص�һ���±�
//	{
//		int temp = v[i];
//		int j = i - 1; // ���������һ��Ԫ���±�
//		for (; j >= 0;j--)
//		{
//			if (v[j] > temp)
//			{
//				v[j + 1] = v[j];
//			}
//			else
//			{
//				break;
//			}
//		}
//		v[j + 1] = temp;
//
//	}
//}
//
//int main()
//{
//	vector<int> nums = { 20,30,40,10,60,50 };
//	InsertSort(nums);
//
//	for (auto i : nums)
//	{
//		cout << i << " ";
//	}
//	return 0;
//}