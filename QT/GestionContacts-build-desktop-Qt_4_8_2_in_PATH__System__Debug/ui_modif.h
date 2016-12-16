/********************************************************************************
** Form generated from reading UI file 'modif.ui'
**
** Created: Fri Nov 25 09:27:20 2016
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIF_H
#define UI_MODIF_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Modif
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelModif;
    QLineEdit *lineEditModif;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonQuitter;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *Modif)
    {
        if (Modif->objectName().isEmpty())
            Modif->setObjectName(QString::fromUtf8("Modif"));
        Modif->resize(251, 93);
        verticalLayout = new QVBoxLayout(Modif);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelModif = new QLabel(Modif);
        labelModif->setObjectName(QString::fromUtf8("labelModif"));

        horizontalLayout->addWidget(labelModif);

        lineEditModif = new QLineEdit(Modif);
        lineEditModif->setObjectName(QString::fromUtf8("lineEditModif"));

        horizontalLayout->addWidget(lineEditModif);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonQuitter = new QPushButton(Modif);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setEnabled(true);

        horizontalLayout_2->addWidget(pushButtonQuitter);

        pushButtonOK = new QPushButton(Modif);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));
        pushButtonOK->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../usr/share/icons/gnome/32x32/emblems/emblem-default.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonOK->setIcon(icon);

        horizontalLayout_2->addWidget(pushButtonOK);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Modif);

        QMetaObject::connectSlotsByName(Modif);
    } // setupUi

    void retranslateUi(QDialog *Modif)
    {
        Modif->setWindowTitle(QApplication::translate("Modif", "Dialog", 0, QApplication::UnicodeUTF8));
        labelModif->setText(QApplication::translate("Modif", "Modification", 0, QApplication::UnicodeUTF8));
        pushButtonQuitter->setText(QApplication::translate("Modif", "&Quitter", 0, QApplication::UnicodeUTF8));
        pushButtonOK->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Modif: public Ui_Modif {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIF_H
