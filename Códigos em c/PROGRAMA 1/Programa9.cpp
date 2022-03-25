// Vectores Na Biblioteca de Formatos Padrão
#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int>  v){
	cout << endl;
	for (int i=0; i<v.size() ; i++) {
		cout << v[i] << " ";
	}
} 

int main () {
	vector<int> array1(5);
	
	for (int i=0; i< array1.size() ; i++) {
		array1[i] = i;
	}
	
	printVector(array1);
	
	array1.push_back(100);
	printVector(array1);
	
	array1.resize(10);
	cout << "\nThe size of the array is " << array1.size() << endl;
	
	return 0;
}

