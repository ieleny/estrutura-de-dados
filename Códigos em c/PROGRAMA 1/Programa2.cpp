//Progrma de opera��es
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int a,b;
	char op;
	
	cout << "Ingresse um n�mero inteiro: ";
	cin >> a;
	cout << "Ingresse outro n�mero inteiro: ";
	cin >> b;
	cout << "Digite a opera��o aritm�tica desejada (+/-): ";
	cin >> op;
	if (op == '+') {
		cout << "\nA soma dos n�meros � " << a + b << endl;
	}
	else if (op== '-')	{
		cout << "\nA substra��o dos n�meros � " << a - b << endl;
	}
	else {
		cout << "\nOpera��o errada!" << endl;
	}
		
	return 0;
}
