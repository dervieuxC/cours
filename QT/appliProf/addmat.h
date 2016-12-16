#ifndef ADDMAT_H
#define ADDMAT_H

#include <QDialog>

namespace Ui {
class addMat;
}

class addMat : public QDialog
{
    Q_OBJECT
    
public:
    explicit addMat(QWidget *parent = 0);
    ~addMat();
    int getCoeffMatSec();
    
private:
    Ui::addMat *ui;
};

#endif // ADDMAT_H
