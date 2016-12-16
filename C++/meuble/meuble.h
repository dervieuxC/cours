#ifndef MEUBLE_H
#define MEUBLE_H
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Meuble
{

	private:
		string nom;
		double prix;
		int qteEnStock;			

	public:
		//constructeur
		Meuble(string leNom , double lePrix , int laQte);
		~Meuble();
		//method
		//ascesseur
		void setNom ( string newNom );
		string getNom ( );
		void setPrix ( double newPrix );
		double getPrix();
		void setQte ( int newQte);
		int getQte();
		static int nbMeuble;
};//fin de la classe Meuble

#endif // MEUBLE_H
