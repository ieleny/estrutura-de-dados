#include <iostream>
using namespace std;
//program to ilustrate to pass by value and pass by reference

void test(int a, int &b, int c) {
	a = b + c;
	b = a + c;
	c = a + b;
}

int main() {
	int x, y, z;
	
	x = 1;
	y = 2;
	z = 3;
	
	test(x,y,z);
	cout << "Resultados: " << x << " " << y << " " << z << " " << endl;
	
	test (4,x,5);
	cout << "X: " << x << " ";
}
