/********************************************************************************
** Form generated from reading UI file 'modiftel.ui'
**
** Created: Fri Nov 25 09:48:04 2016
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFTEL_H
#define UI_MODIFTEL_H

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

class Ui_ModifTel
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditModifNumPortable;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButtonOk;

    void setupUi(QDialog *ModifTel)
    {
        if (ModifTel->objectName().isEmpty())
            ModifTel->setObjectName(QString::fromUtf8("ModifTel"));
        ModifTel->resize(251, 93);
        verticalLayout = new QVBoxLayout(ModifTel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ModifTel);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditModifNumPortable = new QLineEdit(ModifTel);
        lineEditModifNumPortable->setObjectName(QString::fromUtf8("lineEditModifNumPortable"));

        horizontalLayout->addWidget(lineEditModifNumPortable);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_2 = new QPushButton(ModifTel);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButtonOk = new QPushButton(ModifTel);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../usr/share/icons/gnome/32x32/emblems/emblem-default.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonOk->setIcon(icon);

        horizontalLayout_2->addWidget(pushButtonOk);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ModifTel);

        QMetaObject::connectSlotsByName(ModifTel);
    } // setupUi

    void retranslateUi(QDialog *ModifTel)
    {
        ModifTel->setWindowTitle(QApplication::translate("ModifTel", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ModifTel", "Modification", 0, QApplication::UnicodeUTF8));
        lineEditModifNumPortable->setInputMask(QApplication::translate("ModifTel", "9999999999; ", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ModifTel", "&Quitter", 0, QApplication::UnicodeUTF8));
        pushButtonOk->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ModifTel: public Ui_ModifTel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFTEL_H
