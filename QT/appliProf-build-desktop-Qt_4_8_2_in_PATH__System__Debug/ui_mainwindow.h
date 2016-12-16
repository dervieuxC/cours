/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Nov 16 10:35:17 2016
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
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelNomSection;
    QComboBox *comboBoxSection;
    QPushButton *pushButtonSection;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelMessageSectionCourante;
    QLabel *labelSectionCourante;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labelListEleve;
    QSpacerItem *horizontalSpacer_5;
    QTableWidget *tableWidgetEleves;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelNomEleve;
    QLabel *labelPrenomEleve;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditNomEleve;
    QLineEdit *lineEditPrenomEleve;
    QPushButton *pushButtonAddEleve;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelMatiere;
    QSpacerItem *horizontalSpacer_4;
    QListWidget *listWidgetMatiere;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxMatiere;
    QPushButton *pushButtonMatiere;
    QPushButton *pushButtonAddMatiere;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1072, 735);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
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

        labelMessageSectionCourante = new QLabel(centralWidget);
        labelMessageSectionCourante->setObjectName(QString::fromUtf8("labelMessageSectionCourante"));
        labelMessageSectionCourante->setGeometry(QRect(350, 10, 131, 21));
        labelSectionCourante = new QLabel(centralWidget);
        labelSectionCourante->setObjectName(QString::fromUtf8("labelSectionCourante"));
        labelSectionCourante->setGeometry(QRect(460, 10, 67, 21));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 50, 1021, 581));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 40, 861, 461));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        labelListEleve = new QLabel(widget);
        labelListEleve->setObjectName(QString::fromUtf8("labelListEleve"));

        horizontalLayout_5->addWidget(labelListEleve);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_5);

        tableWidgetEleves = new QTableWidget(widget);
        if (tableWidgetEleves->columnCount() < 2)
            tableWidgetEleves->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetEleves->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetEleves->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidgetEleves->setObjectName(QString::fromUtf8("tableWidgetEleves"));

        verticalLayout_4->addWidget(tableWidgetEleves);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelNomEleve = new QLabel(widget);
        labelNomEleve->setObjectName(QString::fromUtf8("labelNomEleve"));

        verticalLayout_2->addWidget(labelNomEleve);

        labelPrenomEleve = new QLabel(widget);
        labelPrenomEleve->setObjectName(QString::fromUtf8("labelPrenomEleve"));

        verticalLayout_2->addWidget(labelPrenomEleve);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lineEditNomEleve = new QLineEdit(widget);
        lineEditNomEleve->setObjectName(QString::fromUtf8("lineEditNomEleve"));

        verticalLayout_3->addWidget(lineEditNomEleve);

        lineEditPrenomEleve = new QLineEdit(widget);
        lineEditPrenomEleve->setObjectName(QString::fromUtf8("lineEditPrenomEleve"));

        verticalLayout_3->addWidget(lineEditPrenomEleve);


        horizontalLayout_4->addLayout(verticalLayout_3);

        pushButtonAddEleve = new QPushButton(widget);
        pushButtonAddEleve->setObjectName(QString::fromUtf8("pushButtonAddEleve"));

        horizontalLayout_4->addWidget(pushButtonAddEleve);


        verticalLayout_4->addLayout(horizontalLayout_4);


        horizontalLayout_6->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        labelMatiere = new QLabel(widget);
        labelMatiere->setObjectName(QString::fromUtf8("labelMatiere"));

        horizontalLayout_3->addWidget(labelMatiere);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        listWidgetMatiere = new QListWidget(widget);
        listWidgetMatiere->setObjectName(QString::fromUtf8("listWidgetMatiere"));

        verticalLayout->addWidget(listWidgetMatiere);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBoxMatiere = new QComboBox(widget);
        comboBoxMatiere->setObjectName(QString::fromUtf8("comboBoxMatiere"));

        horizontalLayout_2->addWidget(comboBoxMatiere);

        pushButtonMatiere = new QPushButton(widget);
        pushButtonMatiere->setObjectName(QString::fromUtf8("pushButtonMatiere"));

        horizontalLayout_2->addWidget(pushButtonMatiere);

        pushButtonAddMatiere = new QPushButton(widget);
        pushButtonAddMatiere->setObjectName(QString::fromUtf8("pushButtonAddMatiere"));

        horizontalLayout_2->addWidget(pushButtonAddMatiere);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_6->addLayout(verticalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1072, 29));
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

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        labelNomSection->setText(QApplication::translate("MainWindow", "Section:", 0, QApplication::UnicodeUTF8));
        pushButtonSection->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        labelMessageSectionCourante->setText(QApplication::translate("MainWindow", "Current Section:", 0, QApplication::UnicodeUTF8));
        labelSectionCourante->setText(QString());
        labelListEleve->setText(QApplication::translate("MainWindow", "Student List", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetEleves->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "First Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetEleves->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Last Name", 0, QApplication::UnicodeUTF8));
        labelNomEleve->setText(QApplication::translate("MainWindow", "First Name:", 0, QApplication::UnicodeUTF8));
        labelPrenomEleve->setText(QApplication::translate("MainWindow", "Last Name:", 0, QApplication::UnicodeUTF8));
        pushButtonAddEleve->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        labelMatiere->setText(QApplication::translate("MainWindow", "subject", 0, QApplication::UnicodeUTF8));
        pushButtonMatiere->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        pushButtonAddMatiere->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\303\251l\303\250ve et mati\303\250re", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\303\251valuation", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
