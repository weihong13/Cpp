//#include <iostream>
//using namespace std;
//
//// ������Ʒ�����ȡ���
//// ���̣� ��ˮ�����ݡ����뱭�ӡ����븨��
//
//
//// ������Ʒ������
//class AbstractDrinking
//{
//public:
//	// ��ˮ
//	virtual void Boil() = 0;
//
//	// ����
//	virtual void Brew() = 0;
//
//	// ���뱭��
//	virtual void PourInCup() = 0;
//
//	// ��������
//	virtual void PutSomething() = 0;
//
//	// ������Ʒ
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//
//};
//
//
//// ������
//class Tea : public AbstractDrinking
//{
//public:
//	// ��ˮ
//	virtual void Boil()
//	{
//		cout << "�տ�ˮ--ɽȪˮ" << endl;
//	}
//
//	// ����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	// ���뱭��
//	virtual void PourInCup() 
//	{
//		cout << "������" << endl;
//	}
//
//	// ��������
//	virtual void PutSomething()
//	{
//		cout << "�������" << endl;
//	}
//};
//
//
//// ��������
//class Coffee : public AbstractDrinking
//{
//public:
//	// ��ˮ
//	virtual void Boil()
//	{
//		cout << "�տ�ˮ--����ɽ" << endl;
//	}
//
//	// ����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	// ���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뿧�ȱ�" << endl;
//	}
//
//	// ��������
//	virtual void PutSomething()
//	{
//		cout << "�����ǿ�" << endl;
//	}
//
//};
//
//
//// ����
//void doWork(AbstractDrinking* abs)
//{
//	abs->makeDrink();
//}
//
//
//
//void test01()
//{
//	// ������
//	AbstractDrinking* abs = new Tea;
//	doWork(abs);
//	delete abs;
//
//	// ��������
//	abs = new Coffee;
//	doWork(abs);
//	delete abs;
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}