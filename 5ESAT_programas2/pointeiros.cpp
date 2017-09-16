#include <iostream>
using namespace std;

int main() {
	int a, b, *p, *q;
	
	a = 1;
	b = 2;
	p = &a;
	q = p;
	*q = 3;
	
	cout << a << ' ' << b << ' ' << *p << ' ' << *q << ' ';
	
	return 0;
}
