// Pointeros e Variáveis de Referencia
#include <iostream>
using namespace std;

int main () {
	int n = 5, *p = &n, &r = n;
	
	cout << n << " " << *p << " " << r << " " << endl;
	
	r = 20;
	
	cout << n << " " << *p << " " << r << " " << endl;
	
	return 0;
}
