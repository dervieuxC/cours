#include "Section.h"

// Constructors/Destructors
//  

Section::Section ( ) {
}

Section::Section (string leNom ){
	nom=leNom;
}
/**
 * Set the value of nom
 * @param new_var the new value of nom
 */
void Section::setNom ( string new_var )   {
	nom = new_var;
}//fin de "setNom"

/**
 * Get the value of nom
 * @return the value of nom
 */
string Section::getNom ( )   {
	return nom;
}//fin de "getNom"

/**
 * Get the value of vectEleves
 * @return the value of vectEleves
 */
vector<Eleve> Section::getVectEleves ( )   {
	return vectEleves;
}//fin de "getVectEleves"

void Section::saisieSection(){
	string leNom;
	cout << "entrez le nom de section:" << endl;
	getline(cin,leNom);
	setNom(leNom);
}
void Section::addEleves()
{
	int test;
	test=0;
	cout << "test" << endl;
	do
	{
		Eleve elv1;
		elv1.saisieEleve();
		vectEleves.push_back(elv1);
		cout << "voulez vous ajouter un autre élève? si non tapez 0!";
		cin >> test;
		cin.ignore(1);
	}while(test!=0);
	int nbEleves;
	nbEleves=vectEleves.size();	
	for(int noEleves=0;noEleves<nbEleves;noEleves ++)
	{
		cout << vectEleves[noEleves].getNom() << " " << vectEleves[noEleves].getPrenom() << endl;		}
}//fin de la méthode addEleves

void Section::addEvals()
{
	vector<Note> vectNoteEval;
	int nbEleves=vectEleves.size();
	Note note1;
	Matiere* laMatiere;
	laMatiere=matiereSelector(vectMatSec);
	Evaluation newEval;
	for(int noEleves=0;noEleves<nbEleves;noEleves++)
	{
		cout << "entrez la note de " << vectEleves[noEleves].getNom() << " " << vectEleves[noEleves].getPrenom() << ": " << endl;
		note1.setProprietaire(&vectEleves[noEleves]);
		note1.saisieNote();
		vectNoteEval.push_back(note1);		
	}
	newEval.saisieEval(laMatiere,vectNoteEval);
	vectEvals.push_back(newEval);
}//fin de la méthode addEvals

void Section::gerer(vector<Matiere> vectMat)
{
	int choix;
	do
	{
		cout << "---------------Gérer une Section-----------------" << endl;
		cout << "1:consulter Section" << endl;
		cout << "2:ajouter un élève" << endl;
		cout << "3:ajouter une évaluation" << endl;
		cout << "4:ajouter une matiere" << endl;
		cout << "5:consulter évaluation" << endl;
		cout << "6:afficher les moyennes par eleve et par matiere" << endl;
		cout << "0:Quitter" << endl;
		cin >> choix;
		cin.ignore(1);
		switch (choix)
		{
			case 1:this->affiDetailSection(vectEleves);break;
			case 2:this->addEleves();break;
			case 3:this->addEvals();break;
			case 4:this->addMatiereSection(vectMat);break;
			case 5:affiEvals();break;
			case 6:preparerBulletins();afficherMoyennesParEleveEtParMatiere();break;
			case 0:;break;
		}

	}while(choix !=0);

}//fin de la méthode gerer

void Section::affiDetailSection(vector<Eleve>&leVecteur)
{
	cout << "nom de la section:" << this->getNom() << endl;
	int nbEleves=leVecteur.size();
	for(int noEleve=0;noEleve<nbEleves;noEleve++)
	{
		cout << "nom élève" << noEleve+1 << ":" << leVecteur[noEleve].getNom() << "  prénom élève" << noEleve+1 <<":"<< leVecteur[noEleve].getPrenom() << endl;
	}//fin de la boucle pour afficher les élèves
	int nbMat=vectMatSec.size();
	for(int noMat=0;noMat<nbMat;noMat++)
	{
		cout << "matière" << noMat+1 << ":" << vectMatSec[noMat]->getNom() << endl;
	}//fin de la boucle pour afficher les matières

}// fin de la fonction affiDetailSection

Matiere* Section::matiereSelector(vector<Matiere*>leVecteur)
{
	int numChoisie;
	int nbMatiere=leVecteur.size();
	//si il n'y a pas de matière 
	if(nbMatiere==0)return NULL;
	else
	{
		//si il y a une seule matière dans le vecteur
		if(nbMatiere==1)return leVecteur[0];
		else
		{
			//saisie contrôlée d'un numéro de matière correct
			do
			{
				//affichage de toutes les matières de la section
				for(int noMat=0;noMat<nbMatiere;noMat++)
				{	
					cout << noMat << ": " << leVecteur[noMat]->getNom() << endl;
				}
				//choix par l'utilisateur du n° de case souhaité
				cout << "tapez le num de la matiere choisie,-1pour annuler";
				cin >> numChoisie;
				cin.ignore(1);
			}while(!(numChoisie==-1 || (numChoisie>=0 && numChoisie<nbMatiere)));
			//sortie de boucle quand pas de choix(-1) ou numero correspondant bien à une matière
			if(numChoisie==-1)return NULL;
			else return leVecteur[numChoisie];
		}	
	}
}//fin de la fonction matiereSelector


