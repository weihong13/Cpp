//#include<iostream>
//using namespace std;
//#include<vector>
////
//// vector��ȡ����
//// 
//// at(int idx);  // ��������idx��ָ������
//// operator[];   // ��������idx��ָ������, [] ����
//// front();      // ���������е�һ������Ԫ��
//// back();       // �������������һ������Ԫ��
//// 
//// 
//
//
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
//	vector<int> v1;
//	// β��
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	cout << v1.capacity() << endl;
//	printVecror(v1);
//
//	// at(int idx);  // ��������idx��ָ������
//	cout << "v1.at(2)��" << v1.at(2) << endl;
//	// operator[];   // ��������idx��ָ������, [] ����
//	cout << "v1[2]��   " << v1[2] << endl;
//	// front();      // ���������е�һ������Ԫ��
//	cout << "��һ��Ԫ��Ϊ��" << v1.front() << endl;
//	// back();       // �������������һ������Ԫ��
//	cout << "���һ��Ԫ��Ϊ��" << v1.back() << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}