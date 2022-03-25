// demo: strutura
#include <iostream>
#include <locale.h>

using namespace std;

// structure 
struct test {
	int a;
	float b;
};

// function to print structure
void imprimir(test x) {
	
	cout << x.a << " " << x.b << endl;
}

// function to print structure
void imprimir(test *x) {
	
	cout << x -> a << " " << (*x).b << endl;
}

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	test v1, *v2;
	
	//colocar valores em v1 e imprimir
	v1.a = 5;
	v1.b = 2.5;
	imprimir(v1);
	
	//apontar a v1 e imprimir
	v2 = &v1;
	imprimir (v2);
	
	(*v2).a = 7;
	v2 -> b= 3.5;
	imprimir (v2);
	
	//apontar a uma nova strutura.
	v2 = new test;
	v2 -> a = 14;
	v2 -> b = 4.5;
	imprimir (v2);
	
	delete v2;
	
	return 0;
}
