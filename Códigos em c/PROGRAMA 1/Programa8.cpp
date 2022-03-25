//strings
#include <iostream>
#include <string>
using namespace std;

int main () {
	
	string nome1,nome2,nome3;
	
	nome1 = "Ana";
	nome2 = "Pedro";
	nome3 = nome1;
	
	cout << "Segunda letra do primeiro nome: ";
	cout << nome1[1] << endl;
	
	if (nome3 < nome2)
		cout << nome3 << endl;
	else
		cout << nome2 << endl;
	
	cout << "Digite o seu nome: ";
	cin >> nome3;
	cout << endl << "Oi " << nome3 << endl;
	
	return 0;
}

