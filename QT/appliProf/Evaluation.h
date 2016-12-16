#ifndef EVALUATION_H
#define EVALUATION_H
#include "Matiere.h"
#include "Note.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
/**
 * class Evaluation
 * 
 */

class Evaluation
{

	private:
		Matiere* matiere;
		int id;
		vector<Note> vectNote;
		int coeff;
		string date;
		int semestre;


	public:
		/**
		*@brief constructeur vide
		*Permet de créer une évaluation 
		*/
		Evaluation ( );
		/**
		*@brief constructeur id+coeff+date
		*Permet d'instancier une évaluation en lui donnant un id, un coeff et une date
		*@param l'id puis le coeff et enfin la date de l'évaluation que l'on veut créer
		*/
		Evaluation (int lId , int leCoeff , string laDate );
		/**
		*@brief constructeur id+coeff+date+matiere
		*Permet d'instancier une évaluation en lui donnant un id, un coeff, une date et une matière
		*@param l'id puis le coeff puis la date et enfin une matière de l'évaluation que l'on veut créer
		*/
		Evaluation (int lId , int leCoeff , string laDate , Matiere* laMatiere);
		//method
		/**
		*@brief moyenne évaluation
		*Permet de calculer la moyenne d'une évaluation
		*/
		double moyenneEval();
		/**
		*@brief ajouter notes
		*Permet d'ajouter des notes dans le vecteur notes d'une évaluation
		*/
		void addNotes();
		/**
		*@brief afficher notes de l'évaluation
		*Permet d'affiche toutes les notes d'une évaluation précise
		*/
		void printNotesEval();
		/**
		*@brief saisie évaluation
		*Permet à l'utilisateur de saisir une évaluation
		*@param une matière
		*/
		void saisieEval(Matiere* newMat,vector<Note>&leVecteur);
		/**
		*@brief afficher évaluation
		*Permet d'afficher le descriptif d'une évaluation 
		*/
		void affiEval(int leNombre,vector<Eleve>&leVecteur);
		//ascesseur
		/**
		*@brief
		*Permet de donner une matiere à l'évaluation
		*/
		void setMatiere ( Matiere* new_var );
		/**
		*@brief
		*permet de retourner la matière d'une évaluation
		*/
		Matiere* getMatiere ( ) ; 
		/**
		*@brief
		*Permet de donner un id à l'évaluation
		*/
		void setId ( int new_var );
		/**
		*@brief 
		*Permet de retourner l'id de l'évaluation
		*/
		int getId ( );
		/**
		*@brief
		*Permet de donenr un coeff à l'évaluation
		*/
		void setCoeff ( int new_var );
		/**
		*@brief
		*Permet de retourner un coeff de l'évaluation
		*/
		int getCoeff ( );
		/**
		*@brief 
		*Permet de donner une date à l'évaluation
		*/
		void setDate (string laDate);
		/**
		*@brief 
		*Permet de retourner la date de l'évaluation
		*/
		string getDate();
		vector<Note>& getVectNote();
		/**
		*@brief
		*
		*/
		void setSemestre( int monSem);

		/**
		*@brief
		*
		*/
		int getSemestre();
};//fin de la classe Evaluation

#endif // EVALUATION_H
