#include <string>
#include <iostream>
#include "meuble.h"
using namespace std;
int main(){
	Meuble* meu1=new Meuble("lit",1,5);
	Meuble* meu2=new Meuble("chaise",100,6);
	Meuble* meu3=new Meuble("buffet",263,14);
	cout << "le nombre de meuble est de :" << Meuble::nbMeuble << endl;
	delete meu1;
	cout << "le nombre de meuble est de :" << Meuble::nbMeuble << endl;
	return 0;
}
