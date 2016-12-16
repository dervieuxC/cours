/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Nov 17 11:11:59 2016
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxContact;
    QPushButton *pushButtonAjouter;
    QPushButton *pushButtonSuppression;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelTexteNom;
    QLabel *labelTextePrenom;
    QLabel *labelTexteAdresseMail;
    QLabel *labelTexteTelPortable;
    QVBoxLayout *verticalLayout;
    QLabel *labelNom;
    QLabel *labelPrenom;
    QLabel *labelAdresseMail;
    QLabel *labelNumTelPortable;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(287, 231);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBoxContact = new QComboBox(centralWidget);
        comboBoxContact->setObjectName(QString::fromUtf8("comboBoxContact"));

        horizontalLayout_2->addWidget(comboBoxContact);

        pushButtonAjouter = new QPushButton(centralWidget);
        pushButtonAjouter->setObjectName(QString::fromUtf8("pushButtonAjouter"));

        horizontalLayout_2->addWidget(pushButtonAjouter);

        pushButtonSuppression = new QPushButton(centralWidget);
        pushButtonSuppression->setObjectName(QString::fromUtf8("pushButtonSuppression"));

        horizontalLayout_2->addWidget(pushButtonSuppression);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelTexteNom = new QLabel(centralWidget);
        labelTexteNom->setObjectName(QString::fromUtf8("labelTexteNom"));

        verticalLayout_2->addWidget(labelTexteNom);

        labelTextePrenom = new QLabel(centralWidget);
        labelTextePrenom->setObjectName(QString::fromUtf8("labelTextePrenom"));

        verticalLayout_2->addWidget(labelTextePrenom);

        labelTexteAdresseMail = new QLabel(centralWidget);
        labelTexteAdresseMail->setObjectName(QString::fromUtf8("labelTexteAdresseMail"));

        verticalLayout_2->addWidget(labelTexteAdresseMail);

        labelTexteTelPortable = new QLabel(centralWidget);
        labelTexteTelPortable->setObjectName(QString::fromUtf8("labelTexteTelPortable"));

        verticalLayout_2->addWidget(labelTexteTelPortable);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelNom = new QLabel(centralWidget);
        labelNom->setObjectName(QString::fromUtf8("labelNom"));

        verticalLayout->addWidget(labelNom);

        labelPrenom = new QLabel(centralWidget);
        labelPrenom->setObjectName(QString::fromUtf8("labelPrenom"));

        verticalLayout->addWidget(labelPrenom);

        labelAdresseMail = new QLabel(centralWidget);
        labelAdresseMail->setObjectName(QString::fromUtf8("labelAdresseMail"));

        verticalLayout->addWidget(labelAdresseMail);

        labelNumTelPortable = new QLabel(centralWidget);
        labelNumTelPortable->setObjectName(QString::fromUtf8("labelNumTelPortable"));

        verticalLayout->addWidget(labelNumTelPortable);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 287, 29));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButtonAjouter->setText(QApplication::translate("MainWindow", "&Ajouter", 0, QApplication::UnicodeUTF8));
        pushButtonSuppression->setText(QApplication::translate("MainWindow", "&Supprimer", 0, QApplication::UnicodeUTF8));
        labelTexteNom->setText(QApplication::translate("MainWindow", "Nom:", 0, QApplication::UnicodeUTF8));
        labelTextePrenom->setText(QApplication::translate("MainWindow", "Prenom:", 0, QApplication::UnicodeUTF8));
        labelTexteAdresseMail->setText(QApplication::translate("MainWindow", "Adresse mail:", 0, QApplication::UnicodeUTF8));
        labelTexteTelPortable->setText(QApplication::translate("MainWindow", "t\303\251l\303\251phone portable:", 0, QApplication::UnicodeUTF8));
        labelNom->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelPrenom->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelAdresseMail->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelNumTelPortable->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
