//#include<iostream>
//using namespace std;
//#include<vector>
////
//// vector��������
//// 
//// ʵ������������Ԫ�ػ���������Ҳ������
//// swap(vec)
//// 
//
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
//	// ����
//	vector<int> v1(10, 11);
//	vector<int> v2(5, 12);
//
//	
//	cout << "v1��������" << v1.capacity() << endl;
//	cout << "v2��������" << v2.capacity() << endl;
//	printVecror(v1);
//	printVecror(v2);
//	cout << "-----����-----"  << endl;
//	v2.swap(v1);
//	cout << "v1��������" << v1.capacity() << endl;
//	cout << "v2��������" << v2.capacity() << endl;
//	
//}
//
//// swap ʹ�ü���
//// ʹ��swap�����ڴ�
//void test02()
//{
//	vector<int> v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	// ϵͳ�����ڴ�ʱ�����10w��һЩ��
//	cout << "v��������" << v.capacity() << endl; // 138255
//	cout << "v�Ĵ�С��" << v.size() << endl;     // 100000
//
//	// ʹ��resize �ı�������С�����С���Ϊ3 ������������
//	v.resize(3);
//	cout << "v��������" << v.capacity() << endl; // 138255
//	cout << "v�Ĵ�С��" << v.size() << endl;     // 3
//
//	vector<int>(v).swap(v);
//	// ��Ϊ��������  vector<int>(v)  ��  .swap(v)
//	// vector<int>(v) 
//	// �������󣬻�����Ѵ��ڵĶ����С��3����
//	// ���ڴ��д���һ��һģһ���Ķ��󣬵���û�о��������
//	// �ڱ�����������ϵͳ�Զ�����
//	// 
//	// .swap(v)
//	// �����������v���н�����������Ϊ138255 ���� ��������
//	// ����Ϊ3 �� ���� v 
//	// �����������ڱ����������󱻻���
//	// v ��������СΪ 3
//	//
//	cout << "v��������" << v.capacity() << endl; // 3
//	cout << "v�Ĵ�С��" << v.size() << endl;     // 3
//}
//
//int main()
//{
//	// test01();
//	test02();
//	system("pause");
//	return 0;
//}