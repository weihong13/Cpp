//#include<iostream>
//#include<string>
//using namespace std;
//
//// 
//// �ַ������Һ��滻
//// find��rfind��  replace
//// find: �������Ҳ���
//// rfind�� �����������
//// 
//// 
//// replace
//// string& replace(int pos,int n,const string& str);  �滻��pos��ʼn���ַ�Ϊ�ַ���str
//// string& replace(int pos, int n, const char* s); �滻��pos��ʼ��n���ַ�Ϊ�ַ���s
////
////
////
//
//
//// ����
//void test01()
//{
//	string str1 = "weihong";
//
//	// find���ң��������Ҳ��ң��ҵ��ˣ������±�λ�ã�û�ҵ�����-1��
//	int ret = str1.find("ho1");
//	cout << ret << endl;
//	// rfind ����������ң��ҵ��ˣ������±�λ�ã�û�ҵ�����-1��
//	ret = str1.rfind("ei");
//	cout << ret << endl;
//
//	string str2 = "weihongwei";
//	ret = str2.find("ei");
//	cout << ret << endl; // 1
//	ret = str2.rfind("ei");
//	cout << ret << endl; // 8 
//
//}
//
//// �滻
//void test02()
//{
//	string str1 = "weihong";
//	// �滻��pos��ʼn���ַ�Ϊ�ַ���str
//	// ��e��ʼ3���ַ� eih �滻Ϊ xxxxx
//	str1.replace(1, 3, "xxxxx");
//	cout << str1 << endl;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}