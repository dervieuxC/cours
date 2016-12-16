#ifndef MODIFTEL_H
#define MODIFTEL_H

#include <QDialog>

namespace Ui {
class ModifTel;
}

class ModifTel : public QDialog
{
    Q_OBJECT
    
public:
    explicit ModifTel(QWidget *parent = 0);
    ~ModifTel();
    QString getModifNumPortable();
    

private slots:
    /**
    *@brief lineEditModifNumPortable_textChanged
    *Permet de réaliser quelque chose lorsque le texte de la line edit est changer,pour chaque caractère ajouter ou supprimer il repasse dans cette fonction
    */
    void on_lineEditModifNumPortable_textChanged(const QString &arg1);
    /**
    *@brief on_pushButtonOk_clicked
    *Lorsque l'on appuie sur le bouton ok de la boite de dialogue
    */
    void on_pushButtonOk_clicked();
    /**
    *@brief on_pushButton_2_clicked
    *Lorsque l'on appuie sur le bouton close de la boite de dialogue
    */
    void on_pushButton_2_clicked();

private:
    Ui::ModifTel *ui;
};

#endif // MODIFTEL_H
