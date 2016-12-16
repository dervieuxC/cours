/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Nov 9 09:16:42 2016
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
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QWidget *centralWidget;
    QTableWidget *tableWidgetEleves;
    QLabel *labelListEleve;
    QLabel *labelMatiere;
    QLabel *labelNomEleve;
    QLabel *labelPrenomEleve;
    QLineEdit *lineEditNomEleve;
    QLineEdit *lineEditPrenomEleve;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelNomSection;
    QComboBox *comboBoxSection;
    QPushButton *pushButtonSection;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBoxMatiere;
    QPushButton *pushButtonMatiere;
    QPushButton *pushButtonAddMatiere;
    QPushButton *pushButtonAddEleve;
    QListWidget *listWidgetMatiere;
    QLabel *labelMessageSectionCourante;
    QLabel *labelSectionCourante;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1138, 767);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tableWidgetEleves = new QTableWidget(centralWidget);
        if (tableWidgetEleves->columnCount() < 2)
            tableWidgetEleves->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetEleves->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetEleves->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidgetEleves->setObjectName(QString::fromUtf8("tableWidgetEleves"));
        tableWidgetEleves->setGeometry(QRect(60, 150, 361, 331));
        labelListEleve = new QLabel(centralWidget);
        labelListEleve->setObjectName(QString::fromUtf8("labelListEleve"));
        labelListEleve->setGeometry(QRect(180, 100, 91, 21));
        labelMatiere = new QLabel(centralWidget);
        labelMatiere->setObjectName(QString::fromUtf8("labelMatiere"));
        labelMatiere->setGeometry(QRect(790, 100, 67, 21));
        labelNomEleve = new QLabel(centralWidget);
        labelNomEleve->setObjectName(QString::fromUtf8("labelNomEleve"));
        labelNomEleve->setGeometry(QRect(30, 550, 81, 21));
        labelPrenomEleve = new QLabel(centralWidget);
        labelPrenomEleve->setObjectName(QString::fromUtf8("labelPrenomEleve"));
        labelPrenomEleve->setGeometry(QRect(30, 600, 81, 21));
        lineEditNomEleve = new QLineEdit(centralWidget);
        lineEditNomEleve->setObjectName(QString::fromUtf8("lineEditNomEleve"));
        lineEditNomEleve->setGeometry(QRect(130, 540, 113, 31));
        lineEditPrenomEleve = new QLineEdit(centralWidget);
        lineEditPrenomEleve->setObjectName(QString::fromUtf8("lineEditPrenomEleve"));
        lineEditPrenomEleve->setGeometry(QRect(130, 590, 113, 31));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 329, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelNomSection = new QLabel(layoutWidget);
        labelNomSection->setObjectName(QString::fromUtf8("labelNomSection"));

        horizontalLayout->addWidget(labelNomSection);

        comboBoxSection = new QComboBox(layoutWidget);
        comboBoxSection->setObjectName(QString::fromUtf8("comboBoxSection"));

        horizontalLayout->addWidget(comboBoxSection);

        pushButtonSection = new QPushButton(layoutWidget);
        pushButtonSection->setObjectName(QString::fromUtf8("pushButtonSection"));

        horizontalLayout->addWidget(pushButtonSection);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        comboBoxMatiere = new QComboBox(centralWidget);
        comboBoxMatiere->setObjectName(QString::fromUtf8("comboBoxMatiere"));
        comboBoxMatiere->setGeometry(QRect(630, 570, 85, 31));
        pushButtonMatiere = new QPushButton(centralWidget);
        pushButtonMatiere->setObjectName(QString::fromUtf8("pushButtonMatiere"));
        pushButtonMatiere->setGeometry(QRect(740, 570, 95, 31));
        pushButtonAddMatiere = new QPushButton(centralWidget);
        pushButtonAddMatiere->setObjectName(QString::fromUtf8("pushButtonAddMatiere"));
        pushButtonAddMatiere->setGeometry(QRect(850, 570, 95, 31));
        pushButtonAddEleve = new QPushButton(centralWidget);
        pushButtonAddEleve->setObjectName(QString::fromUtf8("pushButtonAddEleve"));
        pushButtonAddEleve->setGeometry(QRect(310, 560, 95, 31));
        listWidgetMatiere = new QListWidget(centralWidget);
        listWidgetMatiere->setObjectName(QString::fromUtf8("listWidgetMatiere"));
        listWidgetMatiere->setGeometry(QRect(640, 150, 321, 331));
        labelMessageSectionCourante = new QLabel(centralWidget);
        labelMessageSectionCourante->setObjectName(QString::fromUtf8("labelMessageSectionCourante"));
        labelMessageSectionCourante->setGeometry(QRect(350, 10, 131, 21));
        labelSectionCourante = new QLabel(centralWidget);
        labelSectionCourante->setObjectName(QString::fromUtf8("labelSectionCourante"));
        labelSectionCourante->setGeometry(QRect(460, 10, 67, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1138, 29));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuFichier->addAction(actionQuitter);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetEleves->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "First Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetEleves->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Last Name", 0, QApplication::UnicodeUTF8));
        labelListEleve->setText(QApplication::translate("MainWindow", "Student List", 0, QApplication::UnicodeUTF8));
        labelMatiere->setText(QApplication::translate("MainWindow", "subject", 0, QApplication::UnicodeUTF8));
        labelNomEleve->setText(QApplication::translate("MainWindow", "First Name:", 0, QApplication::UnicodeUTF8));
        labelPrenomEleve->setText(QApplication::translate("MainWindow", "Last Name:", 0, QApplication::UnicodeUTF8));
        labelNomSection->setText(QApplication::translate("MainWindow", "Section:", 0, QApplication::UnicodeUTF8));
        pushButtonSection->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        pushButtonMatiere->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        pushButtonAddMatiere->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        pushButtonAddEleve->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        labelMessageSectionCourante->setText(QApplication::translate("MainWindow", "Current Section:", 0, QApplication::UnicodeUTF8));
        labelSectionCourante->setText(QString());
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
