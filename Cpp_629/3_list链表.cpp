//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <list>
//
//using namespace std;
//
//
///*
//* ����
//* 	list<T> lst; //list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ!
//	list(beg,end); //���캯����[beg, end)�����е�Ԫ�ؿ���������
//	list(n,elem);  //���캯����n��elem����������
//	list(const list &lst); //�������캯����
//
// ��ֵ�뽻��
//
//	assign(beg,end); //��[beg,end)�����е����ݿ�����ֵ������
//	assign(n, elem); //��n��elem������ֵ������
//	list& operator=(const list &lst); //���صȺŲ�����
//	swap(lst);//��lst�뱾���Ԫ�ػ�����
//
//��С����
//	size();  //����������Ԫ�صĸ���
//	empty(); //�ж������Ƿ�Ϊ��
//	resize(num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
//				 //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//	resize(num,elem);  //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
//						//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//
// ����ɾ��
//
//	push_back(elem);//������β������һ��Ԫ��
//	pop_back();//ɾ�����������һ��Ԫ��
//	push_front(elem);//��������ͷ����һ��Ԫ��
//	pop_front();//��������ͷ�Ƴ���һ��Ԫ��
//	insert(pos,elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ��
//	insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
//	insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//	clear();//�Ƴ���������������
//	erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ��,
//	erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//	remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�
//
//���ݴ�ȡ
//	front(); // ���ص�һ��Ԫ�ء�
//	back();  // �������һ��Ԫ��
//
//��ת������
//	reverse();  //��ת����
//	sort();     //��������
//*/
//
//void test01()
//{
//
//	// Ĭ�Ϲ���
//	list<int> l;
//
//	// list(n, elem);  //���캯����n��elem����������
//	list<int> l1(5, 1);
//
//	// list(beg,end); //���캯����[beg, end)�����е�Ԫ�ؿ���������
//	list<int> l2(l1.begin(), l1.end());
//
//	// list(const list & lst); //�������캯����
//	list<int> l3(l2);
//}
//void test02()
//{
//	// Ĭ�Ϲ���
//	list<int> l,l1,l2;
//
//	l1.assign(8, 2);
//	// assign(beg, end); //��[beg,end)�����е����ݿ�����ֵ������
//	l.assign(l1.begin(), l1.end());
//
//	// assign(n, elem); //��n��elem������ֵ������
//	l.assign(5, 10);
//
//	// list& operator=(const list & lst); //���صȺŲ�����
//	l2 = l;
//	// swap(lst);//��lst�뱾���Ԫ�ػ�����
//
//	l.swap(l2);
//}
//
//void test03()
//{
//	// Ĭ�Ϲ���
//	list<int> l;
//	l.assign(10, 5);
//
//	// size();  //����������Ԫ�صĸ���
//	l.size();
//
//	// empty(); //�ж������Ƿ�Ϊ��
//	l.empty();
//	// resize(num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
//				 //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//	
//	l.resize(15);
//	l.resize(10);
//
//	// resize(num, elem);  //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
//						//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//	l.resize(5, 99);
//	l.resize(10);
//}
//
//void test04()
//{
//	// Ĭ�Ϲ���
//	list<int> l;
//
//	// push_back(elem);//������β������һ��Ԫ��
//	l.push_back(1);
//	l.push_back(2);
//	l.push_back(3);
//
//	// pop_back();//ɾ�����������һ��Ԫ��
//	l.pop_back();
//
//	// push_front(elem);//��������ͷ����һ��Ԫ��
//	l.push_front(3);
//	l.push_front(2);
//	l.push_front(1);
//	
//	// pop_front();//��������ͷ�Ƴ���һ��Ԫ��
//	l.pop_front();
//
//	// insert(pos, elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ��
//	list<int>::iterator it = l.begin();
//	l.insert(++it, 5);
//	
//	// insert(pos, n, elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
//	l.insert(it, 10, 100);
//
//	// insert(pos, beg, end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//	l.insert(it, l.begin(), l.end());
//	
//
//	// erase(beg, end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ��,
//	l.erase(it, ++it);
//
//	// erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//	l.erase(it);
//	// remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�
//	l.remove(100);
//
//	// clear();//�Ƴ���������������
//	l.clear();
//}
//
////��ת������
//// reverse();  //��ת����
//// sort();     //��������
//void test05()
//{
//	// Ĭ�Ϲ���
//	list<int> l;
//
//	l.push_back(2);
//	l.push_back(4);
//	l.push_back(3);
//	l.push_back(1);
//	l.push_back(7);
//	l.push_back(8);
//	l.push_back(6);
//	l.push_back(9);
//	l.push_back(5);
//
//	// reverse();  //��ת����
//	l.reverse();
//
//	// sort();     //��������
//	l.sort();
//}
//
//int main()
//{
//
//
//	
//
//	return 0;
//}