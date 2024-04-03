#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cassert>
#include<string>
#include<cstdlib>
using namespace std;

// 功能数量
#define FUNC_NUM 6
// 初始容量
#define INIT_CAP 3
// 增加容量
#define INC_CAP 2


// 英雄信息结构体 --
typedef struct Hero {
	string name; // 姓名 
	int age; // 年龄
	string sex; // 性别
	string weapon; // 兵器
}Hero;


// 英雄池结构体
typedef struct HeroPool {
	// 英雄信息数组
	Hero* data;
	// 目前英雄数量
	int count;
	// 目前英雄池容量
	int capacity;

}HeroPool;

// 初始化英雄池
void InitHeroPool(HeroPool* hp);

// 添加英雄 
void AddHero(HeroPool* hp);


// 展示英雄池
void ShowHero(HeroPool* hp);




// 销毁内存空间
void DestoryContact(HeroPool* hp);