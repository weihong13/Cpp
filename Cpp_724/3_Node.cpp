#define _CRT_SECURE_NO_WARNINGS
#include "List.h"





int main()
{
	vector<int> vec = { 1,2,3,2,5 };
	List l(vec);
	l.printList();

	l.Del_Node(2);
	l.printList();
	
	

	return 0;
}