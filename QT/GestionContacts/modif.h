#ifndef MODIF_H
#define MODIF_H
#include <QString>
#include <QDialog>

namespace Ui {
class Modif;
}

class Modif : public QDialog
{
    Q_OBJECT
    
public:
    explicit Modif(QWidget *parent = 0);
    ~Modif();
    QString getModif();
    


private slots:

    void on_lineEditModif_textChanged(const QString &arg1);

    void on_pushButtonQuitter_clicked();

    void on_pushButtonOK_clicked();

private:
    Ui::Modif *ui;
};

#endif // MODIF_H
