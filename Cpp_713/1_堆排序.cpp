#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <vector>
//
//// ����
//void adjust(vector<int>& v, int start, int end)
//{
//	int father = start; // ���׽ڵ�
//	int child = 2 * father + 1; // ����
//	while (child <= end) // ���Ӵ��ڣ�����Ҫ�жϺ��Ӻ͸����ĸ���
//	{
//		// ���ж��Һ����Ƿ���ڣ����ж����Һ����ĸ���
//		if (child + 1 <= end && v[child + 1] > v[child]) 
//		{
//			child++; // �Һ��Ӵ�
//		}
//		// ���Ӵ�childû�䣬�������ӣ��Һ��Ӵ��Ѿ���һ��
//		// �ж� ���ĺ��Ӻ͸����ĸ���
//		if (v[child] > v[father])
//		{
//			swap(v[child], v[father]);  // ����
//			father = child; // ��������ĺ��ӣ���Ϊ���ף��������±�����
//			child = 2 * father + 1;
//		}
//		else
//		{
//			// û����������ѭ����
//			break;
//		}
//	}
//}
//
//// ��С��
//void adjust1(vector<int>& v, int start, int end)
//{
//	int father = start; // ���׽ڵ�
//	int child = 2 * father + 1; // ����
//	while (child <= end) // ���Ӵ��ڣ�����Ҫ�жϺ��Ӻ͸����ĸ���
//	{
//		// ���ж��Һ����Ƿ���ڣ����ж����Һ����ĸ���
//		if (child + 1 <= end && v[child + 1] < v[child])
//		{
//			child++; // �Һ��Ӵ�
//		}
//		// ���Ӵ�childû�䣬�������ӣ��Һ��Ӵ��Ѿ���һ��
//		// �ж� ���ĺ��Ӻ͸����ĸ���
//		if (v[child] < v[father])
//		{
//			swap(v[child], v[father]);  // ����
//			father = child; // ��������ĺ��ӣ���Ϊ���ף��������±�����
//			child = 2 * father + 1;
//		}
//		else
//		{
//			// û����������ѭ����
//			break;
//		}
//	}
//}
//
//void heapSort(vector<int>& v)
//{
//	int n = v.size();
//	// ��ʼ�� ����
//	for (int i = n / 2 - 1; i >= 0; i--)
//	{
//		adjust1(v, i, n - 1);
//	}
//	// �ع�����
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
