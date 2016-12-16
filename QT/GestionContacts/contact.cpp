#include "contact.h"

contact::contact()
{
}
void contact::setId(int monId)
{
    id=monId;
}
int contact::getId()
{
    return id;
}
void contact::setPrenom(QString monPrenom)
{
    prenom=monPrenom;
}
QString contact::getPrenom()
{
    return prenom;
}
void contact::setNom(QString monNom)
{
    nom=monNom;
}
QString contact::getNom()
{
    return nom;
}
void contact::setAdresseMail(QString monAdresseMail)
{
    adresseMail=monAdresseMail;
}
QString contact::getAdresseMail()
{
    return adresseMail;
}
void contact::setNumTelPortable(QString monNumTelPortable)
{
    numTelPortable=monNumTelPortable;
}
QString contact::getNumTelPortbale()
{
 return numTelPortable;
}
