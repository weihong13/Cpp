#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <vector>


/*
	����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������� ��ΪĿ��ֵ target ���� ����������
	���������ǵ������±ꡣ����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ�������ͬһ��Ԫ���ڴ��ﲻ���ظ����֡�
	����԰�����˳�򷵻ش𰸡�
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
