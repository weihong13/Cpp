#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <vector>
//
//// 最大堆
//void adjust(vector<int>& v, int start, int end)
//{
//	int father = start; // 父亲节点
//	int child = 2 * father + 1; // 左孩子
//	while (child <= end) // 孩子存在，才需要判断孩子和父亲哪个大
//	{
//		// 先判断右孩子是否存在，再判断左右孩子哪个大
//		if (child + 1 <= end && v[child + 1] > v[child]) 
//		{
//			child++; // 右孩子大
//		}
//		// 左孩子大，child没变，还是左孩子，右孩子大，已经加一了
//		// 判断 最大的孩子和父亲哪个大
//		if (v[child] > v[father])
//		{
//			swap(v[child], v[father]);  // 交换
//			father = child; // 将交换后的孩子，设为父亲，接着向下遍历。
//			child = 2 * father + 1;
//		}
//		else
//		{
//			// 没交换，跳出循环。
//			break;
//		}
//	}
//}
//
//// 最小堆
//void adjust1(vector<int>& v, int start, int end)
//{
//	int father = start; // 父亲节点
//	int child = 2 * father + 1; // 左孩子
//	while (child <= end) // 孩子存在，才需要判断孩子和父亲哪个大
//	{
//		// 先判断右孩子是否存在，再判断左右孩子哪个大
//		if (child + 1 <= end && v[child + 1] < v[child])
//		{
//			child++; // 右孩子大
//		}
//		// 左孩子大，child没变，还是左孩子，右孩子大，已经加一了
//		// 判断 最大的孩子和父亲哪个大
//		if (v[child] < v[father])
//		{
//			swap(v[child], v[father]);  // 交换
//			father = child; // 将交换后的孩子，设为父亲，接着向下遍历。
//			child = 2 * father + 1;
//		}
//		else
//		{
//			// 没交换，跳出循环。
//			break;
//		}
//	}
//}
//
//void heapSort(vector<int>& v)
//{
//	int n = v.size();
//	// 初始化 最大堆
//	for (int i = n / 2 - 1; i >= 0; i--)
//	{
//		adjust1(v, i, n - 1);
//	}
//	// 重构最大堆
//	for (int j = n - 1; j >= 1; j--)
//	{
//		swap(v[0], v[j]);
//		adjust1(v, 0, j - 1);
//	}
//
//}
//
//int main()
//{
//	vector<int> v{ 2,4,7,110,90,8,5,80,70,19,60 };
//	heapSort(v);
//
//	for (auto i : v)
//	{
//		cout << i << " ";
//	}
//
//	return 0;
//}
