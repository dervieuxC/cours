#include "eleve.h"
Eleve::Eleve ( ) {
}//fin du constructeur
/**
 * Set the value of nom
 * @param new_var the new value of nom
 */
void Eleve::setNom ( string new_var )   {
	nom = new_var;
}//fin de "setNom"

/**
 * Get the value of nom
 * @return the value of nom
 */
string Eleve::getNom ( )   {
	return nom;
}//fin de "getNom"

/**
 * Set the value of prenom
 * @param new_var the new value of prenom
 */
void Eleve::setPrenom ( string new_var )   {
	prenom = new_var;
}//fin de "setPrenom"

/**
 * Get the value of prenom
 * @return the value of prenom
 */
string Eleve::getPrenom ( )   {
	return prenom;
}//fin de "getPrenom"

void Eleve::saisieEleve(){
	string nomE;
	string prenomE;
	cout << "entrez le nom de l'élève:";
	getline(cin , nomE);
	setNom(nomE);
	cout << "entrez le prénom de l'élève:";
	getline(cin , prenomE);
	setPrenom(prenomE);
	//cout << nom << endl;
	//cout << prenom << endl; 
}

void Eleve::affiEleve(){
	cout << getNom() << " "; 
	cout << getPrenom() << endl;
}

