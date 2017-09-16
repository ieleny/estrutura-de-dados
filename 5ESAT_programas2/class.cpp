// demo: class
#include <iostream>
#include <locale.h>

using namespace std;

// class
class test {
public:
	int a;
	float b;
};

// function to print the class
void imprimir(test x) {
	
	cout << x.a << " " << x.b << endl;
}

// function to print class passing pointer 
void imprimir(test *x) {
	
	cout << x -> a << " " << (*x).b << endl;
}

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	test v1, *v2;
	
	v1.a = 5;
	v1.b = 2.5;
	imprimir(v1);
	
	v2 = &v1;
	imprimir (v2);
	
	(*v2).a = 8;
	v2 -> b= 3.5;
	imprimir (v2);
	
	v2 = new  test;
	v2 -> a = 12;
	v2 -> b = 4.5;
	imprimir (v2);
	
	delete v2;
	
	return 0;
}
