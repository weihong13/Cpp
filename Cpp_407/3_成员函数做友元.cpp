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
//	// ���� Room �е�˽������
//	void visit01();
//
//	// 
//	void visit02();
//	// goodgay��Ĺ��캯��
//	GoodGay();
//
//
//};
//
//// ������
//class Room
//{
//	// ���� GoodGay��ĳ�Ա����visit01()����Ԫ
//	friend void GoodGay::visit01();
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
//// ����Ԫ
//void GoodGay::visit01()
//{
//
//	cout << "visit01���ڷ������: " << room->sittingRoom << endl;
//	// GoodGay�ĳ�Ա����visit01()����Room����Ԫ������ʱ���Է���Room��˽������bedRoom
//	cout << "visit01���ڷ������: " << room->bedRoom << endl;
//}
//// ������Ԫ
//void GoodGay::visit02()
//{
//	cout << "visit02���ڷ������: " << room->sittingRoom << endl;
//	// GoodGay�ĳ�Ա����visit02()������Room����Ԫ����ʱ�޷�����Room��˽������bedRoom
//	// cout << "�û������ڷ������: " << room->bedRoom << endl;
//
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
//	goodGay.visit01();
//	goodGay.visit02();
//
//}
//
//int main() {
//
//	test01();
//	system("pause");
//	return 0;
//}
//
//void visit01()
//{
//}
