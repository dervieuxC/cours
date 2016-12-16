/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Dec 16 16:47:57 2016
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
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
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
    QLabel *label;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_3;
    QWidget *tabPaye;
    QLabel *label_2;
    QListWidget *listWidget;
    QPushButton *pushButton_4;
    QWidget *tab;
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
        tabWidgetGestionnaire->setGeometry(QRect(40, 60, 811, 501));
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
        label = new QLabel(tabPersonnel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 81, 26));
        label->setFont(font1);
        widget1 = new QWidget(tabPersonnel);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(51, 61, 731, 381));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(widget1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        horizontalLayout_5->addWidget(tableWidget);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_3->addWidget(pushButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_3->addWidget(pushButton_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 178, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        horizontalLayout_5->addLayout(verticalLayout_4);

        tabWidgetGestionnaire->addTab(tabPersonnel, QString());
        tabPaye = new QWidget();
        tabPaye->setObjectName(QString::fromUtf8("tabPaye"));
        label_2 = new QLabel(tabPaye);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 10, 67, 21));
        listWidget = new QListWidget(tabPaye);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 60, 641, 311));
        pushButton_4 = new QPushButton(tabPaye);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 390, 95, 31));
        tabWidgetGestionnaire->addTab(tabPaye, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidgetGestionnaire->addTab(tab, QString());
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
        label->setText(QApplication::translate("MainWindow", "Employ\303\251s", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "&Ajouter", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "&Modifier", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "&Supprimer", 0, QApplication::UnicodeUTF8));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tabPersonnel), QApplication::translate("MainWindow", "Personnel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        tabPaye->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "&Payer", 0, QApplication::UnicodeUTF8));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tabPaye), QApplication::translate("MainWindow", "Fiche de paye", 0, QApplication::UnicodeUTF8));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tab), QApplication::translate("MainWindow", "Statistique", 0, QApplication::UnicodeUTF8));
        labelGestionnaire->setText(QApplication::translate("MainWindow", "Gestionnaire", 0, QApplication::UnicodeUTF8));
        menu_Fichier->setTitle(QApplication::translate("MainWindow", "&Fichier", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
