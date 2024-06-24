#pragma once
#include"person.h"
// 选手类实现


class Contestant : public Person
{
public:
	// 选手表演
	void performance();

	int is_Prefor = 0;
	
};