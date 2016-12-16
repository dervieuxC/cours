#ifndef MATIERE_H
#define MATIERE_H
#include <iostream>
#include <string>
using namespace std;

/**
 * class Matiere
 * Une matiere est une des parties enseigner.
 */

class Matiere
{
	public:

		/**
		 *Constructeur
		 */
		Matiere ( );
		/**
		*@brief constructeur nom
		*Permet de créer une matière en initialisasnt seulement le nom
		*@param le nom que l'on veut donner a la matère
		*/
		Matiere (string leNom);
		/**
		*@brief constructeur nom + coeff
		*Permet de créer une matère en initialisant le nom et le coeff
		*@param le nom puis le coeff que l'on veut donner à la matiere
		*/
		Matiere ( string leNom , int leCoeff);
		//method
		/**
		*@brief saisir une Matière
		*Permet à l'utilisateur de saisir toutes les informations de la matière
		*/
		void saisieMatiere();
		/**
		*@brief afficher une matière
		*Permet d'afficher les informations d'une matière
		*/
		void affiMatiere();
		//ascesseur
		/**
		*@brief 
		*permet de donner un nom à une matière 
		*/
		void setNom(string new_var);
		/**
		*@brief
		*Permet de retourner le nom d'une matière 
		*@return le nom de la matière demander
		*/
		string getNom();
		/**
		*@brief
		*Permet de donner un coeff à une matière
		*/
		void setCoeff(int new_var);
		/**
		*@brief
		*Permet de retourner le coeff de la matière
		*@return le coeff de la matiere demander
		*/
		int getCoeff();


	private:
		/**
		*
		*/
		string nom;
		/**
		*
		*/
		int coeff;
};//fin de la classe Matiere

#endif // MATIERE_H
