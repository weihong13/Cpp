#include "String.h"


int main()
{


	String m(5,'c');
	String n(5, 'd');
	cout << m[2] << endl;
	cout << (m > n) << endl;

	m = n;
	cout << m << endl;
	cout << (m += n) << endl;
	return 0;
}
