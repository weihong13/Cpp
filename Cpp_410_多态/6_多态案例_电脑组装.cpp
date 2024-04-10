#include <iostream>
using namespace std;


// 抽象的CPU类
class CPU
{
public:
	virtual void calculate() = 0;
};
// 抽象的VideoCard类(显卡)
class VideoCard
{
public:
	virtual void dipaly() = 0;
};
// 抽象的Memory类(内存)
class Memory
{
public:
	virtual void storage() = 0;
};



// intel 的cup
class IntelCpu : public CPU
{
public:
	void calculate()
	{
		cout << "IntelCpu开始计算！" << endl;
	}
};
// intel 的videocard
class IntelVideoCard : public VideoCard
{
public:
	void dipaly()
	{
		cout << "IntelVideoCard开始显示！" << endl;
	}
};
// intel 的Memory
class IntelMemory : public Memory
{
public:
	void storage()
	{
		cout << "IntelMemory开始存储！" << endl;
	}
};


// Lenovo 的cup
class LenovoCpu : public CPU
{
public:
	void calculate()
	{
		cout << "LenovoCpu开始计算！" << endl;
	}
};
// Lenovo 的videocard
class LenovoVideoCard : public VideoCard
{
public:
	void dipaly()
	{
		cout << "LenovoVideoCard开始显示！" << endl;
	}
};
// Lenovo 的Memory
class LenovoMemory : public Memory
{
public:
	void storage()
	{
		cout << "LenovoMemory开始存储！" << endl;
	}
};

// 电脑类
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_Cpu = cpu;
		m_VC = vc;
		m_Mem = mem;

	}

	// 工作函数
	void doWork()
	{
		m_Cpu->calculate();
		m_Mem->storage();
		m_VC->dipaly();

	}
	// 析构函数 释放 3个零件
	~Computer()
	{
		// 释放cpu
		if(m_Cpu != NULL)
		{
			delete m_Cpu;
			m_Cpu = NULL;
		}
		// 释放VC
		if (m_VC != NULL)
		{
			delete m_VC;
			m_VC = NULL;
		}
		// 释放Memory
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

// 测试
void test01()
{
	// 3个零件都是intel的组装 电脑1
	cout << "-----电脑1-----" << endl;
	CPU* iCpu = new IntelCpu;
	VideoCard* iVC = new IntelVideoCard;
	Memory* iM = new IntelMemory;
	Computer* cmp1 = new Computer(iCpu, iVC, iM);
	cmp1->doWork();
	// 在computer 类的析构中 已经释放了三个零件，这里就不用释放了
	//delete iCpu;
	//delete iVC;
	//delete iM;
	delete cmp1;





	// 3个零件都是Lenovo的组装 电脑2
	cout << "-----电脑2-----" << endl;
	Computer* cmp2 = new Computer(new LenovoCpu, new LenovoVideoCard, new LenovoMemory);
	cmp2->doWork();
	delete cmp2;

	// cpu是inteld,其他2个零件都是lenovo的组装 电脑3
	cout << "-----电脑3-----" << endl;
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