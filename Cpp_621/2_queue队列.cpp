#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<queue>

//int main()
//{
//	queue<int> q;
//	q.empty(); // �ж��Ƿ�Ϊ�գ��շ��� 1��
//
//	q.front(); // �õ�����ͷ�����ݣ�����Ҫע�� ������������
//
//	return 0;
//}

// oj-3203-ΧȦ����

/*
�У��������Χ��һȦ���ӵڣ����˿�ʼ�����������ڣ���˳��У�
Ȼ��ӳ��е���һ���˿�ʼ�����������ڣ�����ֳ��У�������˷��������е���ȫ������Ϊֹ��
�����˵ı�ŷֱ�Ϊ1��2������n����ӡ���е�˳��
*/

//int main()
//{
//	int n = 0;
//	int m = 0;
//	cin >> n;
//	cin >> m;
//
//	queue<int> q;
//	for (int i = 1; i <= n; i++)
//	{
//		q.push(i);
//	}
//	int i = 0;
//	while (!q.empty())
//	{
//		i++;
//		if (i == m)
//		{
//			cout << q.front() << " ";
//			i = 0;
//		}
//		else
//		{
//			q.push(q.front());
//		}
//		q.pop();
//	}
//
//	return 0;
//}


//// ������
//#include<time.h>
//#include<stdlib.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int num = rand()%100+1;
//	int gass = 0;
//	do
//	{
//		cout << "��������µ����֣�>(1~100)";
//		cin >> gass;
//		if (gass > num)
//		{
//			cout << "�´���" << endl;
//		}
//		else if (gass < num)
//		{
//			cout << "��С��" << endl;
//		}
//	}
//	while (gass != num);
//	cout << "�¶��ˣ�������ǣ�" << num << endl;
//
//	return 0;
//}



// ð������
void BubbleSort(vector<int>& nums)
{
	int n = nums.size();
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		bool flag = 0;
		for (int j = 0; j < n-i-1; j++)
		{
			if (nums[j] > nums[j+1])
			{
				flag = 1;
				swap(nums[j], nums[j + 1]);
			}
		}
		if (flag == 0)
		{
			return;
		}
	}
}

//int main()
//{
//	vector<int> nums = { 1,43,5,3,7,6,9,11,12,8 };
//
//	BubbleSort(nums);
//	
//	for (auto i : nums) {
//		cout << i << " ";
//	}
//
//	return 0;
//}