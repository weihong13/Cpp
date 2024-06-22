#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

// 选择排序
void SelectSort(vector<int>& nums)
{
	int n = nums.size();
	for (int i = 0; i < n; i++) // 表示选择n-1趟
	{
		int max = 0;
		for (int j = 0; j < n-i; j++) 
		{
			if (nums[j] >= nums[max])
			{
				max = j;
			}
		}
		if (max != n - i - 1)
		{
			swap(nums[max], nums[n - i - 1]);
		}
		
	}
}

// 查找峰值--二分法
int find(vector<int>& nums)
{
	int left = 0;
	int right = nums.size() - 1;
	while (left < right)
	{
		int mid = left + ((right - left) / 2);
		if (nums[mid] > nums[mid + 1])
		{
			right = mid;
		}
		else
		{
			left = mid + 1;
		}
	}
	return left;

}
/*
有一个长度为n的非降序数组，比如[1,2,3,4,5]，将它进行旋转，即把一个数组最开始的若
干个元素搬到数组的末尾，变成一个旋转数组，比如变成了[3,4,5,1,2]，或者[4,5,1,2,3]这
样的。请问，给定这样一个旋转数组，求数组中的最小值。
*/
int findMin(vector<int>& nums)
{
	int left = 0;
	int right = nums.size() - 1;
	while (left < right) {
		int mid = (right - left) / 2 + left;//相对安全 减法不容易
		if (nums[mid] > nums[right])
		{
			//对应中间落在1段上最小值在中间点的右侧调整左边界
			left = mid + 1;
		}
		else if (nums[mid] < nums[right])
		{
			//对应中间落在 2 段上 最小值在中间点的左侧，而且中间有可能是最
			right = mid;
		}
		else
		{	//中间点和右边界相同 有相同值 删除一个不影响最小值的查找
			right--;
		}
	}
	return nums[left];
}
int main()
{

	vector<int> nums = { 3,2,1,5,8,6,7,9,12,11 };

	SelectSort(nums);

	for (auto i : nums)
	{
		cout << i << " ";
	}
	cout << endl;
	vector<int> nums1 = { 2,4,1,3,7,8,4 };

	int ret = find(nums1);
	cout << ret;

	return 0;
}