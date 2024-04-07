#include<iostream>
#include<string>

using namespace std;

//
// 空指针调用成员函数
// 
// 在成员函数内部，我们在调用成员属性时，会默认加一个this指针，
// 如果this指针是一个空指针，利用空指针访问成员属性时，就会报错
// 



//
class Person
{
public:
	int age;

	void showClassName() 
	{
		cout << "this is Person class" << endl;
	}
	void showClassAge()
	{
		// 在访问成员属性时，会默认加this->
		// 如果是null指针在调用该函数
		// 那么就是在调用空指针的age属性
		// 这是不合法的
		// 因此需要加一个空指针的判断来提高安全性
		//
		if (this == NULL) {
			return;
		}
		cout << "age is " << this->age << endl;
	}

};

// 使用空指针调用成员函数
void test01()
{
	Person* p = NULL;
	p->showClassName();
	p->showClassAge();
}

int main() {

	test01();
	system("pause");
	return 0;
}