#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "Section.h"
#include "Matiere.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QVector<Matiere> vectMat;
    QVector<Section> vectSec;
    Section* sectionCourante;
    int verifSection;



private slots:
    void on_actionQuitter_triggered();

    void on_pushButtonSection_clicked();

    void on_pushButtonMatiere_clicked();

    void on_pushButtonAddEleve_clicked();

    void on_pushButtonAddMatiere_clicked();

    void on_comboBoxSection_activated(const QString &arg1);


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
