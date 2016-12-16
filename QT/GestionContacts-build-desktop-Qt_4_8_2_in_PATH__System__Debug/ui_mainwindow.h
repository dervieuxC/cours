/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Dec 9 14:31:55 2016
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
#include <QtGui/QMenu>
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
    QAction *action_Quitter;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxContact;
    QPushButton *pushButtonAjouter;
    QPushButton *pushButtonSuppression;
    QHBoxLayout *horizontalLayout_3;
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
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButtonModifNom;
    QPushButton *pushButtonModifPrenom;
    QPushButton *pushButtonModifAdresseMail;
    QPushButton *pushButtonModifNumPortable;
    QMenuBar *menuBar;
    QMenu *menu_Fichier;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(326, 280);
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        action_Quitter = new QAction(MainWindow);
        action_Quitter->setObjectName(QString::fromUtf8("action_Quitter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBoxContact = new QComboBox(centralWidget);
        comboBoxContact->setObjectName(QString::fromUtf8("comboBoxContact"));

        horizontalLayout_2->addWidget(comboBoxContact);

        pushButtonAjouter = new QPushButton(centralWidget);
        pushButtonAjouter->setObjectName(QString::fromUtf8("pushButtonAjouter"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../usr/share/icons/gnome/32x32/actions/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAjouter->setIcon(icon);

        horizontalLayout_2->addWidget(pushButtonAjouter);

        pushButtonSuppression = new QPushButton(centralWidget);
        pushButtonSuppression->setObjectName(QString::fromUtf8("pushButtonSuppression"));
        pushButtonSuppression->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../../usr/share/icons/gnome/32x32/places/xfce-trash_empty.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSuppression->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButtonSuppression);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
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


        horizontalLayout_3->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButtonModifNom = new QPushButton(centralWidget);
        pushButtonModifNom->setObjectName(QString::fromUtf8("pushButtonModifNom"));
        pushButtonModifNom->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../../../usr/share/icons/gnome/32x32/categories/redhat-office.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonModifNom->setIcon(icon2);

        verticalLayout_3->addWidget(pushButtonModifNom);

        pushButtonModifPrenom = new QPushButton(centralWidget);
        pushButtonModifPrenom->setObjectName(QString::fromUtf8("pushButtonModifPrenom"));
        pushButtonModifPrenom->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../../../../usr/share/icons/gnome/32x32/actions/format-text-direction-rtl.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonModifPrenom->setIcon(icon3);

        verticalLayout_3->addWidget(pushButtonModifPrenom);

        pushButtonModifAdresseMail = new QPushButton(centralWidget);
        pushButtonModifAdresseMail->setObjectName(QString::fromUtf8("pushButtonModifAdresseMail"));
        pushButtonModifAdresseMail->setEnabled(false);

        verticalLayout_3->addWidget(pushButtonModifAdresseMail);

        pushButtonModifNumPortable = new QPushButton(centralWidget);
        pushButtonModifNumPortable->setObjectName(QString::fromUtf8("pushButtonModifNumPortable"));
        pushButtonModifNumPortable->setEnabled(false);

        verticalLayout_3->addWidget(pushButtonModifNumPortable);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 326, 29));
        menu_Fichier = new QMenu(menuBar);
        menu_Fichier->setObjectName(QString::fromUtf8("menu_Fichier"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Fichier->menuAction());
        menu_Fichier->addAction(action_Quitter);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion Contact", 0, QApplication::UnicodeUTF8));
        action_Quitter->setText(QApplication::translate("MainWindow", "&Quitter", 0, QApplication::UnicodeUTF8));
        pushButtonAjouter->setText(QString());
        pushButtonSuppression->setText(QString());
        labelTexteNom->setText(QApplication::translate("MainWindow", "Nom:", 0, QApplication::UnicodeUTF8));
        labelTextePrenom->setText(QApplication::translate("MainWindow", "Pr\303\251nom:", 0, QApplication::UnicodeUTF8));
        labelTexteAdresseMail->setText(QApplication::translate("MainWindow", "Adresse mail:", 0, QApplication::UnicodeUTF8));
        labelTexteTelPortable->setText(QApplication::translate("MainWindow", "T\303\251l\303\251phone portable:", 0, QApplication::UnicodeUTF8));
        labelNom->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelPrenom->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelAdresseMail->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelNumTelPortable->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButtonModifNom->setText(QString());
        pushButtonModifPrenom->setText(QString());
        pushButtonModifAdresseMail->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        pushButtonModifNumPortable->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        menu_Fichier->setTitle(QApplication::translate("MainWindow", "&Fichier", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
