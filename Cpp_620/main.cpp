#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;

//// 力扣-121-买卖股票最佳时机
//int maxProfit(vector<int>& prices) {
//	int ret = 0;
//	int sell = 1;
//	int buy = 0;
//	while (sell < prices.size())
//	{
//		if (prices[sell] < prices[buy])
//		{
//			buy = sell;
//		}
//		if (ret < (prices[sell] - prices[buy]))
//		{
//			ret = (prices[sell] - prices[buy]);
//		}
//		sell++;
//
//	}
//
//	return ret;
//}
//
//
//// 力扣-1-两数之和(O<n^2)
//
//vector<int> twoSum(vector<int>& nums, int target) {
//	vector<int> ret(2);
//	for (int i = 0; i < nums.size()-1; i++)
//	{
//		for (int j = i+1; j < nums.size(); j++)
//		{
//			if (target == (nums[i] + nums[j]))
//			{
//				ret[0] = i;
//				ret[1] = j;
//				return ret;
//			}
//		}
//	}
//}
//
//int main()
//{
//	// nums = [2, 7, 11, 15], target = 9
//
//	vector<int> nums = { 3,3 };
//	int target = 6;
//
//
//	vector<int> ret = twoSum(nums, target);
//
//	
//	for (auto i :ret)
//	{
//		cout << i << " ";
//	}
//
//	return 0;
//}