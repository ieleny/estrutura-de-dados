#include <iostream>
using namespace std;

//defini��o da classe n� para uma lista de inteiros
class node {
public:
	int value;
	node *next; //ponteiro para outro n�.
};

//defini��o da classe lista.
class list {
public:
	list(); // construtor
	~list(); //destrutor
	void insert(int); //m�todo inserir
	void display(); // m�todo para mostrar a lista
private:
	node *first; //ponteiro para o primer n� da lista.	
};

//defini��o do construtor da lista que � chamado quando a lista � criada
list::list() {
	first = NULL;
}

//defini��o do destrutor. Devolve toda a memoria usada ao sistema operativo.
list::~list() {
	node *ptr;
	while(first != NULL)
	{
		ptr = first->next;
		delete first;
		first = ptr;
	} 	
}

//m�todo para inserir ao final da lista.
void list::insert(int val) {
	if (first == NULL) {  //se a lista est� vazia
		first = new node;
		first->value = val;
		first->next = NULL;
	}
	else { // se a lista tem pelo menos um elemento.
		node *ptr = first; //define um ponteiro para visitar toda a lista.
		while (ptr->next !=NULL){ //la�o para chegar ao �ltimo elemento da lista
			ptr= ptr->next;
		}
		//segmento para adicionar o elemento ao final.
		ptr->next = new node; 
		ptr = ptr->next;
		ptr->value = val;
		ptr->next = NULL;	
	}
}

//m�todo para mostrar a lista
void list :: display() {
	node *ptr = first; //definir um ponteiro para visitar toda a lista.
	cout << "List: ";
	while (ptr != NULL) { 
		cout << ptr->value << ' ';
		ptr = ptr->next; 
	}
	cout << endl;
}

// programa para testar a estrutura lista 
int main() {
	list myList;
	
	cout << "Exemplo de lista singularmente ligadas" << endl << endl;
	
	myList.insert(5);
	myList.insert(10);
	myList.display();
	
	myList.insert(15);
	myList.display();
	
	return 0;
}

