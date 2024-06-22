#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

// ѡ������
void SelectSort(vector<int>& nums)
{
	int n = nums.size();
	for (int i = 0; i < n; i++) // ��ʾѡ��n-1��
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

// ���ҷ�ֵ--���ַ�
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
��һ������Ϊn�ķǽ������飬����[1,2,3,4,5]������������ת������һ�������ʼ����
�ɸ�Ԫ�ذᵽ�����ĩβ�����һ����ת���飬��������[3,4,5,1,2]������[4,5,1,2,3]��
���ġ����ʣ���������һ����ת���飬�������е���Сֵ��
*/
int findMin(vector<int>& nums)
{
	int left = 0;
	int right = nums.size() - 1;
	while (left < right) {
		int mid = (right - left) / 2 + left;//��԰�ȫ ����������
		if (nums[mid] > nums[right])
		{
			//��Ӧ�м�����1������Сֵ���м����Ҳ������߽�
			left = mid + 1;
		}
		else if (nums[mid] < nums[right])
		{
			//��Ӧ�м����� 2 ���� ��Сֵ���м�����࣬�����м��п�������
			right = mid;
		}
		else
		{	//�м����ұ߽���ͬ ����ֵͬ ɾ��һ����Ӱ����Сֵ�Ĳ���
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