//#include<iostream>
//#include<string>
//using namespace std;

// 
// 面向对象
// 
// C++ 面向对象的三大特性：封装、继承、多态
// 
// 万事万物都可以是对象：对象上有属性和行为
// 
// 
// 
// 而具有相同性质的对象，我们可以抽象成为类
// 
// 例如：汽车是一个抽象的类
//       汽车类可以有多个对象，小米汽车、奔驰、奥迪，都是汽车类下的具体对象
// 
// 类中的属性和行为 统称为成员
// 属性：属性成员、成员变量
// 行为：成员函数、成员方法    
// 
// 访问权限 3种
// 公共权限 public
// 保护权限 protected
// 私有权限 private
//


// 设计一个车类，属性有自动档手动挡，加几号汽油，行为有打开车灯

//class Car {
//
//	// 访问权限
//public:
//	// 属性
//	string drive;
//	int gasoline;
//	// 行为
//	void TurnOnHeadlights() {
//		cout <<"车灯已经打开"<< endl;
//	}
//
//};
//
//int main() {
//	// 通过Car类来创建一个 xiaomi汽车的对象
//	// 实例化一个汽车对象
//	Car xiaomi;
//	
//	// 给实例化的对象赋值
//	xiaomi.drive = "自动挡";
//	xiaomi.gasoline = 98;
//	
//	// 打开车灯
//	xiaomi.TurnOnHeadlights();
//
//	system("pause");
//	return 0;
//}


//// 设计一个学生类，学生有姓名学号，可以展示学生的姓名学号
//class Student
//{
//public:// 权限
//	string name; // 姓名 
//	int id; // 学号
//
//	// 展示学生
//	void showStu() 
//	{
//		cout << "姓名: " << name << endl;
//		cout <<"学号: "<< id<< endl;
//
//	}
//
//	// 给姓名赋值
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
//	stu.name = "小明";
//	stu.id = 101;
//	//
//	stu.showStu();
//
//	Student stu2;
//	stu2.setName("小张");
//	stu2.id = 102;
//	stu2.showStu();
//	system("pause");
//	return 0;
//}


//
// 访问权限 3种
// 
// 公共权限 public   
// 成员在类内可以访问、类外也可以访问
// 
// 保护权限 protected
// 成员在类内可以访问、类外不可以访问
// 子类可以访问父类中的保护内容
// 
// 私有权限 private
// 成员在类内可以访问、类外不可以访问
// 子类不可以访问父类中的私有内容
//

//class Person
//{
//public: // 公共权限
//	string name;
//protected: // 保护权限
//	string car;
//private: // 私有权限
//	int pwd;
//private:
//	void func() {
//		name = "张三";
//		car = "马自达";
//		pwd = 123;
//	}
//public:
//	void func1() {
//		cout << "公共权限func1()" << endl;
//	}
//
//};
//
//int main() {
//	// 实例化一个人类的对象 p1
//	Person p1;
//
//	p1.name = "李四";
//	
//	// protected 和 private 修饰的成员都无法访问
//	//p1.car = "奔驰";
//	//p1.pwd = 321;
//	//p1.func();
//
//
//	p1.func1();
//	system("pause");
//	return 0;
//}


// 
// struct 和 class 的区别
// 
// struct的默认权限是 public
// class 的默认权限是 private
//