/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Dec 16 14:34:20 2016
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
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quitter;
    QWidget *centralWidget;
    QTabWidget *tabWidgetGestionnaire;
    QWidget *tabProduit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelRayon;
    QListWidget *listWidgetRayon;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtondeleteRayon;
    QPushButton *pushButtonAddRayon;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCategorie;
    QComboBox *comboBoxRayon;
    QListWidget *listWidgetCategorie;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonDeleteCategorie;
    QPushButton *pushButtonAddCategorie;
    QWidget *tabPersonnel;
    QWidget *tabPaye;
    QLabel *labelGestionnaire;
    QMenuBar *menuBar;
    QMenu *menu_Fichier;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(934, 683);
        action_Quitter = new QAction(MainWindow);
        action_Quitter->setObjectName(QString::fromUtf8("action_Quitter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidgetGestionnaire = new QTabWidget(centralWidget);
        tabWidgetGestionnaire->setObjectName(QString::fromUtf8("tabWidgetGestionnaire"));
        tabWidgetGestionnaire->setGeometry(QRect(60, 80, 811, 501));
        tabProduit = new QWidget();
        tabProduit->setObjectName(QString::fromUtf8("tabProduit"));
        tabProduit->setCursor(QCursor(Qt::ArrowCursor));
        widget = new QWidget(tabProduit);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 30, 661, 381));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelRayon = new QLabel(widget);
        labelRayon->setObjectName(QString::fromUtf8("labelRayon"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        labelRayon->setFont(font);

        verticalLayout_2->addWidget(labelRayon);

        listWidgetRayon = new QListWidget(widget);
        listWidgetRayon->setObjectName(QString::fromUtf8("listWidgetRayon"));

        verticalLayout_2->addWidget(listWidgetRayon);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButtondeleteRayon = new QPushButton(widget);
        pushButtondeleteRayon->setObjectName(QString::fromUtf8("pushButtondeleteRayon"));

        horizontalLayout_3->addWidget(pushButtondeleteRayon);

        pushButtonAddRayon = new QPushButton(widget);
        pushButtonAddRayon->setObjectName(QString::fromUtf8("pushButtonAddRayon"));

        horizontalLayout_3->addWidget(pushButtonAddRayon);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelCategorie = new QLabel(widget);
        labelCategorie->setObjectName(QString::fromUtf8("labelCategorie"));
        QFont font1;
        font1.setPointSize(14);
        labelCategorie->setFont(font1);

        horizontalLayout->addWidget(labelCategorie);

        comboBoxRayon = new QComboBox(widget);
        comboBoxRayon->setObjectName(QString::fromUtf8("comboBoxRayon"));

        horizontalLayout->addWidget(comboBoxRayon);


        verticalLayout->addLayout(horizontalLayout);

        listWidgetCategorie = new QListWidget(widget);
        listWidgetCategorie->setObjectName(QString::fromUtf8("listWidgetCategorie"));

        verticalLayout->addWidget(listWidgetCategorie);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonDeleteCategorie = new QPushButton(widget);
        pushButtonDeleteCategorie->setObjectName(QString::fromUtf8("pushButtonDeleteCategorie"));

        horizontalLayout_2->addWidget(pushButtonDeleteCategorie);

        pushButtonAddCategorie = new QPushButton(widget);
        pushButtonAddCategorie->setObjectName(QString::fromUtf8("pushButtonAddCategorie"));

        horizontalLayout_2->addWidget(pushButtonAddCategorie);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout);

        tabWidgetGestionnaire->addTab(tabProduit, QString());
        tabPersonnel = new QWidget();
        tabPersonnel->setObjectName(QString::fromUtf8("tabPersonnel"));
        tabWidgetGestionnaire->addTab(tabPersonnel, QString());
        tabPaye = new QWidget();
        tabPaye->setObjectName(QString::fromUtf8("tabPaye"));
        tabWidgetGestionnaire->addTab(tabPaye, QString());
        labelGestionnaire = new QLabel(centralWidget);
        labelGestionnaire->setObjectName(QString::fromUtf8("labelGestionnaire"));
        labelGestionnaire->setGeometry(QRect(50, 20, 171, 21));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        labelGestionnaire->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 934, 29));
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

        tabWidgetGestionnaire->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_Quitter->setText(QApplication::translate("MainWindow", "&Quitter", 0, QApplication::UnicodeUTF8));
        labelRayon->setText(QApplication::translate("MainWindow", "Rayon", 0, QApplication::UnicodeUTF8));
        pushButtondeleteRayon->setText(QApplication::translate("MainWindow", "&Supprimer", 0, QApplication::UnicodeUTF8));
        pushButtonAddRayon->setText(QApplication::translate("MainWindow", "&Ajouter", 0, QApplication::UnicodeUTF8));
        labelCategorie->setText(QApplication::translate("MainWindow", "Categorie", 0, QApplication::UnicodeUTF8));
        pushButtonDeleteCategorie->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        pushButtonAddCategorie->setText(QApplication::translate("MainWindow", "Ajouter", 0, QApplication::UnicodeUTF8));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tabProduit), QApplication::translate("MainWindow", "Produit", 0, QApplication::UnicodeUTF8));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tabPersonnel), QApplication::translate("MainWindow", "Personnel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        tabPaye->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tabPaye), QApplication::translate("MainWindow", "Fiche de paye", 0, QApplication::UnicodeUTF8));
        labelGestionnaire->setText(QApplication::translate("MainWindow", "Gestionnaire", 0, QApplication::UnicodeUTF8));
        menu_Fichier->setTitle(QApplication::translate("MainWindow", "&Fichier", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
