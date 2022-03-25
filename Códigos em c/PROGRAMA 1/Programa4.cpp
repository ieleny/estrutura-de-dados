// Programa para demostrar ponteiros
#include <iostream>

using namespace std;

int main () {
	
	int a = 5, b, *p, *q;
	
	b = 10;
	p = &a;
	*p = 20;
	q = new int;
	*q = 90; 
	
	cout << a << " " << b << " " << *p << " " << *q << " " << endl;
	
	delete q;
	
	return 0;
}

