//#include <iostream>
//using namespace std;
//
//// 制作饮品：咖啡、茶
//// 过程： 烧水、冲泡、倒入杯子、加入辅料
//
//
//// 制作饮品抽象类
//class AbstractDrinking
//{
//public:
//	// 烧水
//	virtual void Boil() = 0;
//
//	// 冲泡
//	virtual void Brew() = 0;
//
//	// 倒入杯子
//	virtual void PourInCup() = 0;
//
//	// 加入佐料
//	virtual void PutSomething() = 0;
//
//	// 制作饮品
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
//// 制作茶
//class Tea : public AbstractDrinking
//{
//public:
//	// 烧水
//	virtual void Boil()
//	{
//		cout << "烧开水--山泉水" << endl;
//	}
//
//	// 冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//
//	// 倒入杯子
//	virtual void PourInCup() 
//	{
//		cout << "倒入茶具" << endl;
//	}
//
//	// 加入佐料
//	virtual void PutSomething()
//	{
//		cout << "加入枸杞" << endl;
//	}
//};
//
//
//// 制作咖啡
//class Coffee : public AbstractDrinking
//{
//public:
//	// 烧水
//	virtual void Boil()
//	{
//		cout << "烧开水--百岁山" << endl;
//	}
//
//	// 冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//
//	// 倒入杯子
//	virtual void PourInCup()
//	{
//		cout << "倒入咖啡杯" << endl;
//	}
//
//	// 加入佐料
//	virtual void PutSomething()
//	{
//		cout << "加入糖块" << endl;
//	}
//
//};
//
//
//// 制作
//void doWork(AbstractDrinking* abs)
//{
//	abs->makeDrink();
//}
//
//
//
//void test01()
//{
//	// 制作茶
//	AbstractDrinking* abs = new Tea;
//	doWork(abs);
//	delete abs;
//
//	// 制作咖啡
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