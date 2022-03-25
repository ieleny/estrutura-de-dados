// Vetores
#include <iostream>
using namespace std;

int main () {
	int a[5] = {1,2,3,4,5};
	
	for (int i=0; i<5 ; i++) {
		cout << a[i] << endl;
	}
	
	int n = 5, *p;
	p = new int [n];
	
	p[0] = 10;
	p[1] = 11;
	p[2] = 12;
	p[3] = 13;
	p[4] = 14;
	
	cout << endl;
	for (int i=0; i<5 ; i++) {
		cout << p[i] << endl;
	}
	
	delete [] p;
	
	return 0;
}

