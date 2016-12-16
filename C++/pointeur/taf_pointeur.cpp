#include <string>
#include <iostream>
using namespace std;
int main(){
	int entier1;
	int entier2;
	int* pEntierLePlusPetit;
	int* pEntierLePlusGrand;
	cout << "Entrez le premier nombre!" << endl;
	cin >> entier1;
	cin.ignore(1);
	cout << "Entrez le deuxième nombre!" << endl;
	cin >> entier2;
	cin.ignore(1);
	if (entier1>entier2)//Si le premier nombre est plus grand que le deuxième
	{
		pEntierLePlusGrand=&entier1;
		pEntierLePlusPetit=&entier2;
	}
	else//Sinon
	{
		pEntierLePlusGrand=&entier2;
		pEntierLePlusPetit=&entier1;
	}
	cout << "Le nombre le plus grand est:" << *pEntierLePlusGrand << endl;//Sans l'étoile le programme affiche l'adresse du pointeur
	cout << "Le nombre le plus petit est:" << *pEntierLePlusPetit << endl;
	return 0;
}
