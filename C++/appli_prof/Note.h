 #ifndef NOTE_H
#define NOTE_H
#include "eleve.h"
#include <string>
#include <iostream>
using namespace std;
/**
 * class Note
 * 
 */

class Note
{
	private:

		float note;
		Eleve* proprietaire;

	public:

		/**
		 * Empty Constructor
		 */
		Note ( );
		//method
		/**
		*@brief saisie d'une note
		*Permet de saisir les informations d'une note
		*/
		void saisieNote();
		/**
		*@brief affiche une note
		*Permet d'afficher les informations d'une note
		*/
		void affiNote();
		//ascesseur
		/**
		*@brief
		*Permet de donner une note
		*/
		void setNote ( float new_var );
		/**
		*@brief 
		*Permet de retourner la note
		*/
		float getNote ( );
		/**
		*@brief
		*Permet de donner un propriétaire à la note
		*/
		void setProprietaire ( Eleve* new_var );
		/**
		*@brief
		*Permet de retourner le propriétaire de la note 
		*/
		Eleve* getProprietaire ( );

};//fin de la classe Note

#endif // NOTE_H
