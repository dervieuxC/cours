#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QInputDialog>
#include <QListWidgetItem>
#include <QTableWidgetItem>
#include "Matiere.h"
#include "Section.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    qDebug()<<"MainWindow::MainWindow(QWidget *parent)";
    ui->setupUi(this);
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
    ui->comboBoxMatiere->addItem(QString::fromStdString(mat1.getNom()));
    ui->comboBoxMatiere->addItem(QString::fromStdString(mat2.getNom()));
    ui->comboBoxMatiere->addItem(QString::fromStdString(mat3.getNom()));
    ui->comboBoxSection->addItem(QString::fromStdString(sec1.getNom()));
    ui->comboBoxSection->addItem(QString::fromStdString(sec2.getNom()));
    verifSection=0;

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_actionQuitter_triggered()
{
    qDebug()<<"void MainWindow::on_actionQuitter_triggered()";
     QMessageBox msgBox;
     msgBox.setText("Voulez vous vraiment quitter");
     msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
     msgBox.setDefaultButton(QMessageBox::No);
     int ret = msgBox.exec();
     if (ret==QMessageBox::Yes)
     close();
}

void MainWindow::on_pushButtonSection_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonSection_clicked()";
         bool ok;
         QString nomSection = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                         tr("Section:"), QLineEdit::Normal,"nomSection",&ok);
         if (ok && !nomSection.isEmpty())
           {
             int test = ui->comboBoxSection->findText(nomSection);
             if(test==-1)
               {
               Section newSec;
               newSec.setNom(nomSection.toStdString());
               vectSec.push_back(newSec);
               ui->comboBoxSection->addItem(nomSection);
               }
             else
               ui->statusBar->showMessage(tr("this section is already exist"),3000);
           }
}

void MainWindow::on_pushButtonMatiere_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonMatiere_clicked()";
    bool ok;
    QString nomMat = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                    tr("Subject:"), QLineEdit::Normal,"nomMatiere",&ok);
    if (ok && !nomMat.isEmpty())
      {
        int test = ui->comboBoxMatiere->findText(nomMat);
        if(test==-1)
          {
          Matiere newMat;
          newMat.setNom(nomMat.toStdString());
          newMat.setCoeff(1);
          vectMat.push_back(newMat);
          ui->comboBoxMatiere->addItem(nomMat);
          }
       else
        ui->statusBar->showMessage(tr("this subject is already exist"),3000);
    }

}

void MainWindow::on_pushButtonAddEleve_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonAddEleve_clicked()";
    if (verifSection==1)
    {
    QString nomEleve= ui->lineEditNomEleve->text();
    QString prenomEleve=ui->lineEditPrenomEleve->text();
    QTableWidgetItem *newNom=new QTableWidgetItem(nomEleve);
    QTableWidgetItem *newPrenom=new QTableWidgetItem(prenomEleve);   
    int nbEleve=ui->tableWidgetEleves->rowCount();
    //ajout d'une ligne au tableWidget
    nbEleve++;
    ui->tableWidgetEleves->setRowCount(nbEleve);
    ui->tableWidgetEleves->setItem(nbEleve-1,0,newNom);
    ui->tableWidgetEleves->setItem(nbEleve-1,1,newPrenom);   
    Eleve newEleve;
    newEleve.setNom(nomEleve.toStdString());
    newEleve.setPrenom(prenomEleve.toStdString());
    sectionCourante->addEleves(newEleve);
    }
    else
        ui->statusBar->showMessage(tr("pls choose a section"),3000);

}

void MainWindow::on_pushButtonAddMatiere_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonAddMatiere_clicked()";
    if (verifSection==1)
    {
       vector<Matiere*>& testVectMat=sectionCourante->getVectMat();
       int nbMatSec=testVectMat.size();
       if(nbMatSec==0)
       {
           ui->listWidgetMatiere->addItem(ui->comboBoxMatiere->currentText());
           int nbMat = vectMat.size();
           for( int noMat=0;noMat<nbMat;noMat++)
           {
               if(QString::fromStdString(vectMat[noMat].getNom())==ui->comboBoxMatiere->currentText())
               {
                   sectionCourante->addMatiere(&vectMat[noMat]);
               }
           }
       }
       else
       {
           int noMatSec=0;
           while(!(QString::fromStdString(testVectMat[noMatSec]->getNom())==ui->comboBoxMatiere->currentText() || noMatSec==nbMatSec))
           {
               if(noMatSec==nbMatSec-1)
               {
                    ui->listWidgetMatiere->addItem(ui->comboBoxMatiere->currentText());
                    int nbMat = vectMat.size();
                    for( int noMat=0;noMat<nbMat;noMat++)
                    {
                        if(QString::fromStdString(vectMat[noMat].getNom())==ui->comboBoxMatiere->currentText())
                        {
                            sectionCourante->addMatiere(&vectMat[noMat]);
                        }
                    }
               }
            noMatSec++;
           }
        }
       }
    else
        ui->statusBar->showMessage(tr("pls choose a section"),3000);
  //  else
    //   ui->statusBar->showMessage(tr("this subject is already exist in this Section"),3000);*/


}

void MainWindow::on_comboBoxSection_activated(const QString &arg1)
{
    verifSection=1;
    qDebug()<<"void MainWindow::on_comboBoxSection_activated(const QString &arg1)";
    int nbSection=vectSec.size();
    for (int noSec=0;noSec<nbSection;noSec++)
    {
        QString testArg1 =QString::fromStdString(vectSec[noSec].getNom());
        if(arg1==testArg1)
        {
            sectionCourante=&vectSec[noSec];
            ui->labelSectionCourante->setText(arg1);
        }
    }
    /*while(noSection<=nbSection || arg1!=QString::fromStdString(vectSec[noSection].getNom()))
    {
        sectionCourante=&vectSec[noSection];
        ui->labelSectionCourante->setText(arg1);
        noSection++;
    }*/
    //effacer tout ce qu'il y a dans le tableau d'élève
    ui->tableWidgetEleves->setRowCount(0);
    //remplire le tableau avec les élèves correspondant à la section
    int nbElevesSec=(sectionCourante->getVectEleves()).size();
    for(int noEleves=0;noEleves<nbElevesSec;noEleves++)
    {
        QString nomEleve= QString::fromStdString(sectionCourante->getVectEleves()[noEleves].getNom());
        QString prenomEleve=QString::fromStdString(sectionCourante->getVectEleves()[noEleves].getPrenom());
        QTableWidgetItem *newNom=new QTableWidgetItem(nomEleve);
        QTableWidgetItem *newPrenom=new QTableWidgetItem(prenomEleve);
        int nbEleve=ui->tableWidgetEleves->rowCount();
        //ajout d'une ligne au tableWidget
        nbEleve++;
        ui->tableWidgetEleves->setRowCount(nbEleve);
        ui->tableWidgetEleves->setItem(nbEleve-1,0,newNom);
        ui->tableWidgetEleves->setItem(nbEleve-1,1,newPrenom);
    }
    ui->listWidgetMatiere->clear();
    vector<Matiere*>& testVectMat=sectionCourante->getVectMat();
    int nbMatSec=testVectMat.size();
    for (int noMat=0;noMat<nbMatSec;noMat++)
    {
        QString nomMat=QString::fromStdString(testVectMat[noMat]->getNom());
        ui->listWidgetMatiere->addItem(nomMat);
    }
}

