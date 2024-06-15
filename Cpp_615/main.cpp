#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;

//// likou 88
//void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
//{
//	int i = m - 1;
//	int j = n - 1;
//	int index = m + n - 1;
//	while (i >= 0 && j >= 0)
//	{
//		if (nums1[i] < nums2[j]) nums1[index--] = nums2[j--];
//		else nums1[index--] = nums1[i--];
//	}
//	while (j >= 0)
//	{
//		nums1[index--] = nums2[j--];
//	}
//}
//// 26
//int removeDuplicates(vector<int>& nums) {
//	int fast = 0;
//	int slow = 0;
//	while (fast < nums.size())
//	{
//		if (nums[fast] != nums[slow]) nums[++slow] = nums[fast++];
//		else fast++;
//	}
//	return slow + 1;
//}
//
//// 27
//int removeElement(vector<int>& nums, int val) 
//{
//	int fast = 0;
//	int slow = 0;
//
//	while (fast < nums.size())
//	{
//		if (nums[fast] == val)
//		{
//			fast++;
//		}
//		else
//		{
//			nums[slow++] = nums[fast++];
//		}
//	}
//	return slow;
//}
//// 283
//void moveZeroes(vector<int>& nums) 
//{
//	int fast = 0;
//	int slow = 0;
//	while (fast < nums.size())
//	{
//		if (nums[fast] == 0)
//		{
//			fast++;
//		}
//		else
//		{
//			nums[slow++] = nums[fast++];
//		}
//	}
//	for (int i = slow; i < nums.size(); i++)
//	{
//		nums[i] = 0;
//	}
//}
////283
//void moveZeroes(vector<int>& nums)
//{
//	int fast = 0;
//	int slow = 0;
//	while (fast < nums.size())
//	{
//		if (nums[fast] == 0) fast++;
//		else swap(nums[slow++], nums[fast++]);
//	}
//}

//// 1217
//int minCostToMoveChips(vector<int>& position) {
//	int j = 0;
//	int o = 0;
//	for (int i = 0; i < position.size(); i++)
//	{
//		if (position[i] % 2 == 1) j++;
//		else o++;
//	}
//	return j > o ? o : j;
//
//}
//
//
//// 121
//int maxProfit(vector<int>& prices) {
//
//}

//int main()
//{
//	//vector<int> nums1 = { 1,2,3,0,0,0 };
//	//vector<int> nums2 = { 2,5,6 };
//	//int m = 3;
//	//int n = 3;
//	//merge(nums1, m, nums2, n);
//	//for (auto i : nums1) cout << i << " ";
//	//cout << endl;
//
//	//vector<int> nums = { 0,0,1,1,1,2,2,3,3,4 };
//	//int ret = removeDuplicates(nums);
//	//cout << ret << ", nums = [";
//	//for (int i = 0; i < ret; i++)
//	//{
//	//	
//	//	cout << nums[i] ;
//	//	if (i != ret - 1)
//	//	{
//	//		cout << ",";
//	//	}
//	//}
//
//	//cout << "]";
//
//	//vector<int> nums = { 0,1,2,2,3,0,4,2 };
//	//int val = 2;
//
//	//int ret = removeElement(nums,val);
//
//	//cout << ret << ", nums = [";
//	//for (int i = 0; i < ret; i++)
//	//{
//	//	
//	//	cout << nums[i] ;
//	//	if (i != ret - 1)
//	//	{
//	//		cout << ",";
//	//	}
//	//}
//	//cout << "]";
//
//
//
//	//vector<int> nums = { 0, 1, 0, 3, 12 };
//
//	//moveZeroes(nums);
//	//cout << "[";
//	//for (int i = 0; i < nums.size(); i++)
//	//{
//
//	//	cout << nums[i];
//	//	if (i != nums.size() - 1)
//	//	{
//	//		cout << ",";
//	//	}
//	//}
//	//cout << "]";
//
//	//return 0;
//}



