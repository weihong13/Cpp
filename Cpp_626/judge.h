#pragma once
#include"person.h"
#include"contestant.h"
// ÆÀÎ¯ÀàÉùÃ÷
class Judge :public Person
{
public:
	Judge();
	Judge(string name);

	bool judges_score(Contestant* &conArr, int index);
};