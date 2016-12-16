#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

QString Dialog::getNewNom()
{
    return ui->lineEditNom->text();
}

QString Dialog::getNewPrenom()
{
    return ui->lineEditPrenom->text();
}

QString Dialog::getNewAdresseMail()
{
    return ui->lineEditAdresseMail->text();
}

QString Dialog::getNewNumTelPortable()
{
    return ui->lineEditNumTelPortable->text();
}

void Dialog::actDesactiveBoutonOk()
{
    ui->pushButtonOk->setEnabled((ui->lineEditNumTelPortable->text().length()==10 )
                                 && (ui->lineEditNom->text()!="" && ui->lineEditPrenom->text()!="" && ui->lineEditAdresseMail->text()!="" && ui->lineEditNumTelPortable->text()!=""));
}

void Dialog::on_pushButtonCancel_clicked()
{
    reject();
}

void Dialog::on_pushButtonOk_clicked()
{
    accept();
}

void Dialog::on_lineEditNom_textChanged(const QString &arg1)
{
    actDesactiveBoutonOk();
}

void Dialog::on_lineEditPrenom_textChanged(const QString &arg1)
{
    actDesactiveBoutonOk();
}

void Dialog::on_lineEditAdresseMail_textChanged(const QString &arg1)
{
    actDesactiveBoutonOk();
}

void Dialog::on_lineEditNumTelPortable_textChanged(const QString &arg1)
{
    actDesactiveBoutonOk();
}