void Section::affiMatiereSection(vector<Matiere>&leVecteur)
{
	int nbMatiere=leVecteur.size();
	//affichage de toute les matières de la section
	for(int noMat=0;noMat<nbMatiere;noMat++)
	{	
		cout << leVecteur[noMat].getNom() << endl;

	}
}//fin de la méthode affiMatiereSection
void Section::addMatiereSection(vector<Matiere> &leVecteur)
{	
	int choixMat;
	Matiere* matiereChoisie;
	int nbMat=leVecteur.size();
	int compareMat;
	vector<Matiere*> vectMatTest;
	//
	for(int noMat=0;noMat<nbMat;noMat++)
	{
		compareMat=this->comparerMatiere(leVecteur[noMat].getNom());
		//si la matière n'est pas encore dans la section
		if(compareMat==1)
		{
			vectMatTest.push_back(&leVecteur[noMat]);
		}		
	}
	int nbMat2=vectMatTest.size();
	//affiche les matières qui ne sont pas dans la section
	for(int noMat2=0;noMat2<nbMat2;noMat2++)
	{
		cout << noMat2 << ": " << vectMatTest[noMat2]->getNom() << endl;
	}
	cout << "Entrer le votre choix de matière" << endl;
	cin >> choixMat;
	cin.ignore(1);
	matiereChoisie=vectMatTest[choixMat];
	vectMatSec.push_back(matiereChoisie);

}//fin de la méthode addMatiereSection

int Section::comparerMatiere(string maMatiere)
{
	int nbMat=vectMatSec.size();
	for(int noMat=0;noMat<nbMat;noMat++)
	{
		string uneMatiere = vectMatSec[noMat]->getNom();
		//si la matière correspond à une matière de la section
		if(maMatiere== uneMatiere)
		{
			return 0;
		}
	}
	return 1;	
}//fin de la fonction comparerMatiere

void Section::affiEvals()
{
	int nbEleves=vectEleves.size();
	int nbEvals=vectEvals.size();
	//affiche toute les informations de toutes les évaluations
	for(int noEvals=0;noEvals<nbEvals;noEvals++)
	{
		cout << "---------------------Evaluation" << noEvals+1 <<"----------------------" << endl; 
		vectEvals[noEvals].affiEval(nbEleves,vectEleves);
		//affiche la note de chaque élève
		cout << "la moyenne de l'éval est: " << vectEvals[noEvals].moyenneEval() << endl;

	}
}//fin de la méthode affiEvals

void Section::preparerBulletins()
{
	//je vide la map
	mapDesNotesParEleveEtParMatiere.clear();
	int nbEval=vectEvals.size();
	//cout << "nombre d'eval" << nbEval << endl;
	Matiere* mat;
	Eleve* eleve;
	Note* note;
	for(int noEval=0;noEval<nbEval;noEval++)
	{

		Evaluation* evalActuelle=&(vectEvals[noEval]);
		vector<Note> &vectTest=evalActuelle->getVectNote();
		mat=evalActuelle->getMatiere();
		int nbNotes=vectTest.size();
		//cout << "nombre de note" << nbNotes << endl;
		for(int noNote=0;noNote<nbNotes;noNote++)
		{
			note=&(vectTest[noNote]);
			eleve=note->getProprietaire();
			//cout << "l'eleve" << eleve << endl;
			//cout << "la note avant de la mettre dans la map:" << note->getNote() << endl;
			mapDesNotesParEleveEtParMatiere[eleve][mat].push_back(note);
			//cout << "la note dans map" << mapDesNotesParEleveEtParMatiere[eleve][mat][noNote]->getNote()<<endl;
		}
	}
//afficherMapEntiere();
}//fin de la méthode prepareBulletins

void Section::afficherMoyennesParEleveEtParMatiere()
{
//afficherMapEntiere();
	for(map<Eleve*,map<Matiere*,vector<Note*> > >::iterator itEleve=mapDesNotesParEleveEtParMatiere.begin(); itEleve!=mapDesNotesParEleveEtParMatiere.end(); itEleve++)
	{
		itEleve->first->affiEleve();
		map<Matiere*,vector<Note*> > newMap= itEleve->second;
		for(map<Matiere*,vector<Note*> >::iterator itMat=newMap.begin(); itMat!=newMap.end(); itMat++)
		{
			vector<Note*> &vectSesNotes=itMat->second;
			Matiere* pMat=itMat->first;
			float total=0;
			for(int noNote=0;noNote<vectSesNotes.size();noNote++)
			{
				//cout << "la note:" << vectSesNotes[noNote]->getNote() << endl;
				total+=vectSesNotes[noNote]->getNote();
				//cout << "le total" << total << endl;
			}
			cout << "moyenne de "<<pMat->getNom() << ": "  << total/(float)vectSesNotes.size() << "/20" << endl;
		}	
	}

}//fin de la méthode afficherMoyennesParEleveEtParMatiere

void Section::afficherMapEntiere()
{
	for(map<Eleve*,map<Matiere*,vector<Note*> > >::iterator itEleve=mapDesNotesParEleveEtParMatiere.begin(); itEleve!=mapDesNotesParEleveEtParMatiere.end(); itEleve++)
	{
		itEleve->first->affiEleve();
		//itEleve->second->affiNote();
		mapDesNotesParEleveEtParMatiere.find(itEleve->first);
		map<Matiere*,vector<Note*> > newMap= itEleve->second;
		for(map<Matiere*,vector<Note*> >::iterator itMat=newMap.begin(); itMat!=newMap.end(); itMat++)
		{
			itMat->first->affiMatiere();
			//itMat->second[0]->affiNote();
			for(int noNote=0;noNote<itMat->second.size();noNote++)
			{
				itMat->second[noNote]->affiNote();
			}
		}
	}
}
