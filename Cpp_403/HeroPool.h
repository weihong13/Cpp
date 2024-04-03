#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cassert>
#include<string>
#include<cstdlib>
using namespace std;

// ��������
#define FUNC_NUM 6
// ��ʼ����
#define INIT_CAP 3
// ��������
#define INC_CAP 2


// Ӣ����Ϣ�ṹ�� --
typedef struct Hero {
	string name; // ���� 
	int age; // ����
	string sex; // �Ա�
	string weapon; // ����
}Hero;


// Ӣ�۳ؽṹ��
typedef struct HeroPool {
	// Ӣ����Ϣ����
	Hero* data;
	// ĿǰӢ������
	int count;
	// ĿǰӢ�۳�����
	int capacity;

}HeroPool;

// ��ʼ��Ӣ�۳�
void InitHeroPool(HeroPool* hp);

// ���Ӣ�� 
void AddHero(HeroPool* hp);


// չʾӢ�۳�
void ShowHero(HeroPool* hp);




// �����ڴ�ռ�
void DestoryContact(HeroPool* hp);