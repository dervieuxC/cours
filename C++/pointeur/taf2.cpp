#include <string>
#include <iostream>
using namespace std;
int main(){
	int entier=19;
	int somme;
	cout << "adresse de la variable:" << &entier << endl;
	cout << "ce qu'il y a à l'adresse de la variable:" << *&entier << endl;
	int* pEntier;
	pEntier = new int;
	pEntier = &entier;
	*pEntier = 42;
	cout << "adresse du pointeur:" << &pEntier << endl;
	cout << "adresse que le pointeur contient:" << pEntier << endl;
	cout << "ce qu'il ya dans la mémoire à l'adresse que le pointeur contient:" << *pEntier << endl;
	somme= entier+*pEntier;
	cout << "la somme est de:" << somme << endl;
	delete pEntier;	
	pEntier = NULL;
	return 0;
}
