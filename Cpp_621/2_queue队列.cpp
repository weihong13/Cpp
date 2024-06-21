#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<queue>

//int main()
//{
//	queue<int> q;
//	q.empty(); // 判断是否为空，空返回 1；
//
//	q.front(); // 拿到队列头的数据，但是要注意 队列中有数据
//
//	return 0;
//}

// oj-3203-围圈报数

/*
有ｎ个人依次围成一圈，从第１个人开始报数，数到第ｍ个人出列，
然后从出列的下一个人开始报数，数到第ｍ个人又出列，…，如此反复到所有的人全部出列为止。
设ｎ个人的编号分别为1，2，…，n，打印出列的顺序。
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


//// 猜数字
//#include<time.h>
//#include<stdlib.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int num = rand()%100+1;
//	int gass = 0;
//	do
//	{
//		cout << "请输入你猜的数字：>(1~100)";
//		cin >> gass;
//		if (gass > num)
//		{
//			cout << "猜大了" << endl;
//		}
//		else if (gass < num)
//		{
//			cout << "猜小了" << endl;
//		}
//	}
//	while (gass != num);
//	cout << "猜对了，随机数是：" << num << endl;
//
//	return 0;
//}



// 冒泡排序
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