#include "modiftel.h"
#include "ui_modiftel.h"

ModifTel::ModifTel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifTel)
{
    ui->setupUi(this);
}

ModifTel::~ModifTel()
{
    delete ui;
}

QString ModifTel::getModifNumPortable()
{
   return ui->lineEditModifNumPortable->text();
}



void ModifTel::on_lineEditModifNumPortable_textChanged(const QString &arg1)
{
    ui->pushButtonOk->setEnabled(ui->lineEditModifNumPortable->text().length()==10);
}

void ModifTel::on_pushButtonOk_clicked()
{
    accept();
}

void ModifTel::on_pushButton_2_clicked()
{
    reject();
}
