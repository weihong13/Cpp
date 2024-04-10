#include <iostream>
using namespace std;


// �����CPU��
class CPU
{
public:
	virtual void calculate() = 0;
};
// �����VideoCard��(�Կ�)
class VideoCard
{
public:
	virtual void dipaly() = 0;
};
// �����Memory��(�ڴ�)
class Memory
{
public:
	virtual void storage() = 0;
};



// intel ��cup
class IntelCpu : public CPU
{
public:
	void calculate()
	{
		cout << "IntelCpu��ʼ���㣡" << endl;
	}
};
// intel ��videocard
class IntelVideoCard : public VideoCard
{
public:
	void dipaly()
	{
		cout << "IntelVideoCard��ʼ��ʾ��" << endl;
	}
};
// intel ��Memory
class IntelMemory : public Memory
{
public:
	void storage()
	{
		cout << "IntelMemory��ʼ�洢��" << endl;
	}
};


// Lenovo ��cup
class LenovoCpu : public CPU
{
public:
	void calculate()
	{
		cout << "LenovoCpu��ʼ���㣡" << endl;
	}
};
// Lenovo ��videocard
class LenovoVideoCard : public VideoCard
{
public:
	void dipaly()
	{
		cout << "LenovoVideoCard��ʼ��ʾ��" << endl;
	}
};
// Lenovo ��Memory
class LenovoMemory : public Memory
{
public:
	void storage()
	{
		cout << "LenovoMemory��ʼ�洢��" << endl;
	}
};

// ������
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_Cpu = cpu;
		m_VC = vc;
		m_Mem = mem;

	}

	// ��������
	void doWork()
	{
		m_Cpu->calculate();
		m_Mem->storage();
		m_VC->dipaly();

	}
	// �������� �ͷ� 3�����
	~Computer()
	{
		// �ͷ�cpu
		if(m_Cpu != NULL)
		{
			delete m_Cpu;
			m_Cpu = NULL;
		}
		// �ͷ�VC
		if (m_VC != NULL)
		{
			delete m_VC;
			m_VC = NULL;
		}
		// �ͷ�Memory
		if (m_Mem != NULL)
		{
			delete m_Mem;
			m_Mem = NULL;
		}

	}

private:

	CPU* m_Cpu;
	VideoCard* m_VC;
	Memory* m_Mem;
};

// ����
void test01()
{
	// 3���������intel����װ ����1
	cout << "-----����1-----" << endl;
	CPU* iCpu = new IntelCpu;
	VideoCard* iVC = new IntelVideoCard;
	Memory* iM = new IntelMemory;
	Computer* cmp1 = new Computer(iCpu, iVC, iM);
	cmp1->doWork();
	// ��computer ��������� �Ѿ��ͷ����������������Ͳ����ͷ���
	//delete iCpu;
	//delete iVC;
	//delete iM;
	delete cmp1;





	// 3���������Lenovo����װ ����2
	cout << "-----����2-----" << endl;
	Computer* cmp2 = new Computer(new LenovoCpu, new LenovoVideoCard, new LenovoMemory);
	cmp2->doWork();
	delete cmp2;

	// cpu��inteld,����2���������lenovo����װ ����3
	cout << "-----����3-----" << endl;
	Computer* cmp3 = new Computer(new IntelCpu, new LenovoVideoCard, new LenovoMemory);
	cmp3->doWork();
	delete cmp3;
}

int main() 
{
	test01();

	system("pause");
	return 0;
}