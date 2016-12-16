#include "Evaluation.h"

// Constructors/Destructors
//  

Evaluation::Evaluation ( ) {
}

Evaluation::Evaluation (int lId , int leCoeff , string laDate ){
	id=lId;
	coeff=leCoeff;
	date=laDate;
}

Evaluation::Evaluation (int lId , int leCoeff , string laDate , Matiere* laMatiere){
	id=lId;
	coeff=leCoeff;
	date=laDate;
	matiere=laMatiere;
}
/**
 * Set the value of matiere
 * @param new_var the new value of matiere
 */
void Evaluation::setMatiere ( Matiere* new_var )   {
	matiere = new_var;
}//fin de "setMatiere"

/**
 * Get the value of matiere
 * @return the value of matiere
 */
Matiere*  Evaluation::getMatiere ( )   {
	return matiere;
}//fin de "getMatiere"

/**
 * Set the value of id
 * @param new_var the new value of id
 */
void  Evaluation::setId ( int new_var )   {
	id = new_var;
}//fin de "setId"

/**
 * Get the value of id
 * @return the value of id
 */
int  Evaluation::getId ( )   {
	return id;
}//fin de "getId"

/**
 * Set the value of coeff
 * @param new_var the new value of coeff
 */
void  Evaluation::setCoeff ( int new_var )   {
	coeff = new_var;
}//fin de "setCoeff"

/**
 * Get the value of coeff
 * @return the value of coeff
 */
int  Evaluation::getCoeff ( )   {
	return coeff;
}//fin de "getCoeff";

void Evaluation::setDate (string laDate){
	date=laDate;
}// fin de "setDate"
string Evaluation::getDate() {
	return date;
}//fin de "getDate"

double Evaluation::moyenneEval ( ){
	double resultat;
	double somme=0;
	int nbNote=vectNote.size();
	for(int noNote=0;noNote<nbNote;noNote++){
		somme+=vectNote[noNote].getNote();
	}
	resultat=somme/nbNote;
	return resultat;
}//method pour calculer la moyenne 

void Evaluation::addNotes(){
	int test;
	test=0;
	do{
		Note newNote;
		newNote.saisieNote();
		vectNote.push_back(newNote);
		cout << "voulez vous ajouter une autre note? si non tapez 0!";
		cin >> test;
		cin.ignore(1);
	}while(test!=0);

}

void Evaluation::printNotesEval(){
	int nbNote=vectNote.size();
	for(int noNote=0;noNote<nbNote;noNote++){
		cout << vectNote[noNote].getNote() << endl;
	}
}

void Evaluation::saisieEval(Matiere* newMat,vector<Note>&leVecteur){
	int leCoeff;
	int lId;
	string laDate;
	int leSemestre;
	cout << "entrez le coeff de l'évaluation:" << endl;
	cin >> leCoeff;
	cin.ignore(1);
	setCoeff(leCoeff);
	cout << "entrez l'id de l'évaluation:" << endl;
	cin >> lId;
	cin.ignore(1);
	setId(lId);
	cout << "entrez la date de l'évaluation:" << endl;
	getline(cin,laDate);
	setDate(laDate);
	setMatiere(newMat);
	vectNote=leVecteur;
	cout << "entrez le semestre de l'évaluation" << endl;
	cin >> leSemestre;
	cin.ignore(1);
	setSemestre(leSemestre);
}	

void Evaluation::affiEval(int leNombre,vector<Eleve>&leVecteur){
	cout <<"la matière de l'évaluation est: " << getMatiere()->getNom() << endl;
	cout <<"le coeff de l'évaluation est: " << getCoeff() << endl ;
	cout <<"l'id de l'évaluation est: " << getId() << endl ;
	cout <<"la date de l'évaluation est: " << getDate() << endl ;
	cout <<"le semestre de l'évaluation est: " << getSemestre() << endl ;
	for(int noEleves=0;noEleves<leNombre;noEleves++)
	{
		cout << "Note de " << leVecteur[noEleves].getNom() << " " << leVecteur[noEleves].getPrenom() << ": " << vectNote[noEleves].getNote() << endl;
	}



}

vector<Note>& Evaluation::getVectNote()
{
	return vectNote;
}

void Evaluation::setSemestre( int monSem)
{
	semestre=monSem;
}

int Evaluation::getSemestre()
{
	return semestre;
}

