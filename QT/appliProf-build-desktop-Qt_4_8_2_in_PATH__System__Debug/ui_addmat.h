/********************************************************************************
** Form generated from reading UI file 'addmat.ui'
**
** Created: Fri Dec 9 14:36:01 2016
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMAT_H
#define UI_ADDMAT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_addMat
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *addMat)
    {
        if (addMat->objectName().isEmpty())
            addMat->setObjectName(QString::fromUtf8("addMat"));
        addMat->resize(400, 300);
        buttonBox = new QDialogButtonBox(addMat);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(addMat);
        QObject::connect(buttonBox, SIGNAL(accepted()), addMat, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addMat, SLOT(reject()));

        QMetaObject::connectSlotsByName(addMat);
    } // setupUi

    void retranslateUi(QDialog *addMat)
    {
        addMat->setWindowTitle(QApplication::translate("addMat", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addMat: public Ui_addMat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMAT_H
