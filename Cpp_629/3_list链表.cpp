//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <list>
//
//using namespace std;
//
//
///*
//* 构造
//* 	list<T> lst; //list采用采用模板类实现,对象的默认构造形式!
//	list(beg,end); //构造函数将[beg, end)区间中的元素拷贝给本身。
//	list(n,elem);  //构造函数将n个elem拷贝给本身。
//	list(const list &lst); //拷贝构造函数。
//
// 赋值与交换
//
//	assign(beg,end); //将[beg,end)区间中的数据拷贝赋值给本身
//	assign(n, elem); //将n个elem拷贝赋值给本身
//	list& operator=(const list &lst); //重载等号操作符
//	swap(lst);//将lst与本身的元素互换。
//
//大小操作
//	size();  //返回容器中元素的个数
//	empty(); //判断容器是否为空
//	resize(num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//				 //如果容器变短，则末尾超出容器长度的元素被删除。
//	resize(num,elem);  //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//						//如果容器变短，则末尾超出容器长度的元素被删除。
//
// 插入删除
//
//	push_back(elem);//在容器尾部加入一个元素
//	pop_back();//删除容器中最后一个元素
//	push_front(elem);//在容器开头插入一个元素
//	pop_front();//从容器开头移除第一个元素
//	insert(pos,elem);//在pos位置插elem元素的拷贝，返回新数据的位置
//	insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
//	insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
//	clear();//移除容器的所有数据
//	erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置,
//	erase(pos);//删除pos位置的数据，返回下一个数据的位置。
//	remove(elem);//删除容器中所有与elem值匹配的元素。
//
//数据存取
//	front(); // 返回第一个元素。
//	back();  // 返回最后一个元素
//
//反转和排序
//	reverse();  //反转链表
//	sort();     //链表排序
//*/
//
//void test01()
//{
//
//	// 默认构造
//	list<int> l;
//
//	// list(n, elem);  //构造函数将n个elem拷贝给本身。
//	list<int> l1(5, 1);
//
//	// list(beg,end); //构造函数将[beg, end)区间中的元素拷贝给本身。
//	list<int> l2(l1.begin(), l1.end());
//
//	// list(const list & lst); //拷贝构造函数。
//	list<int> l3(l2);
//}
//void test02()
//{
//	// 默认构造
//	list<int> l,l1,l2;
//
//	l1.assign(8, 2);
//	// assign(beg, end); //将[beg,end)区间中的数据拷贝赋值给本身
//	l.assign(l1.begin(), l1.end());
//
//	// assign(n, elem); //将n个elem拷贝赋值给本身
//	l.assign(5, 10);
//
//	// list& operator=(const list & lst); //重载等号操作符
//	l2 = l;
//	// swap(lst);//将lst与本身的元素互换。
//
//	l.swap(l2);
//}
//
//void test03()
//{
//	// 默认构造
//	list<int> l;
//	l.assign(10, 5);
//
//	// size();  //返回容器中元素的个数
//	l.size();
//
//	// empty(); //判断容器是否为空
//	l.empty();
//	// resize(num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//				 //如果容器变短，则末尾超出容器长度的元素被删除。
//	
//	l.resize(15);
//	l.resize(10);
//
//	// resize(num, elem);  //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//						//如果容器变短，则末尾超出容器长度的元素被删除。
//	l.resize(5, 99);
//	l.resize(10);
//}
//
//void test04()
//{
//	// 默认构造
//	list<int> l;
//
//	// push_back(elem);//在容器尾部加入一个元素
//	l.push_back(1);
//	l.push_back(2);
//	l.push_back(3);
//
//	// pop_back();//删除容器中最后一个元素
//	l.pop_back();
//
//	// push_front(elem);//在容器开头插入一个元素
//	l.push_front(3);
//	l.push_front(2);
//	l.push_front(1);
//	
//	// pop_front();//从容器开头移除第一个元素
//	l.pop_front();
//
//	// insert(pos, elem);//在pos位置插elem元素的拷贝，返回新数据的位置
//	list<int>::iterator it = l.begin();
//	l.insert(++it, 5);
//	
//	// insert(pos, n, elem);//在pos位置插入n个elem数据，无返回值。
//	l.insert(it, 10, 100);
//
//	// insert(pos, beg, end);//在pos位置插入[beg,end)区间的数据，无返回值。
//	l.insert(it, l.begin(), l.end());
//	
//
//	// erase(beg, end);//删除[beg,end)区间的数据，返回下一个数据的位置,
//	l.erase(it, ++it);
//
//	// erase(pos);//删除pos位置的数据，返回下一个数据的位置。
//	l.erase(it);
//	// remove(elem);//删除容器中所有与elem值匹配的元素。
//	l.remove(100);
//
//	// clear();//移除容器的所有数据
//	l.clear();
//}
//
////反转和排序
//// reverse();  //反转链表
//// sort();     //链表排序
//void test05()
//{
//	// 默认构造
//	list<int> l;
//
//	l.push_back(2);
//	l.push_back(4);
//	l.push_back(3);
//	l.push_back(1);
//	l.push_back(7);
//	l.push_back(8);
//	l.push_back(6);
//	l.push_back(9);
//	l.push_back(5);
//
//	// reverse();  //反转链表
//	l.reverse();
//
//	// sort();     //链表排序
//	l.sort();
//}
//
//int main()
//{
//
//
//	
//
//	return 0;
//}