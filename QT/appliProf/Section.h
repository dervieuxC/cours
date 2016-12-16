#ifndef SECTION_H
#define SECTION_H
#include "eleve.h"
#include "Evaluation.h"
#include "Note.h"
#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

/**
 * class Section
 * 
 */

class Section
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
        vector<Eleve> vectEleves;
		/**
		*
		*
		*/
		vector<Evaluation> vectEvals;
		/**
		*
		*
		*/
		vector<Matiere*> vectMatSec;
		/**
		*
		*
		*/
		map<Eleve*,map<Matiere*,vector<Note*> > > mapDesNotesParEleveEtParMatiere;
	public:

		//constructeur
		/**
		*@brief constructeur vide
		*Permet de créer une section sans donner de valeur au variable
		*/
		Section ( );
		/**
		*@brief constructeur nom
		*permet de créer une section en lui donnant le nom 
		*/
		Section ( string leNom );
		//method
		/**
		*@brief saisir une section
		*Permet à l'utilisateur de saisir les valeurs d'une section
		*/
		void saisieSection();
	//	void affiSection();
		/**
		*@brief ajouter élèves
		*Permet à l'utilisateur d'ajouter une élève dans la section
		*/
        void addEleves(Eleve elv1);
		/**
		*@brief ajouter évaluation
		*Permet à l'utilisateur d'ajouter une évaluation dans la section
		*/
		void addEvals();
		/**
		*@brief menu section
		*Permet d'afficher le menu de la section et de gérer le choix de l'utilisateur
		*@param vecteur de toute les matière éxistante
		*/
		void gerer(vector<Matiere> vectMat);
		/**
		*@brief afficher les détaille de la section
		*Permet d'afficher le nom de la section, le nom de tout les élèves et de toute les matière saisie dans celle-ci
		*/
		void affiDetailSection(vector<Eleve>&leVecteur);
		/**
		*@brief affiche les matières
		*Permet d'afficher toute les matières de la section 
		*/
		void affiMatiereSection(vector<Matiere>&leVecteur);
		/**
		*@brief ajouter une matière à la section
		*Affiche les matières qui ne sont pas encore présente dans la section et l'utilisateur peut choisir celle qu'il veut ajouter à la section
		*@param veceteur de toute les matières
		*/
		void addMatiereSection(vector<Matiere> &leVecteur);
		/**
		*@brief comparer une matière  
		*permet de comparer une matière du vecteur avec toute celle du vecteur qui contient les matière de la section
		*@param nom d'une matière
		*/
		int comparerMatiere(string maMatiere);
		/**
		*@brief selection matière
		*Permet de d'afficher les matière et l'utilisateur peut sélectionner la matière qu'il veut
		*/
		Matiere* matiereSelector(vector<Matiere*>leVecteur);
		/**
		*@brief affiche évaluation
		*Permet d'afficher les évaluations 
		*/	
		void affiEvals();
		//ascesseur
		/**
		*@brief
		*Permet de donner un nom à la section
		*/
		void setNom ( string new_var );
		/**
		*@brief
		*Permet de retourner le nom de la section
		*/
		string getNom ( );
		/**
		*@brief
		*Permet de retourner le vecteur
		*/
		vector<Eleve> getVectEleves ( );
		/**
		*@brief prépare les bulletin
		*Permet de remplir la map des notes par eleve et par matiere
		*/
		void preparerBulletins();
		/**
		*@brief affiche les moyennes de chaque eleve dans chaque matiere
		*Permet à l'aide de la map des notes par eleve et par matiere de pouvoir calculer la moyenne de chaque eleve par matiere
		*/
		void afficherMoyennesParEleveEtParMatiere();
		/**
		*
		*
		*/
		void afficherMapEntiere();
        void addMatiere(Matiere* mat1);
        vector<Matiere *> &getVectMat();
};//fin de la classe Section

#endif // SECTION_H
