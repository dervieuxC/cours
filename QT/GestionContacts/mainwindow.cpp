#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    chargerDB();
}
void MainWindow::chargerDB()
{
    qDebug()<<"void MainWindow::chargerDB()";
    //écriture de la requete
    QSqlQuery repContact("select * from Contact;");
    //tant qu'il y a des lignes dans la réponse de la requete
    while(repContact.next())
    {
        qDebug() << "Requete";
        //recuperation des données d'une certaine ligne de la table
        int idContact=repContact.value(0).toInt();
        QString prenomContact=repContact.value(1).toString();
        QString nomContact=repContact.value(2).toString();
        QString adresseMailContact=repContact.value(3).toString();
        QString numTelPortableContact=repContact.value(4).toString();
        //création d'un contact
        contact newContact;
        //ini de ce contact avec les valeurs prise dans la bdd
        newContact.setId(idContact);
        newContact.setPrenom(prenomContact);
        newContact.setNom(nomContact);
        newContact.setAdresseMail(adresseMailContact);
        newContact.setNumTelPortable(numTelPortableContact);
        //insertion de ce contact dans le vecteur de contact
        vectContact.push_back(newContact);
        //insertion de ce contact dans la combo box
        ui->comboBoxContact->addItem(QString::number(idContact)+" "+nomContact+" "+prenomContact);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonAjouter_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonAjouter_clicked()";
    Dialog newDialog;
    if (newDialog.exec()==QDialog::Accepted)
            //&& (newDialog.getNewNom()!="" || newDialog.getNewPrenom()!="" || newDialog.getNewAdresseMail()!="" || newDialog.getNewNumTelPortable()!="")
            //&& (newDialog.getNewNumTelPortable().length()==10 || newDialog.getNewNumTelPortable()=="")
            //&& (newDialog.getNewAdresseMail()=="" ||newDialog.getNewAdresseMail()==""))
    {
        //permet de récupérer les infos de la boite de dialog
        QString newNom =newDialog.getNewNom();
        QString newPrenom=newDialog.getNewPrenom();
        QString newAdresseMail=newDialog.getNewAdresseMail();
        QString newNumTelPortable=newDialog.getNewNumTelPortable();
        contact newContact;
        //si il n'y a pas de contact dans levecteur
        if (vectContact.size()==0)
        {
            //ini de l'id du nouveau contact
            newId=1;
            newContact.setId(1);
        }
        //sinon
        else
        {
            //ini de l'id du nouveau contact
            newId=(vectContact[vectContact.size()-1].getId())+1;
            newContact.setId((vectContact[vectContact.size()-1].getId())+1);
        }
        //ini des autres caractéristique du contact
        newContact.setPrenom(newPrenom);
        newContact.setNom(newNom);
        newContact.setAdresseMail(newAdresseMail);
        newContact.setNumTelPortable(newNumTelPortable);
        //permet de mettre le contact créer dans le vecteur
        vectContact.push_back(newContact);
        QString stringId=QString::number(newId);
        //permet de mettre le contact créer dans la combo box
        ui->comboBoxContact->addItem(stringId+" "+newNom+ " "+newPrenom);
        QSqlQuery newQuery;
        //écriture de la requete
        QString texteRequete="insert into Contact values('";
        texteRequete+=QString::number(newId);
        texteRequete+="','";
        texteRequete+=newNom;
        texteRequete+="','";
        texteRequete+=newPrenom;
        texteRequete+="','";
        texteRequete+=newAdresseMail;
        texteRequete+="','";
        texteRequete+=newNumTelPortable;
        texteRequete+="');";
        qDebug()<<texteRequete;
        //execution de la requete
        newQuery.exec(texteRequete);
    }
}

void MainWindow::on_comboBoxContact_activated(const QString &arg1)
{
    qDebug()<<"void MainWindow::on_comboBoxContact_activated(const QString &arg1)";
    int nbContact=vectContact.size();//ini de nb de contact
    //pour tout les contacts
    for (int noContact=0;noContact<nbContact;noContact++)
    {
        //comparaison de la case choisie avec les contacts
        QString testArg1 =QString::number(vectContact[noContact].getId())+ " "+vectContact[noContact].getNom()+ " "+vectContact[noContact].getPrenom();
        if(arg1==testArg1)
        {
            //le contactCourant devient le contact sélectionner
            contactCourant=&vectContact[noContact];

        }
    }
    //écriture des données dans les labels
    ui->labelNom->setText(contactCourant->getNom());
    ui->labelPrenom->setText(contactCourant->getPrenom());
    ui->labelAdresseMail->setText(contactCourant->getAdresseMail());
    ui->labelNumTelPortable->setText(contactCourant->getNumTelPortbale());
    ui->pushButtonSuppression->setEnabled(contactCourant->getNumTelPortbale().length()==10);
    ui->pushButtonModifNom->setEnabled(contactCourant->getNumTelPortbale().length()==10);
    ui->pushButtonModifPrenom->setEnabled(contactCourant->getNumTelPortbale().length()==10);
    ui->pushButtonModifAdresseMail->setEnabled(contactCourant->getNumTelPortbale().length()==10);
    ui->pushButtonModifNumPortable->setEnabled(contactCourant->getNumTelPortbale().length()==10);
}

void MainWindow::on_pushButtonSuppression_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonSuppression_clicked()";
    //pour tout les contacts
    for (int noContact=0;noContact<vectContact.size();noContact++)
    {
        //si l'id du contact est égal a l'id du contact courant
        if(contactCourant->getId()==vectContact[noContact].getId())
        {
            QSqlQuery newQuery;
            //écriture de la requete
            QString texteRequete="delete from Contact where id=";
            texteRequete+=QString::number(contactCourant->getId());
            texteRequete+=";";
            qDebug()<<texteRequete;
            //suppression dans la bdd
            newQuery.exec(texteRequete);
            //clear de tout les labels
            ui->labelNom->clear();
            ui->labelPrenom->clear();
            ui->labelAdresseMail->clear();
            ui->labelNumTelPortable->clear();
            //suppression du contact dans le vecteur de contact
            vectContact.remove(noContact);
            //suppression du contact dans la combo box
            ui->comboBoxContact->removeItem(noContact);
        }
    }
}


