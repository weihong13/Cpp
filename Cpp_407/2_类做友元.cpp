//#include<iostream>
//#include<string>
//
//using namespace std;
//
//
//
//
//
//
//
//
//
//
//// 2.类做友元
//
//// Room类的声明
//class Room;
//
//// 好基友类
//class GoodGay
//{
//public:
//	Room* room;
//	
//	// 访问
//	void visit();
//	// goodgay类的构造函数
//	GoodGay();
//
//
//};
//
//// 房子类
//class Room
//{
//	// 声明 GoodGay类是友元
//	friend class GoodGay;
//public:
//	string sittingRoom;
//private:
//	string bedRoom;
//
//public:
//	Room();
//};
//
//// 类外实现成员函数
//
//Room::Room()
//{
//	this->sittingRoom = "客厅";
//	this->bedRoom = "卧室";
//
//}
//GoodGay::GoodGay()
//{
//	// 创建房间对象
//	// 创建一个Room的对象，返回一个Room类型的指针
//	// 创建的时候 会 调用 Room的重载的构造函数Room();
//	// Room的构造函数给自己的成员属性进行赋值操作
//	room = new Room;
//}
//
//void GoodGay::visit()
//{
//
//	cout << "好基友正在访问你的: " << room->sittingRoom << endl;
//	// 如果GoodGay不是Room的友元，此时无法访问Room的私有属性bedRoom
//	cout << "好基友正在访问你的: " << room->bedRoom << endl;
//}
//
//
//void test01()
//{
//	// 创建一个GoodGay类的对象，在创建该对象的时候会调用构造函数GoodGay()
//	// 在构造函数GoodGay()内部马，又创建了一个Room类型的对象room
//	// 此时又会调用Room的构造函数room(),给成员属性赋值
//	GoodGay goodGay;
//
//	// 使用函数进行访问
//	goodGay.visit();
//
//}
//
//int main() {
//
//	test01();
//	system("pause");
//	return 0;
//}