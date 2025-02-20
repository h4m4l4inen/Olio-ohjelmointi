#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Count,&QPushButton::clicked,this,&MainWindow::handleClick);
    connect(ui->Reset,&QPushButton::clicked,this,&MainWindow::resethandleClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleClick()
{
    counter++;
    ui->result->setText(QString::number(counter));
}

void MainWindow::resethandleClick()
{
    counter = 0;
    ui->result->setText("");
}




