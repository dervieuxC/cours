#include <string>
#include <iostream>
#include <vector>
#include "eleve.h"
#include "Section.h"
#include "Matiere.h"
#include "Note.h"
using namespace std;
vector<Section> vectSec;
vector<Matiere> vectMat;
/**
*@brief créer section
*Permet à l'utilisateur de créer une section en entrant ces propriétés 
*/
void creerSection()
{
	Section newSec;
	newSec.saisieSection();
	vectSec.push_back(newSec);
}//fin de la fonction creerSection

void affiSection(vector<Section>&leVecteur)
{
	int nbSection=leVecteur.size();
	//Affiche toute les Sections
	for(int noSec=0;noSec<nbSection;noSec++)
	{
		cout << noSec << ": " << leVecteur[noSec].getNom() << endl;
	}
}//fin de la fonction affiSection

Section* sectionSelector(vector<Section>&leVecteur)
{
	int numChoisie;
	int nbSection=leVecteur.size();
	//si il n'y a pas de section de le vecteur
	if(nbSection==0)return NULL;
	else
	{
		//si il n'y a que une seule section dans le vecteur section
		if(nbSection==1)return&leVecteur[0];
		else
		{
			do
			{
				affiSection(vectSec);
				//utilisateur entre le numéro de la section choisie
				cout << "tapez le num de la section choisie,-1 pour annuler";
				cin >> numChoisie;
				cin.ignore(1);
			}while(!(numChoisie==-1 || (numChoisie>=0 && numChoisie<nbSection)));
			if(numChoisie==-1)return NULL;
			else return &leVecteur[numChoisie];
		}
	}
}//fin de la fonction sectionSelector

void affiMatiere(vector<Matiere>&leVecteur)
{
	int nbMatiere=leVecteur.size();
	//Affiche toute les matières
	for(int noMat=0;noMat<nbMatiere;noMat++)
	{	
		cout << noMat << ": " << leVecteur[noMat].getNom() << endl;
	}
}//fin de la fonction affiMatiere

void creerMatiere()
{
	Matiere newMat;
	newMat.saisieMatiere();
	vectMat.push_back(newMat);
}//fin de la fonction creerMatiere


int main(){
	Matiere mat1("Anglais");
	Matiere mat2("SLAM4");
	Matiere mat3("cultureG");
	vectMat.push_back(mat1);
	vectMat.push_back(mat2);
	vectMat.push_back(mat3);

	Section sec1("SIO1");
	Section sec2("SIO2");
	vectSec.push_back(sec1);
	vectSec.push_back(sec2);

	Section newSection;
	Section* sectionChoisie;

	int choix;
	//Menu principale
	do
	{
	cout << "---------------Menu Principale-----------------" << endl;
	cout << "1:créer une section" << endl;
	cout << "2:gérer une section" << endl;
	cout << "3:consulter les sections" << endl;
	cout << "4:créer une matiere" << endl;
	cout << "5:consulter les matieres" << endl;
	cout << "0:Quitter" << endl;
	cin >> choix;
	cin.ignore(1);
			switch (choix)
		{
			case 1:creerSection();break;
			case 2:sectionChoisie=sectionSelector(vectSec);
			       if(sectionChoisie!=NULL)
			       {
				       sectionChoisie->gerer(vectMat);
			       }				
			       break;
			case 3:affiSection(vectSec);break;
			case 4:creerMatiere();break;
			case 5:affiMatiere(vectMat);
			case 0:break;
		}
	}while(choix !=0);

	return 0;
}

