#include <iostream>
using namespace std;

//
// 菱形继承问题及解决方法
// 
// 菱形继承(钻石继承)
// 两个派生类继承同一个类
// 又有某个类同时继承两个派生类
// 
// 菱形继承案例
//       动物
//   羊        骆驼
//       羊驼          
// 
// 
// 菱形继承的问题
// 
// 1.羊继承的动物的数据, 骆驼也继承了动物的数据, 当羊驼使用数据时, 就会产生二义性, 
//   也就是说, 羊驼在使用数据时, 会出现 同名的现象
//   解决: 标明作用域即可
// 
// 2.羊驼在继承 羊 和 骆驼时, 继承了两份动物的数据, 而我们继承一份就够了,  比较浪费空间
//   解决:
//   虚继承,继承时使用 虚继承关键字 virtual
// 
// 通过命令行查看 类的构造 
// cl /d1 reportSingleClassLayoutSheepTuo 8_菱形继承.cpp
// 
// class SheepTuo  size(12):
//        +-- -
// 0      | +-- - (base class Sheep)
// 0      | | {vbptr}                   vbptr: virtual base pointer(虚基类指针)
//        | +-- -                       虚基类指针会指向一个 vbtable(虚基类表)
// 4      | +-- - (base class Tuo)      虚基类表中记录了 相对起始位置的偏移量
// 4      | | {vbptr}
//        | +-- -
//        +-- -
//        +-- - (virtual base Animal)  // 虚基类 Animal
// 8      | m_Age
//        + -- -
//
// SheepTuo::$vbtable@Sheep@:          // Sheep虚基类表, 记录了 偏移量 
// 0      | 0                          // 虚继承的指针,通过偏移量 8 就能找到 虚基类 age的位置
// 1      | 8 (SheepTuod(Sheep + 0)Animal)
//
// SheepTuo::$vbtable@Tuo@:            // Tuo虚基类表, 记录了 偏移量
// 0      | 0                          // 虚继承的指针,通过偏移量 4 就能找到 虚基类 age的位置
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

// 动物类
class Animal
{
public:
	int m_Age;
};

// 羊类 通过添加virtual  实现虚继承
// Animal类称为 虚基类
class Sheep:virtual public Animal{};

// 骆驼类
class Tuo:virtual public Animal{};

// 羊驼类
class SheepTuo:public Sheep, public Tuo{};


void test01()
{
	SheepTuo st;
	// 普通继承,必须标明作用域, 
	st.Sheep::m_Age = 100;
	st.Tuo::m_Age = 100;
	st.m_Age = 200;
	// 都是200,虚继承之后,age 只有一个了
	cout << "st.Sheep age: " << st.Sheep::m_Age << endl;
	cout << "st.Tuo age: " << st.Tuo::m_Age << endl;
	cout << "st.m_Age age: " << st.m_Age << endl;
}

int main() {

	test01();

	system("pause");
	return 0;
}