//#include<iostream>
//#include<string>
//using namespace std;

// 
// �������
// 
// C++ ���������������ԣ���װ���̳С���̬
// 
// �������ﶼ�����Ƕ��󣺶����������Ժ���Ϊ
// 
// 
// 
// ��������ͬ���ʵĶ������ǿ��Գ����Ϊ��
// 
// ���磺������һ���������
//       ����������ж������С�����������ۡ��µϣ������������µľ������
// 
// ���е����Ժ���Ϊ ͳ��Ϊ��Ա
// ���ԣ����Գ�Ա����Ա����
// ��Ϊ����Ա��������Ա����    
// 
// ����Ȩ�� 3��
// ����Ȩ�� public
// ����Ȩ�� protected
// ˽��Ȩ�� private
//


// ���һ�����࣬�������Զ����ֶ������Ӽ������ͣ���Ϊ�д򿪳���

//class Car {
//
//	// ����Ȩ��
//public:
//	// ����
//	string drive;
//	int gasoline;
//	// ��Ϊ
//	void TurnOnHeadlights() {
//		cout <<"�����Ѿ���"<< endl;
//	}
//
//};
//
//int main() {
//	// ͨ��Car��������һ�� xiaomi�����Ķ���
//	// ʵ����һ����������
//	Car xiaomi;
//	
//	// ��ʵ�����Ķ���ֵ
//	xiaomi.drive = "�Զ���";
//	xiaomi.gasoline = 98;
//	
//	// �򿪳���
//	xiaomi.TurnOnHeadlights();
//
//	system("pause");
//	return 0;
//}


//// ���һ��ѧ���࣬ѧ��������ѧ�ţ�����չʾѧ��������ѧ��
//class Student
//{
//public:// Ȩ��
//	string name; // ���� 
//	int id; // ѧ��
//
//	// չʾѧ��
//	void showStu() 
//	{
//		cout << "����: " << name << endl;
//		cout <<"ѧ��: "<< id<< endl;
//
//	}
//
//	// ��������ֵ
//	void setName(string sName) {
//
//		name = sName;
//	}
//};
//
//int main() {
//	//  
//	Student stu;
//	//
//	stu.name = "С��";
//	stu.id = 101;
//	//
//	stu.showStu();
//
//	Student stu2;
//	stu2.setName("С��");
//	stu2.id = 102;
//	stu2.showStu();
//	system("pause");
//	return 0;
//}


//
// ����Ȩ�� 3��
// 
// ����Ȩ�� public   
// ��Ա�����ڿ��Է��ʡ�����Ҳ���Է���
// 
// ����Ȩ�� protected
// ��Ա�����ڿ��Է��ʡ����ⲻ���Է���
// ������Է��ʸ����еı�������
// 
// ˽��Ȩ�� private
// ��Ա�����ڿ��Է��ʡ����ⲻ���Է���
// ���಻���Է��ʸ����е�˽������
//

//class Person
//{
//public: // ����Ȩ��
//	string name;
//protected: // ����Ȩ��
//	string car;
//private: // ˽��Ȩ��
//	int pwd;
//private:
//	void func() {
//		name = "����";
//		car = "���Դ�";
//		pwd = 123;
//	}
//public:
//	void func1() {
//		cout << "����Ȩ��func1()" << endl;
//	}
//
//};
//
//int main() {
//	// ʵ����һ������Ķ��� p1
//	Person p1;
//
//	p1.name = "����";
//	
//	// protected �� private ���εĳ�Ա���޷�����
//	//p1.car = "����";
//	//p1.pwd = 321;
//	//p1.func();
//
//
//	p1.func1();
//	system("pause");
//	return 0;
//}


// 
// struct �� class ������
// 
// struct��Ĭ��Ȩ���� public
// class ��Ĭ��Ȩ���� private
//