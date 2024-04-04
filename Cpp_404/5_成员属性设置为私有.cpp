#include<iostream>
#include<string>

using namespace std;


// 
// 成员属性设置为私有
// 
// 在开发种一般将成员属性设置为私有，然后通过公共的成员方法来获取或者修改成员属性
// set方法、get方法
// 
// 1、可以自己控制读写
// 2、对于写可以对数据进行有效性检测
//

//class Person
//{
//private:
//	string name; // 姓名 可读可写
//	int age;     // 年龄 可读
//	string idol; // 偶像 可写
//
//public:
//	// 设置名字（写名字）
//	void setName(string s_Name) {
//		name = s_Name;
//	}
//	// 返回名字（读名字）
//	string getName() {
//		return name;
//	}
//	// 可以写入年龄，但必须在（0~150之间）
//	void setAge(int s_age) 
//	{
//		if (s_age >= 0 && s_age <= 150) 
//		{
//			age = s_age;
//		}
//		else 
//		{
//			cout<<"输入错误！"<< endl;
//		}
//	}
//	// 返回年龄（读年龄）
//	int getAge() {
//		return age;
//	}
//	// 设置偶像（写偶像）
//	void setIdol(string s_idol) {
//		idol = s_idol;
//	}
//};
//
//int main() {
//	Person p1;
//	// 写名字
//	p1.setName("weihong");
//	// 读名字
//	string name = p1.getName();
//	// 设置年龄
//	p1.setAge(19);
//	// 读年龄
//	int age = p1.getAge();
//	// 写偶像
//	p1.setIdol("袁隆平");
//
//	// 打印姓名，年龄
//	cout << "姓名：" << name << "  年龄：" << age << endl;
//	cout << "姓名：" << p1.getName() << "  年龄：" << p1.getAge() << endl;
//
//	system("pause");
//	return 0;
//}