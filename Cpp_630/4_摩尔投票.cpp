#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <vector>

// �� ������ ĳ�����ĳ��ִ��� ���������������

// Ħ��ͶƱ���������Կ���

int func(const vector<int>& nums)
{
	int key = nums[0];
	int count = 1;

	int n = nums.size();
	for (int i = 1; i < n; i++)
	{
		// ����ģ��
		if (nums[i] == key)
		{
			count++;
		}
		else
		{
			count--;
		}

		if (count == 0)
		{
			key = nums[i + 1];
		}
	}
	return key;
}

int main()
{
	vector<int> nums = { 2,3,1,3,3,2,3 };

	int ret = func(nums);

	cout << ret << endl;
}