#define _CRT_SECURE_NO_WARNINGS
#include "HeroPool.h"


void InitHeroPool(HeroPool* hp)
{
	assert(hp);
	hp->count = 0;
	hp->data = new Hero[INIT_CAP];
	if (hp->data == nullptr)
	{
		perror("InitHeroPool");
		return;
	}
	hp->capacity = INIT_CAP;
	
}

//  增加容量
static void IncreaseCapacity(HeroPool* hp)
{
	if (hp->count == hp->capacity) {
		Hero* ptr = new Hero[hp->capacity + INC_CAP];// 之前的data没释放
		if (ptr == nullptr)
		{
			perror("IncreaseCapacity");
			return;
		}
		else
		{

			hp->data = ptr;
			hp->capacity = hp->capacity + INC_CAP;
			cout << "增加容量成功";
		}
	}
}


void AddHero(HeroPool* hp)
{
	assert(hp);
	// 判断是否需要增容
	IncreaseCapacity(hp);
	// 添加英雄信息
	cout << "请输入英雄姓名：>";
	cin >> hp->data[hp->count].name;
	cout << "请输入英雄年龄：>";
	cin >> hp->data[hp->count].age;
	cout << "请输入英雄性别：>";
	cin >> hp->data[hp->count].sex;
	cout << "请输入英雄兵器：>";
	cin >> hp->data[hp->count].weapon;
	hp->count++;
	cout << "添加英雄成功"<<endl;
}


// 展示英雄池
void ShowHero(HeroPool* hp)
{
	assert(hp);
	int i = 0;
	cout << "姓名"
		<< "\t"
		<< "年龄"
		<< "\t"
		<< "性别"
		<< "\t"
		<< "武器" << endl;
	for (i = 0; i < hp->count; i++)
	{
		cout << hp->data[i].name
			 <<"\t"
			 << hp->data[i].age
			 << "\t"
			 << hp->data[i].sex
			 << "\t"
			 << hp->data[i].weapon << endl;
	}
}



// 销毁内存空间
void DestoryContact(HeroPool* hp)
{
	assert(hp);
	free(hp->data);
	hp->data = NULL;
}