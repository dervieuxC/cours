#include "meuble.h"
int Meuble::nbMeuble=0;
Meuble::Meuble(string leNom , double lePrix , int laQte)
{
	nom=leNom;
	prix=lePrix;
	qteEnStock=laQte;
	nbMeuble+=1;
}

Meuble::~Meuble()
{
	nbMeuble-=1;
}
void Meuble::setNom ( string newNom )
{
	nom=newNom;
}
string Meuble::getNom ( )
{
	return nom;
}
void Meuble::setPrix ( double newPrix )
{
	prix=newPrix;
}
double Meuble::getPrix()
{
	return prix;
}
void Meuble::setQte ( int newQte)
{
	qteEnStock=newQte;
}
int Meuble::getQte()
{
	return qteEnStock;
}
