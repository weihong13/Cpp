//#include<iostream>
//using namespace std;

//
// ������Ĭ�ϲ���
//

// û�����������Ĭ��ֵ�������˾��ô����
// ���ĳ��λ�õ��β�����Ĭ�ϲ�������ô������������βζ�������Ĭ�ϲ���
// ��������д��Ĭ��ֵ���ں���ʵ��ʱ����дĬ�ϲ�����������ʵ����ֻ����һ��дĬ�ϲ���

//int Add(int a = 10, int b = 20, int c = 30) {
//	return a + b + c;
//}
//
//int main() {
//
//	int sum = Add(20);
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}



//
// ����ռλ����
// ռλ������������Ĭ��ֵ
//

//void test(int a, int = 10) {
//	;
//}
//int main() {
//
//	test(10, 10);
//
//	system("pause");
//	return 0;
//}


//
// ����������
// ������������ͬ��ͨ����ͬ�Ĳ��������ò�ͬ�ĺ���
// 
// ������������
// ͬһ������
// ����������ͬ
// ���������� ���Ͳ�ͬ �� ������ͬ �� ˳��ͬ
// 
// �����ķ���ֵ������Ϊ���ص����� int func �� void func // err
// 

//void func() {
//	cout << "�޲�����func" << endl;
//}
//void func(int a) {
//	cout << "�в�����func" << endl;
//}
//int main() {
//
//	func(1);
//	system("pause");
//	return 0;
//}

//
// ������Ϊ�������� 
//

//void func() {
//	cout << "�޲�����func" << endl;
//}
//void func(int& a) {
//	cout << "�в�����func" << endl;
//}
//void func(const int& a) {
//	cout << "��const������func" << endl;
//}
//int main() {
//
//	int a = 10;
//	func(1);
//	system("pause");
//	return 0;
//}



//// ������������Ĭ�ϲ��� // ��û������һ��
//void func(int a) {
//	cout << "func(int a)" << endl;
//}
//void func(int a = 10) {
//	cout << "func(int a = 10)" << endl;
//}
//
//int main() {
//
//	int a = 10;
//	func(a);
//	system("pause");
//	return 0;
//}