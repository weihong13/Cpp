#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <vector>

// ���������е�����ż��
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
// ��k������
void adjust(vector<int>& v, int start, int end)
{
	int father = start; // ���׽ڵ�
	int child = 2 * father + 1; // ����
	while (child <= end) // ���Ӵ��ڣ�����Ҫ�жϺ��Ӻ͸����ĸ���
	{
		// ���ж��Һ����Ƿ���ڣ����ж����Һ����ĸ���
		if (child + 1 <= end && v[child + 1] > v[child])
		{
			child++; // �Һ��Ӵ�
		}
		// ���Ӵ�childû�䣬�������ӣ��Һ��Ӵ��Ѿ���һ��
		// �ж� ���ĺ��Ӻ͸����ĸ���
		if (v[child] > v[father])
		{
			swap(v[child], v[father]);  // ����
			father = child; // ��������ĺ��ӣ���Ϊ���ף��������±�����
			child = 2 * father + 1;
		}
		else
		{
			// û����������ѭ����
			break;
		}
	}
}

int heapSort(vector<int>& v,int k)
{
	int n = v.size();
	// ��ʼ�� ����
	for (int i = n / 2 - 1; i >= 0; i--)
	{
		adjust(v, i, n - 1);
	}
	// �ع�����
	for (int j = n - 1; j >= k; j--)
	{
		swap(v[0], v[j]);
		adjust(v, 0, j - 1);
	}
	return v[n-k];

}



// ��ɫ��--�м��Ǹ�����׼ֵ��С�ڻ�׼ֵ����ǰ��ţ����ڻ�׼ֵ���������
void func2(vector<int>& v)
{
	int n = v.size();
	int start = -1;
	int end = v.size();
	int index = 0;
	while (index < end)
	{
		if (v[index] < 1) // С�ڻ�׼ֵ
		{
			swap(v[++start],v[index++]);
		}
		else if (v[index] == 1) // ���ڻ�׼ֵ
		{
			index++;
		}
		else // ���ڻ�׼ֵ
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