#pragma once
#include"person.h"
#include"contestant.h"
// ��ί������
class Judge :public Person
{
public:
	Judge();
	Judge(string name);

	void judges_score(Contestant* &conArr, int index);
};