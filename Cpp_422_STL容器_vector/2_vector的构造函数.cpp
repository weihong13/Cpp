//#include<iostream>
//using namespace std;
//#include<vector>
//
////
//// vector�Ĺ��캯��
//// 
//// vector<T> v;                // ����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//// vector(v.begin()��v.end()); // ��v[begin(), end())�����е�Ԫ�ؿ���������,ǰ�պ�
//// vector(n, elem);            // ���캯����n��elem����������
//// vector(const vector& vec);  // �������캯����
////
////
//
//void printVecror(vector<int> &v1)
//{
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//// vector ���캯��
//void test01()
//{
//	vector<int> v1; // Ĭ���޲ι���
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i+1);
//	}
//	printVecror(v1);
//
//	// ͨ��������й���
//	vector<int> v2(v1.begin(), v1.end());
//	printVecror(v2);
//
//	// ���캯��:n��elem
//	vector<int> v3(10, 13);
//	printVecror(v3);
//
//
//	// �������캯����
//	vector<int> v4(v3);
//	printVecror(v4);
//
//}
//
//int main() 
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}