#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    QString getNewNom();
    QString getNewPrenom();
    QString getNewAdresseMail();
    QString getNewNumTelPortable();
    void actDesactiveBoutonOk();
private slots:
    void on_pushButtonCancel_clicked();

    void on_pushButtonOk_clicked();

    void on_lineEditNom_textChanged(const QString &arg1);

    void on_lineEditPrenom_textChanged(const QString &arg1);

    void on_lineEditAdresseMail_textChanged(const QString &arg1);

    void on_lineEditNumTelPortable_textChanged(const QString &arg1);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
