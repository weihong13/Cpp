//#include<iostream>
//using namespace std;
//#include<deque>
//
////
//// deque����ɾ������
//// 
//// ���˲������:
//// push back(elem);    // ������β�����һ������
//// push front(elem);   // ������ͷ������һ������
//// pop_back();         // ɾ���������һ������
//// pop_front();        // ɾ��������һ������
//
//
//
//
//// ָ��λ�ò���:
//// insert(pos, elem);     // ��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
//// insert(pos, n, elem);  // ��posλ�ò���n��elem���ݣ��޷���ֵ��
//// insert(pos, beg, end); // ��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//// clear();               // �����������������
//// erase(beg, end);       //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//// erase(pos);            //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//// 
//
//void printDeque(deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		// const_iterator ֻ���ĵ������������޸�
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//// ���˲������:
//// push back(elem);    // ������β�����һ������
//// push front(elem);   // ������ͷ������һ������
//// pop_back();         // ɾ���������һ������
//// pop_front();        // ɾ��������һ������
//
//void test01()
//{
//	//Ĭ�Ϲ���
//	deque<int> d1;
//	// ͷ��
//	d1.push_front(3);
//	d1.push_front(2);
//	d1.push_front(1);
//	// β��
//	d1.push_back(4);
//	d1.push_back(5);
//	printDeque(d1);
//
//	// ͷɾ
//	d1.pop_front();
//	// βɾ
//	d1.pop_back();
//	printDeque(d1);
//
//}
//
//// ָ��λ�ò���:
//// insert(pos, elem);     // ��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
//// insert(pos, n, elem);  // ��posλ�ò���n��elem���ݣ��޷���ֵ��
//// insert(pos, beg, end); // ��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//// erase(beg, end);       //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//// erase(pos);            //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//// clear();               // �����������������
//void test02()
//{
//	deque<int> d2;
//	// insert(pos, elem);     
//	// ��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
//	d2.insert(d2.begin(), 1);
//	printDeque(d2);
//
//	// insert(pos, n, elem);  
//	// ��posλ�ò���n��elem���ݣ��޷���ֵ��
//	d2.insert(d2.begin() + 1, 3, 13);
//	printDeque(d2);
//
//	// insert(pos, beg, end); 
//	// ��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//	d2.insert(d2.begin() + 1, d2.begin(), d2.end());
//	printDeque(d2);
//
//	// erase(beg, end);       
//	//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//	d2.erase(d2.begin() + 1, d2.begin() + 5);
//	printDeque(d2);
//
//
//	// erase(pos);            
//	//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//	d2.erase(d2.begin());
//	printDeque(d2);
//
//	// clear();               
//	// �����������������
//	d2.clear();
//	printDeque(d2);
//}
//int main()
//{
//	// test01();
//	test02();
//
//	system("pause");
//	return 0;
//}