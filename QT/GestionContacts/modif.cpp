#include "modif.h"
#include "ui_modif.h"

Modif::Modif(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Modif)
{
    ui->setupUi(this);
}

Modif::~Modif()
{
    delete ui;
}

QString Modif::getModif()
{
    return ui->lineEditModif->text();
}



void Modif::on_lineEditModif_textChanged(const QString &arg1)
{
    ui->pushButtonOK->setEnabled(ui->lineEditModif->text()!="");
}

void Modif::on_pushButtonQuitter_clicked()
{
    reject();
}

void Modif::on_pushButtonOK_clicked()
{
    accept();
}
