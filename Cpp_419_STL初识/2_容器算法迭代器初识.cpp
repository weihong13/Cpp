//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////
//// �������㷨����������ʶ
//// 
//// STL����õ�������Vector���������Ϊ���� 
//// 
//// vector������������������ͣ���ʵ�ֲ��롢�����Ȳ���
////
//
//
//
//void myIntPrint(int val)
//{
//	cout << val << endl;
//}
//
//// vector�������������������
//void test01()
//{
//	// ������һ��vector����������
//	vector<int> arr;
//
//	// �������в���Ԫ��
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//	arr.push_back(40);
//	arr.push_back(50);
//
//	//// ͨ�����������������е�����
//	//vector<int>::iterator itBegin = arr.begin(); // ��ʼ��������ָ�������еĵ�һ��Ԫ��
//	//vector<int>::iterator itEnd = arr.end();     // ���������� ָ�����������һ��Ԫ�ص���һ��λ��
//	//// ����
//	//for (itBegin; itBegin != itEnd; itBegin++)
//	//{
//	//	cout << *itBegin << endl;
//	//}
//
//	// ͨ���㷨--STL�ṩ�����㷨(for_each)��ͷ�ļ�<algorithm>
//	// for_each(_InIt _First, _InIt _Last, _Fn _Func)
//	// ��for_each�ڲ���Ҳ��һ��forѭ�����Ὣfirst�����ݽ����ô���_Func
//	for_each(arr.begin(), arr.end(), myIntPrint);
//
//
//}
//void myStrPrint(string str)
//{
//	cout << str << endl;
//}
//
//void test02()
//{
//	vector<string> str;
//
//	str.push_back("weihong1");
//	str.push_back("weihong2");
//	str.push_back("weihong3");
//	str.push_back("weihong4");
//	str.push_back("weihong5");
//
//	for_each(str.begin(), str.end(), myStrPrint);
//}
//
//
//int main() 
//{
//	test02();
//
//	system("pause");
//	return 0;
//}
//
//
