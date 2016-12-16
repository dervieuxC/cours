/********************************************************************************
** Form generated from reading UI file 'supprimer.ui'
**
** Created: Fri Nov 18 09:50:44 2016
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIMER_H
#define UI_SUPPRIMER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Supprimer
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *comboBoxSuppression;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Supprimer)
    {
        if (Supprimer->objectName().isEmpty())
            Supprimer->setObjectName(QString::fromUtf8("Supprimer"));
        Supprimer->resize(194, 86);
        verticalLayout = new QVBoxLayout(Supprimer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboBoxSuppression = new QComboBox(Supprimer);
        comboBoxSuppression->setObjectName(QString::fromUtf8("comboBoxSuppression"));

        verticalLayout->addWidget(comboBoxSuppression);

        buttonBox = new QDialogButtonBox(Supprimer);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Supprimer);
        QObject::connect(buttonBox, SIGNAL(accepted()), Supprimer, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Supprimer, SLOT(reject()));

        QMetaObject::connectSlotsByName(Supprimer);
    } // setupUi

    void retranslateUi(QDialog *Supprimer)
    {
        Supprimer->setWindowTitle(QApplication::translate("Supprimer", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Supprimer: public Ui_Supprimer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMER_H
