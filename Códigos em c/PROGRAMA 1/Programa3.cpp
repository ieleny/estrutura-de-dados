//Progrma usando fun��es
#include <iostream>
#include <locale.h>

using namespace std;

void compute(int n1, int n2, char op);

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int a,b;
	char op;
	
	cout << "Ingresse um n�mero inteiro: ";
	cin >> a;
	cout << "Ingresse outro n�mero inteiro: ";
	cin >> b;
	cout << "Digite a opera��o desejada (+/-): ";
	cin >> op;
	
	compute(a,b,op);
	
	return 0;
}

void compute(int n1, int n2, char op) {
	if (op == '+') {
		cout << "\nA soma dos n�meros � " << n1 + n2 << endl;
	}
	else if (op== '-')	{
		cout << "\nA substra��o dos n�meros � " << n1 - n2 << endl;
	}
	else {
		cout << "\nOpera��o errada!" << endl;
	}
}
