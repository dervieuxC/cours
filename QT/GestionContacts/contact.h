#ifndef CONTACT_H
#define CONTACT_H
#include<string>
#include<QString>
using namespace std;
class contact
{
private:
    int id;
    QString prenom;
    QString nom;
    QString adresseMail;
    QString numTelPortable;
public:
    contact();
    //contact(int monId ,QString monPrenom,QString monNom,QString monAdresseMail,QString monNumTelPortable);
    void setId(int monId);
    int getId();
    void setPrenom(QString monPrenom);
    QString getPrenom();
    void setNom(QString monNom);
    QString getNom();
    void setAdresseMail(QString monAdresseMail);
    QString getAdresseMail();
    void setNumTelPortable(QString monNumTelPortable);
    QString getNumTelPortbale();


};

#endif // CONTACT_H
