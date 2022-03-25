// Passar por valor ou referência
#include <iostream>
using namespace std;

void f (int i, int* j, int& k ){
	i = 1;
	*j = 2;
	k = 3;
}

int main () {
	int n1 = 4, n2 = 5, n3 = 6;
	f(n1,&n2,n3);
	cout << n1 << ' ' << n2 << ' ' << n3;
	return 0;
}
