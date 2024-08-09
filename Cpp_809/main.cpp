#define _CRT_SECURE_NO_WARNINGS
#include "Tree.h"

int main()
{
	vector<int> vec = { 7,5,4,6,11,9,10 };
	Tree t(vec);

	t.Level();

	return 0;
}
