//#include<iostream>
//using namespace std;
//#include<vector>
////
//// ������С����
//// 
//// 
//// empty();         // �ж������Ƿ�Ϊ��
//// capacity();      // ����������
//// size();          // ����������Ԫ�صĸ���
//// resize(int num); // ����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
////					// ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//// resize(int num, elem);// ����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
////                       // ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
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
//	// �ж������Ƿ�Ϊ��
//	vector<int> v1;
//	cout << v1.empty() << endl;
//	v1.assign(10, 11);
//	cout << v1.empty() << endl;
//
//	// ���������� capacity();
//	cout << v1.capacity() << endl;
//	// size();   // ����������Ԫ�صĸ���
//	cout << v1.size() << endl;
//
//	// resize(int num);
//	// ����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ0�����λ�á�
//    // ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//	v1.resize(12);
//	cout << v1.capacity() << endl;
//	printVecror(v1);
//	v1.resize(8);
//	cout << v1.capacity() << endl;
//	cout << v1.size() << endl;
//	printVecror(v1);
//
//	// resize(int num, elem);
//	// ����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
//    // ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//	v1.resize(12, 9);
//	cout << v1.capacity() << endl;
//	cout << v1.size() << endl;
//	printVecror(v1);
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}