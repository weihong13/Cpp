//#include<iostream>
//using namespace std;
//#include<vector>
////
//// ��ֵ����
////
//// vector& operator=(const vector& vec); // ���صȺŲ�����
//// assign(beg, end);                     // ��[beg, end)�����е����ݿ�����ֵ������
//// assign(n, elem);                      // ��n��elem������ֵ������
//
//
//void printVecror(vector<int>& v1)
//{
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1(10, 13);
//
//	// ���صȺŲ�����
//	vector<int> v2;
//	v2 = v1;
//	printVecror(v2);
//
//	// ��[beg, end)�����е����ݿ�����ֵ������
//	vector<int> v3;
//	v3.assign(v2.begin(), v2.end());
//	printVecror(v3);
//
//	// ��n��elem������ֵ������
//	vector<int> v4(10, 11);
//	printVecror(v4);
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}