#include "Matiere.h"

// Constructors/Destructors
//  

Matiere::Matiere ( ) { }

Matiere::Matiere (string leNom){
	coeff=1;
	nom=leNom;
}
Matiere::Matiere ( string leNom , int leCoeff){
	nom=leNom;
	coeff=leCoeff;
}

/**
 * Set the value of nom
 * @param new_var the new value of nom
 */
void Matiere::setNom ( string new_var )   {
	nom = new_var;
}//fin de "setNom"

/**
 * Get the value of nom
 * @return the value of nom
 */
string Matiere::getNom ( )   {
	return nom;
}//fin de "getNom"

/**
 * Set the value of coeff
 * @param new_var the new value of coeff
 */
void Matiere::setCoeff ( int new_var )   {
	coeff = new_var;
}//fin de "setCoeff"

/**
 * Get the value of coeff
 * @return the value of coeff
 */
int Matiere::getCoeff ( )   {
	return coeff;
}//fin de "getCoeff"

void Matiere::saisieMatiere(){
	string leNom;
	int leCoeff;
	cout << "entrez le nom de la Matière:";
	getline(cin,leNom);
	setNom(leNom);
	cout << "entrez le coeff de la matière:";
	cin >> leCoeff;
	cin.ignore(1);
	setCoeff(leCoeff);
}

void Matiere::affiMatiere(){
	cout <<  getNom() << endl;
	//cout << getCoeff() << endl;
}



