#include <iostream>
using namespace std;

//
// ���μ̳����⼰�������
// 
// ���μ̳�(��ʯ�̳�)
// ����������̳�ͬһ����
// ����ĳ����ͬʱ�̳�����������
// 
// ���μ̳а���
//       ����
//   ��        ����
//       ����          
// 
// 
// ���μ̳е�����
// 
// 1.��̳еĶ��������, ����Ҳ�̳��˶��������, ������ʹ������ʱ, �ͻ����������, 
//   Ҳ����˵, ������ʹ������ʱ, ����� ͬ��������
//   ���: ���������򼴿�
// 
// 2.�����ڼ̳� �� �� ����ʱ, �̳������ݶ��������, �����Ǽ̳�һ�ݾ͹���,  �Ƚ��˷ѿռ�
//   ���:
//   ��̳�,�̳�ʱʹ�� ��̳йؼ��� virtual
// 
// ͨ�������в鿴 ��Ĺ��� 
// cl /d1 reportSingleClassLayoutSheepTuo 8_���μ̳�.cpp
// 
// class SheepTuo  size(12):
//        +-- -
// 0      | +-- - (base class Sheep)
// 0      | | {vbptr}                   vbptr: virtual base pointer(�����ָ��)
//        | +-- -                       �����ָ���ָ��һ�� vbtable(������)
// 4      | +-- - (base class Tuo)      �������м�¼�� �����ʼλ�õ�ƫ����
// 4      | | {vbptr}
//        | +-- -
//        +-- -
//        +-- - (virtual base Animal)  // ����� Animal
// 8      | m_Age
//        + -- -
//
// SheepTuo::$vbtable@Sheep@:          // Sheep������, ��¼�� ƫ���� 
// 0      | 0                          // ��̳е�ָ��,ͨ��ƫ���� 8 �����ҵ� ����� age��λ��
// 1      | 8 (SheepTuod(Sheep + 0)Animal)
//
// SheepTuo::$vbtable@Tuo@:            // Tuo������, ��¼�� ƫ����
// 0      | 0                          // ��̳е�ָ��,ͨ��ƫ���� 4 �����ҵ� ����� age��λ��
// 1      | 4 (SheepTuod(Tuo + 0)Animal)
// vbi : class  offset o.vbptr  o.vbte fVtorDisp
// Animal       8       0       4 0
// 
// 
// 
// 
// 
// 
// 
// 
//

// ������
class Animal
{
public:
	int m_Age;
};

// ���� ͨ�����virtual  ʵ����̳�
// Animal���Ϊ �����
class Sheep:virtual public Animal{};

// ������
class Tuo:virtual public Animal{};

// ������
class SheepTuo:public Sheep, public Tuo{};


void test01()
{
	SheepTuo st;
	// ��ͨ�̳�,�������������, 
	st.Sheep::m_Age = 100;
	st.Tuo::m_Age = 100;
	st.m_Age = 200;
	// ����200,��̳�֮��,age ֻ��һ����
	cout << "st.Sheep age: " << st.Sheep::m_Age << endl;
	cout << "st.Tuo age: " << st.Tuo::m_Age << endl;
	cout << "st.m_Age age: " << st.m_Age << endl;
}

int main() {

	test01();

	system("pause");
	return 0;
}