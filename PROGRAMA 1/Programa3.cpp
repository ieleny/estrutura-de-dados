//Progrma usando funções
#include <iostream>
#include <locale.h>

using namespace std;

void compute(int n1, int n2, char op);

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int a,b;
	char op;
	
	cout << "Ingresse um número inteiro: ";
	cin >> a;
	cout << "Ingresse outro número inteiro: ";
	cin >> b;
	cout << "Digite a operação desejada (+/-): ";
	cin >> op;
	
	compute(a,b,op);
	
	return 0;
}

void compute(int n1, int n2, char op) {
	if (op == '+') {
		cout << "\nA soma dos números é " << n1 + n2 << endl;
	}
	else if (op== '-')	{
		cout << "\nA substração dos números é " << n1 - n2 << endl;
	}
	else {
		cout << "\nOperação errada!" << endl;
	}
}
