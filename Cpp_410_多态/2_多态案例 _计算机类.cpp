//#include <iostream>
//#include <string>
//using namespace std;
//
////
//// ��ͨд���Ͷ�̬�ֱ�ʵ�� ������
//// 
//// ��̬�ŵ�
//// ������֯�ṹ����
//// �ɶ���ǿ
//// ����ǰ�ںͺ��ڵ���չ��ά��
//// 
////
//
//// ����ʵ��
//
//class Calculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return num1 + num2;
//		}
//		else if (oper == "-")
//		{
//			return num1 - num2;
//		}
//		else if (oper == "*")
//		{
//			return num1 * num2;
//		}
//		return 1;
//		// ����չ�µĹ��ܣ���Ҫ�޸�Դ��
//		// ����ʵ�Ŀ��������У��ᳫ����ԭ��
//		// ����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
//
//	}
//	int num1;
//	int num2;
//
//};
//
//
//// ��ͨ��������
//void test01()
//{
//	Calculator cul;
//	cul.num1 = 10;
//	cul.num2 = 10;
//	cout << "�ӷ�" << cul.getResult("+") << endl;
//}
//
//
//// ʹ�ö�̬ʵ�ּ�����
//// ʵ�ּ�����������
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	
//	int num1;
//	int num2;
//};
//
//// �ӷ���
//class Add :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return num1 + num2;
//	}
//};
//// ������
//class Sub :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return num1 - num2;
//	}
//};
//
//// �˷���
//class Mul :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return num1 * num2;
//	}
//};
//
//// ��̬ʵ�ֵļ��������
//void test02()
//{
//	// ��̬��ʹ�÷���
//	// ����ָ������� ִ�����ຯ��
//
//	// �ӷ�
//	// ʹ�� AbstractCalculator ����ָ�룬����һ������Add �Ķ���
//	AbstractCalculator* abc = new Add;
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << "�ӷ� " << abc->getResult() << endl;
//	delete abc; // �ͷ��ڴ�
//
//	// ����
//	abc = new Sub;
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << "���� " << abc->getResult() << endl;
//	delete abc;
//
//}
//
//int main()
//{
//	// test01();
//	test02();
//	system("pause");
//	return 0;
//}