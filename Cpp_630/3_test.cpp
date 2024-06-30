#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <vector>


/*
	给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找 和为目标值 target 的那 两个整数，
	并返回它们的数组下标。你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
	你可以按任意顺序返回答案。
*/

vector<int> findTarget(const vector<int> nums, int target)
{
	vector<int> ret(2);
	int n = nums.size();
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (nums[i] + nums[j] == target&&i!=j)
			{
				ret[0] = i;
				ret[1] = j;
				return ret;
			}
		}
	}
}
