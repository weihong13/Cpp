#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#include <vector>

//// 704-二分查找
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





// 35-搜索插入位置
/*
给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
*/
int searchInsert(vector<int>& nums, int target) 
{
	int left = 0;
	int right = nums.size() - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = left +((right -left) / 2); // 防止溢出
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
			return mid; // 目标值是数组中的元素
		}
	}

	if (left == 0) // 目标值要插入到最左侧的元素
	{
		return 0;
	}
	else if (left > right) // 目标值是 要插入 俩个值 中间的元素
	{
		return right+1;
	}
	else
	{
		return mid + 1; // 目标值是 要插入到最右侧的元素
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



