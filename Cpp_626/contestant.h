#pragma once
#include"person.h"
// ѡ����ʵ��


class Contestant : public Person
{
public:
	// ѡ�ֱ���
	void performance();

	bool is_Prefor = false;
	bool is_Score = false;
	
};