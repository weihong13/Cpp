//#include <iostream>
//using namespace std;
//
//
////
//// ģ�尸����ʹ�ú���ģ���char��int  ���͵������������
//// �����㷨��ѡ������
////
//
//template <typename T>
//void mySwap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//
//template <typename T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		} 
//		if (max != i)
//		{
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
//template <typename T>
//void myPrint(T arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	char str[] = "bcadfehg";
//
//	int len = sizeof(str) / sizeof(str[0]);
//	mySort(str, len);
//	myPrint(str,len);
//
//	int arr[] = { 1,3,4,5,2,6,9,8,7,10 };
//	int len1 = sizeof(arr) / sizeof(arr[0]);
//	mySort(arr, len1);
//	myPrint(arr, len1);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}