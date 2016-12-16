#include <string>
#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main(){
	map<string,int> mapNbJourMois;
	mapNbJourMois["janvier"]=31;
	mapNbJourMois["février"]=28;
	mapNbJourMois["mars"]=31;
	mapNbJourMois["avril"]=30;
	mapNbJourMois["mai"]=31;
	mapNbJourMois["juin"]=30;
	mapNbJourMois["juillet"]=31;
	mapNbJourMois["aout"]=31;
	mapNbJourMois["septembre"]=30;
	mapNbJourMois["octobre"]=31;
	mapNbJourMois["novembre"]=30;
	mapNbJourMois["décembre"]=31;
	string choix;
	cout << "veuillez entrer le nom du moi duquel vous souhaitez connaitre son nombre de jour, tapez 0 pour quitter le programme:" << endl;
	do
	{
		getline(cin,choix);
		if (mapNbJourMois.count(choix)>0)
		{
			cout << mapNbJourMois[choix] << endl;
			cout << "veuillez entrer le nom du moi duquel vous souhaitez connaitre son nombre de jour, tapez 0 pour quitter le programme:" << endl;
		}
		else
		{
			cout << "votre saisie ne correspond pas veuillez entrer votre mois en majuscule et avec les accents ,tapez 0 pour quitter le programme"<< endl;
		}
	}while(!(choix=="0"));
	for(map<string,int>::iterator i=mapNbJourMois.begin(); i!=mapNbJourMois.end(); ++i) {
		cout << i->first << endl;
		cout << i->second << endl;
	}
	return 0;
}
