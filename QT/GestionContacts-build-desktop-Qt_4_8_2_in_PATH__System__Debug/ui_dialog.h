/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Fri Nov 25 09:51:23 2016
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

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

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditNom;
    QLineEdit *lineEditPrenom;
    QLineEdit *lineEditAdresseMail;
    QLineEdit *lineEditNumTelPortable;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(364, 238);
        verticalLayout_3 = new QVBoxLayout(Dialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditNom = new QLineEdit(Dialog);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));

        verticalLayout_2->addWidget(lineEditNom);

        lineEditPrenom = new QLineEdit(Dialog);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));

        verticalLayout_2->addWidget(lineEditPrenom);

        lineEditAdresseMail = new QLineEdit(Dialog);
        lineEditAdresseMail->setObjectName(QString::fromUtf8("lineEditAdresseMail"));

        verticalLayout_2->addWidget(lineEditAdresseMail);

        lineEditNumTelPortable = new QLineEdit(Dialog);
        lineEditNumTelPortable->setObjectName(QString::fromUtf8("lineEditNumTelPortable"));

        verticalLayout_2->addWidget(lineEditNumTelPortable);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButtonOk = new QPushButton(Dialog);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setEnabled(false);

        verticalLayout_3->addWidget(pushButtonOk);

        pushButtonCancel = new QPushButton(Dialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        verticalLayout_3->addWidget(pushButtonCancel);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Ajout Contact", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "nom :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "pr\303\251nom :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "adresse mail :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog", "num\303\251ro t\303\251l\303\251phone portable :", 0, QApplication::UnicodeUTF8));
        lineEditAdresseMail->setInputMask(QApplication::translate("Dialog", "aaaaaaaaaa@aaaaaaa.aaa; ", 0, QApplication::UnicodeUTF8));
        lineEditNumTelPortable->setInputMask(QApplication::translate("Dialog", "9999999999; ", 0, QApplication::UnicodeUTF8));
        pushButtonOk->setText(QApplication::translate("Dialog", "&Ok", 0, QApplication::UnicodeUTF8));
        pushButtonCancel->setText(QApplication::translate("Dialog", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
