#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//
// ������ִ�е�ʱ�򣬻Ὺ��һ�麯��ջ����ִ�оͲ����٣�
// ����ջ���(�������ֲ�����)
// ��������������ջ�����٣�
// 
// 
// ������ֵ�᷵��һ����a��ͬ�Ķ��󣬵���û�����֣���������
//

//int fun()
//{
//	int a = 2;
//	return a;
//
//}
//int& fun1() // ����ֵ���������͡����صľ���a�Լ�
//{
//	int a = 10;
//	return a;
//}
//
//int main()
//{
//	cout << fun() << endl; // ����ķ���ֵ���� fun�е�a������һ����������
//
//	// ʹ�����ý��գ�����һ��������a1����fun1�е�a����һ��ʱ���a���٣�a1Ҳ��û�ˡ�
//	int& a1 = fun1();   
//	cout << a1 << endl; // 10
//	cout << a1 << endl; // ���ֵ(���ٵ�ʱ�䲻һ��)
//	cout << a1 << endl; // ���ֵ
//	cout << a1 << endl; // ���ֵ
//
//	int a2 = fun1();    // ʹ�ñ������գ��൱���ָ�����һ�ݣ�a2�������٣�fun1�ķ���ֵ�ᱻ����
//	cout << a2 << endl; // 10
//	cout << a2 << endl; // 10
//	cout << a2 << endl; // 10
//	cout << a2 << endl; // 10
//
//	return 0;
//}


//int& test01()
//{
//	static int a = 2;
//	return a;
//
//}
//
//
//int main()
//{
//	
//	// ʹ�����ý��գ�����һ��������a1����fun1�е�a����һ��ʱ���a���٣�a1Ҳ��û�ˡ�
//	// ��ʹ���� static ��չ����������
//	int& a1 = test01();
//	cout << a1 << endl; // 10
//	cout << a1 << endl; // 10
//	cout << a1 << endl; // 10
//	cout << a1 << endl; // 10
//
//	return 0;
//}


/*
	��ֵ��ֵ��
		��ֵ�������֣��ܱ��޸�
		��ֵ��û���֣����ܱ��޸�
*/

//int& test01()
//{
//	int a = 2;
//	return a;
//
//}
//
//int test02()
//{
//	int a = 3;
//	return a;
//
//}
//
//
//int main()
//{
//	
//
//	return 0;
//}

// // ���������� Ĭ�ϲ���
//void fun(int a = 0, int b = 10, int c = 20)
//{
//	cout << a << " " << b << " " << c << endl;
//}
//void fun1(int a = 10); // ����ʱ���˲���Ĭ��ֵ��ʵ�ֵ�ʱ��Ͳ��ܸ�Ĭ��ֵ��
//int main()
//{
//	fun();
//	fun1();
//
//}
//
//void fun1(int a) // ����ʱ���˲���Ĭ��ֵ��ʵ�ֵ�ʱ��Ͳ��ܸ�Ĭ��ֵ��
//{
//	cout << a << endl;
//}


// lc /88
#include<vector>
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int max = m > n ? m : n;
	int i = 0;
	int j = 0;
	while (i < max || j < max)
	{
		if (nums1[i] <= nums2[j])
		{
			
		}
	}
}

int main()
{
	vector<int> nums1 = { 1,2,3,0,0,0 };
	vector<int> nums2 = { 2,5,6};
	int m = 3;
	int n = 3;

	// merge(nums1, m, nums2, n);

	cout << *nums1.begin();

	return 0;
}