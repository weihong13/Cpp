#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <vector>

// 查找数组中的奇数偶数
void func1(vector<int>& v)
{
	int n = v.size();
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (v[i] % 2 == 0)
		{
			swap(v[i], v[index++]);
		}
	}

}
// 第k个最大的
void adjust(vector<int>& v, int start, int end)
{
	int father = start; // 父亲节点
	int child = 2 * father + 1; // 左孩子
	while (child <= end) // 孩子存在，才需要判断孩子和父亲哪个大
	{
		// 先判断右孩子是否存在，再判断左右孩子哪个大
		if (child + 1 <= end && v[child + 1] > v[child])
		{
			child++; // 右孩子大
		}
		// 左孩子大，child没变，还是左孩子，右孩子大，已经加一了
		// 判断 最大的孩子和父亲哪个大
		if (v[child] > v[father])
		{
			swap(v[child], v[father]);  // 交换
			father = child; // 将交换后的孩子，设为父亲，接着向下遍历。
			child = 2 * father + 1;
		}
		else
		{
			// 没交换，跳出循环。
			break;
		}
	}
}

int heapSort(vector<int>& v,int k)
{
	int n = v.size();
	// 初始化 最大堆
	for (int i = n / 2 - 1; i >= 0; i--)
	{
		adjust(v, i, n - 1);
	}
	// 重构最大堆
	for (int j = n - 1; j >= k; j--)
	{
		swap(v[0], v[j]);
		adjust(v, 0, j - 1);
	}
	return v[n-k];

}



// 三色棋--中间那个做基准值，小于基准值的往前面放，大于基准值的往后面放
void func2(vector<int>& v)
{
	int n = v.size();
	int start = -1;
	int end = v.size();
	int index = 0;
	while (index < end)
	{
		if (v[index] < 1) // 小于基准值
		{
			swap(v[++start],v[index++]);
		}
		else if (v[index] == 1) // 等于基准值
		{
			index++;
		}
		else // 大于基准值
		{
			swap(v[index], v[--end]);
		}
	}


}
int main()
{
	vector<int> v{ 0,1,2,1,2,0,1,2,0,2,2,0,0,1,0,1 };
	
	func2(v);

	int n = v.size();
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	

	

	return 0;
}