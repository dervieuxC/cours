#ifndef ELEVE_H
#define ELEVE_H
#include <iostream>
#include <string>
using namespace std;

/**
 * class Eleve
 * 
 */

class Eleve
{

	private:
		/**
		*
		*
		*/
		string nom;
		/**
		*
		*
		*/
		string prenom;

	public:

		/**
		 * Empty Constructor
		 */
		Eleve ( );
		//method
		/**
		*@brief saisie d'un élève
		*Permet à l'utilisateur de saisir les informations d'un élève
		*/
		void saisieEleve();
		/**
		*@brief affiche élève
		*Permet d'afficher les informations d'un élève
		*/
		void affiEleve();
		//ascesseur
		/**
		*@brief 
		*Permet de donner un nom à un élève
		*/
		void setNom ( string new_var );
		/**
		*@brief
		*Permet de retourner le nom de l'élève
		*/
		string getNom ( );
		/**
		*@brief
		*Permet de donner un prénom à un élève
		*/
		void setPrenom ( string new_var );
		/**
		*@biref
		*Permet de retourner le prénom de l'élève
		*/
		string getPrenom ( );

};//fin de la classe Eleve

#endif // ELEVE_H