void MainWindow::on_pushButtonModifNom_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonModifNom_clicked()";
    Modif newModif;
    if(newModif.exec()==QDialog::Accepted)
    {
        QString nomModif=newModif.getModif();
        contactCourant->setNom(nomModif);
        QSqlQuery newQuery;
        QString texteRequete="update Contact set nom = '";
        texteRequete+=nomModif;
        texteRequete+="' where id=";
        texteRequete+=QString::number(contactCourant->getId());
        texteRequete+=";";
        qDebug()<<texteRequete;
        newQuery.exec(texteRequete);
        ui->labelNom->setText(nomModif);
        int nbLigne= ui->comboBoxContact->currentIndex();
        //ui->comboBoxContact->setItemText(nbLigne,);
    }
}

void MainWindow::on_pushButtonModifPrenom_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonModifPrenom_clicked()";
    Modif newModif;
    if(newModif.exec()==QDialog::Accepted)
    {
        QString prenomModif=newModif.getModif();
        contactCourant->setPrenom(prenomModif);
        QSqlQuery newQuery;
        QString texteRequete="update Contact set prenom = '";
        texteRequete+=prenomModif;
        texteRequete+="' where id=";
        texteRequete+=QString::number(contactCourant->getId());
        texteRequete+=";";
        qDebug()<<texteRequete;
        newQuery.exec(texteRequete);
        ui->labelPrenom->setText(prenomModif);
    }
}

void MainWindow::on_pushButtonModifAdresseMail_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonModifAdresseMail_clicked()";
    Modif newModif;
    if(newModif.exec()==QDialog::Accepted)
    {
        QString adresseMailModif=newModif.getModif();
        contactCourant->setAdresseMail(adresseMailModif);
        QSqlQuery newQuery;
        QString texteRequete="update Contact set adresseMail = '";
        texteRequete+=adresseMailModif;
        texteRequete+="' where id=";
        texteRequete+=QString::number(contactCourant->getId());
        texteRequete+=";";
        qDebug()<<texteRequete;
        newQuery.exec(texteRequete);
        ui->labelAdresseMail->setText(adresseMailModif);
    }
}

void MainWindow::on_pushButtonModifNumPortable_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonModifNumPortable_clicked()";
    ModifTel newModif;
    if(newModif.exec()==QDialog::Accepted)
    {
        QString numPortableModif=newModif.getModifNumPortable();
        contactCourant->setNumTelPortable(numPortableModif);
        QSqlQuery newQuery;
        QString texteRequete="update Contact set numeroTelPortable = '";
        texteRequete+=numPortableModif;
        texteRequete+="' where id=";
        texteRequete+=QString::number(contactCourant->getId());
        texteRequete+=";";
        qDebug()<<texteRequete;
        newQuery.exec(texteRequete);
        ui->labelNumTelPortable->setText(numPortableModif);
    }
}

void MainWindow::on_action_Quitter_triggered()
{
    close();
}
