//Progrma de operações
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int a,b;
	char op;
	
	cout << "Ingresse um número inteiro: ";
	cin >> a;
	cout << "Ingresse outro número inteiro: ";
	cin >> b;
	cout << "Digite a operação aritmética desejada (+/-): ";
	cin >> op;
	if (op == '+') {
		cout << "\nA soma dos números é " << a + b << endl;
	}
	else if (op== '-')	{
		cout << "\nA substração dos números é " << a - b << endl;
	}
	else {
		cout << "\nOperação errada!" << endl;
	}
		
	return 0;
}
