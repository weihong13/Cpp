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
//// 2.������Ԫ
//
//// Room�������
//class Room;
//
//// �û�����
//class GoodGay
//{
//public:
//	Room* room;
//	
//	// ����
//	void visit();
//	// goodgay��Ĺ��캯��
//	GoodGay();
//
//
//};
//
//// ������
//class Room
//{
//	// ���� GoodGay������Ԫ
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
//// ����ʵ�ֳ�Ա����
//
//Room::Room()
//{
//	this->sittingRoom = "����";
//	this->bedRoom = "����";
//
//}
//GoodGay::GoodGay()
//{
//	// �����������
//	// ����һ��Room�Ķ��󣬷���һ��Room���͵�ָ��
//	// ������ʱ�� �� ���� Room�����صĹ��캯��Room();
//	// Room�Ĺ��캯�����Լ��ĳ�Ա���Խ��и�ֵ����
//	room = new Room;
//}
//
//void GoodGay::visit()
//{
//
//	cout << "�û������ڷ������: " << room->sittingRoom << endl;
//	// ���GoodGay����Room����Ԫ����ʱ�޷�����Room��˽������bedRoom
//	cout << "�û������ڷ������: " << room->bedRoom << endl;
//}
//
//
//void test01()
//{
//	// ����һ��GoodGay��Ķ����ڴ����ö����ʱ�����ù��캯��GoodGay()
//	// �ڹ��캯��GoodGay()�ڲ����ִ�����һ��Room���͵Ķ���room
//	// ��ʱ�ֻ����Room�Ĺ��캯��room(),����Ա���Ը�ֵ
//	GoodGay goodGay;
//
//	// ʹ�ú������з���
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