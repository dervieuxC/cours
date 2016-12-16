#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->labelHello->setText("HelloWorld");
    //ui->labelHello->setColor("red");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonQuitter_clicked()
{
    close();
}

void MainWindow::on_pushButtonValider_clicked()
{
    ui->labelHello->setText(ui->lineEditMessage->text());
}
