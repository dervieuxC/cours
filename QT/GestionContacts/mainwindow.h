#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QVector>
#include <QMainWindow>
#include "contact.h"
#include "dialog.h"
#include "modif.h"
#include "modiftel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QVector<contact> vectContact;
    void chargerDB();
    int newId;
    contact* contactCourant;
    
private slots:
    void on_pushButtonAjouter_clicked();

    void on_comboBoxContact_activated(const QString &arg1);

    void on_pushButtonSuppression_clicked();

    void on_pushButtonModifNom_clicked();

    void on_pushButtonModifPrenom_clicked();

    void on_pushButtonModifAdresseMail_clicked();

    void on_pushButtonModifNumPortable_clicked();

    void on_action_Quitter_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
