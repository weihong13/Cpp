//#include<iostream>
//using namespace std;

//
// 函数的默认参数
//

// 没传入参数就用默认值，传入了就用传入的
// 如果某个位置的形参有了默认参数，那么它后面的所以形参都必须有默认参数
// 函数声明写了默认值，在函数实现时不能写默认参数，声明和实现中只能有一个写默认参数

//int Add(int a = 10, int b = 20, int c = 30) {
//	return a + b + c;
//}
//
//int main() {
//
//	int sum = Add(20);
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}



//
// 函数占位参数
// 占位参数还可以有默认值
//

//void test(int a, int = 10) {
//	;
//}
//int main() {
//
//	test(10, 10);
//
//	system("pause");
//	return 0;
//}


//
// 函数的重载
// 函数名可以相同，通过不同的参数来调用不同的函数
// 
// 函数重载条件
// 同一作用域
// 函数名称相同
// 函数参数的 类型不同 或 个数不同 或 顺序不同
// 
// 函数的返回值不能作为重载的条件 int func 和 void func // err
// 

//void func() {
//	cout << "无参数的func" << endl;
//}
//void func(int a) {
//	cout << "有参数的func" << endl;
//}
//int main() {
//
//	func(1);
//	system("pause");
//	return 0;
//}

//
// 引用作为重载条件 
//

//void func() {
//	cout << "无参数的func" << endl;
//}
//void func(int& a) {
//	cout << "有参数的func" << endl;
//}
//void func(const int& a) {
//	cout << "有const参数的func" << endl;
//}
//int main() {
//
//	int a = 10;
//	func(1);
//	system("pause");
//	return 0;
//}



//// 函数重载遇到默认参数 // 和没参数的一样
//void func(int a) {
//	cout << "func(int a)" << endl;
//}
//void func(int a = 10) {
//	cout << "func(int a = 10)" << endl;
//}
//
//int main() {
//
//	int a = 10;
//	func(a);
//	system("pause");
//	return 0;
//}