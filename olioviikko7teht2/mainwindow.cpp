#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->N0,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N1,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N2,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N3,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N4,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N5,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N6,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N7,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N8,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N9,&QPushButton::clicked,this,&MainWindow::numberClickHandler);

    connect(ui->add0,&QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->sub1,&QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->mul2,&QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->div3,&QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);

    connect(ui->clear0,&QPushButton::clicked,this,&MainWindow::clearAndEnterClickHandler);
    connect(ui->enter1,&QPushButton::clicked,this,&MainWindow::clearAndEnterClickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    QString numberName = button->objectName();
    qDebug()<<numberName.at(1);
    /*QString t = ui->num1->text(); //t=text, t sisältää mitä laatikossa on
    t = t+numberName.at(1); //numbername(1) ottaa vain 1 mukaan. lisää mitä ennestään oli ja mitä painettiin
    ui->num1->setText(t); *///settext ei palauta mitään, mutta haluaa referenssin qstringiin

    if(state == 0)
    {
        ui->num1->setText(ui->num1->text()+numberName.at(1));
    }
    else
    {
        ui->num2->setText(ui->num2->text()+numberName.at(1));
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    QString numberName = button->objectName();

    if(numberName.at(5) == '0')
    {
        resetLineEdits();
        state = 0;
    }

    else
    {
    number1 = ui->num1->text();
    float n1 = number1.toFloat();
    number2 = ui->num2->text();
    float n2 = number2.toFloat();

    switch(operand){
    case 0:
        result= n1+n2;
        break;
    case 1:
        result= n1-n2;
        break;
    case 2:
        result = n1*n2;
        break;
    case 3:
        result = n1/n2;
        break;
    }
    ui->result->setText(QString::number(result));
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    state = 1;
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    QString numberName = button->objectName();
    qDebug()<<numberName.at(3);
    QString S = numberName.at(3);
    operand = S.toInt();
}

void MainWindow::resetLineEdits()
{
    ui->num1->setText(" ");
    ui->num2->setText(" ");
    ui->result->setText(" ");
}
