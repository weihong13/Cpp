
#include <queue>
#include <algorithm>

#include <iostream>
#include <vector>
using namespace std;

template<class T>
class Ref
{
	int r_count = 0;	// 引用计数
	T* object = nullptr;// 原始指针

public:
	// 无参构造
	Ref():r_count(0), object(nullptr){}
	// 有参构造
	Ref(T* target) :object(target)
	{
		r_count++;
	}

	// 引用计数加 1 
	inline void increase()
	{
		r_count ++;
	}
	// 引用计数减 1，并判断是否要释放堆区内存
	inline void reduce()
	{
		r_count--;	// 引用计数减一
		if (r_count == 0)  // 如果引用计数减为 0 ，释放管理的堆区内存，并释放自己
		{
			delete object;
			delete this;
		}
	}
	T* get()
	{
		return object;
	}
	int getCount() const
	{
		return r_count;
	}
};

// 智能指针需要的方法：
/*
	无参构造、传递指针构造、拷贝构造、移动构造、拷贝赋值运算符重载、移动赋值运算符重载
	reset()替换对象、销毁对象
	operator*() 解引用运算符重载，operator->() 箭头运算符重载
	get() 获取原始指针
	use_count()获取引用计数
*/
template<class T>
class Share_ptr
{
	Ref<T>* ref = nullptr;
public:
	Share_ptr() = default;
	~Share_ptr()
	{
		// ref不为空 引用计数减一
		if (ref) ref->reduce();  
	}

	Share_ptr(T* newP)
	{
		cout << "-----传递指针构造---------" << endl;
		ref = new Ref<T>(newP);
	}
	Share_ptr(const Share_ptr& other)
	{
		cout << "-----拷贝构造---------" << endl;
		this->ref = other.ref;
		// 引用计数加 1
		if (ref) ref->increase();
	}
	Share_ptr(Share_ptr&& other)
	{
		cout << "-----移动构造---------" << endl;
		this->ref = other.ref;
		other.ref = nullptr;
	}
	Share_ptr& operator=(const Share_ptr& other)
	{
		cout << "-----拷贝赋值运算符重载---------" << endl;
		if (ref)
		{	// 之前有内容，清空之前的内容
			ref->reduce();
		}
		this->ref = other.ref;
		// 引用计数加 1
		if (ref) ref->increase();
		return *this;
	}
	Share_ptr& operator=(Share_ptr&& other)
	{
		cout << "-----移动赋值运算符重载---------" << endl;
		if (ref)
		{	// 之前有内容，清空之前的内容
			ref->reduce();
		}
		this->ref = other.ref;
		other.ref = nullptr;
	}
	void reset()
	{
		if (ref) ref->reduce();
		ref = nullptr;
	}
	void reset(T* target)
	{
		if (ref) ref->reduce();
		ref = new Ref<T>(target);
	}
	T& operator*()
	{
		return *ref->get();
	}
	T* operator->()
	{
		if (ref) return ref->get();
	}
	T* get()
	{
		return ref->get();
	}
	int use_count()
	{
		if (ref) return ref->getCount();
		return 0;
	}

};


// 智能指针循环引用的问题
class A;
class B;
class A
{
public:
	weak_ptr<B> bptr;
	~A()
	{
		cout << "类 A 的析构函数" << endl;
	}
};
class B
{
public:
	shared_ptr<A> aptr;
	~B()
	{
		cout << "类 B 的析构函数" << endl;
	}
};

void testPtr()
{
	shared_ptr<A> ap(new A);
	shared_ptr<B> bp(new B);

	cout << "A的引用计数为: " << ap.use_count() << endl;
	cout << "B的引用计数为: " << bp.use_count() << endl;

	ap->bptr = bp;
	bp->aptr = ap;
	cout << "A的引用计数为: " << ap.use_count() << endl;
	cout << "B的引用计数为: " << bp.use_count() << endl;
}


#include <memory>
int main()
{
	testPtr();

	weak_ptr<int> pt;
	pt.lock();
}