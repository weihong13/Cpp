#pragma once
#include <string>
using namespace std;
class Staff
{
public:

	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return this->name;
	}

	void setSal(int sal)
	{
		if (sal < 0)
		{
			cout << "sal ÉèÖÃ´íÎó£¡" << endl;
			return;
		}
		this->sal = sal;
	}
	int getSal()
	{
		return this->sal;
	}

private:
	string name;
	int sal;
};
