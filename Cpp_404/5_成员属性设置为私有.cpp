#include<iostream>
#include<string>

using namespace std;


// 
// ��Ա��������Ϊ˽��
// 
// �ڿ�����һ�㽫��Ա��������Ϊ˽�У�Ȼ��ͨ�������ĳ�Ա��������ȡ�����޸ĳ�Ա����
// set������get����
// 
// 1�������Լ����ƶ�д
// 2������д���Զ����ݽ�����Ч�Լ��
//

//class Person
//{
//private:
//	string name; // ���� �ɶ���д
//	int age;     // ���� �ɶ�
//	string idol; // ż�� ��д
//
//public:
//	// �������֣�д���֣�
//	void setName(string s_Name) {
//		name = s_Name;
//	}
//	// �������֣������֣�
//	string getName() {
//		return name;
//	}
//	// ����д�����䣬�������ڣ�0~150֮�䣩
//	void setAge(int s_age) 
//	{
//		if (s_age >= 0 && s_age <= 150) 
//		{
//			age = s_age;
//		}
//		else 
//		{
//			cout<<"�������"<< endl;
//		}
//	}
//	// �������䣨�����䣩
//	int getAge() {
//		return age;
//	}
//	// ����ż��дż��
//	void setIdol(string s_idol) {
//		idol = s_idol;
//	}
//};
//
//int main() {
//	Person p1;
//	// д����
//	p1.setName("weihong");
//	// ������
//	string name = p1.getName();
//	// ��������
//	p1.setAge(19);
//	// ������
//	int age = p1.getAge();
//	// дż��
//	p1.setIdol("Ԭ¡ƽ");
//
//	// ��ӡ����������
//	cout << "������" << name << "  ���䣺" << age << endl;
//	cout << "������" << p1.getName() << "  ���䣺" << p1.getAge() << endl;
//
//	system("pause");
//	return 0;
//}