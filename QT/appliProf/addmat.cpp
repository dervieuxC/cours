#include "addmat.h"
#include "ui_addmat.h"

addMat::addMat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addMat)
{
    ui->setupUi(this);
}

addMat::~addMat()
{
    delete ui;
}

int addMat::getCoeffMatSec()
{
   //return ui->spinBoxCoeffMatSec->value();
}
