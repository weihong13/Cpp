#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#include <vector>

//// 704-���ֲ���
int search(vector<int>& nums, int target) 
{
	int right = nums.size()-1;
	int left = 0;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (target < nums[mid])
		{
			right = mid-1;
		}
		else if (target > nums[mid])
		{
			left = mid + 1;
		}
		else if (target == nums[mid])
		{
			return mid;
		}
	}
	return -1;

}

//int main()
//{
//	vector<int> nums = { 5 };
//	int target = 5;
//	int ret = search(nums, target);
//	cout << ret;
//
//	return 0;
//}





// 35-��������λ��
/*
����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ����������������
���Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
*/
int searchInsert(vector<int>& nums, int target) 
{
	int left = 0;
	int right = nums.size() - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = left +((right -left) / 2); // ��ֹ���
		if (target < nums[mid])
		{
			right = mid - 1;
		}
		else if (target > nums[mid])
		{
			left = mid + 1;
		}
		else if (target == nums[mid])
		{
			return mid; // Ŀ��ֵ�������е�Ԫ��
		}
	}

	if (left == 0) // Ŀ��ֵҪ���뵽������Ԫ��
	{
		return 0;
	}
	else if (left > right) // Ŀ��ֵ�� Ҫ���� ����ֵ �м��Ԫ��
	{
		return right+1;
	}
	else
	{
		return mid + 1; // Ŀ��ֵ�� Ҫ���뵽���Ҳ��Ԫ��
	}
}

int main()
{
	vector<int> nums = {1,3,5,6};
	int target = 7;
	int ret = searchInsert(nums, target);
	cout << ret;

	return 0;
}



