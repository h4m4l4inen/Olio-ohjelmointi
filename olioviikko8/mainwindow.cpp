#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->switch_1,&QPushButton::clicked,this,&MainWindow::player1ClickHandler);
    connect(ui->switch_2,&QPushButton::clicked,this,&MainWindow::player2ClickHandler);

    connect(ui->time_120,&QPushButton::clicked,this,&MainWindow::timer120ClickHandler);
    connect(ui->time_5,&QPushButton::clicked,this,&MainWindow::timer5ClickHandler);

    connect(ui->start,&QPushButton::clicked,this,&MainWindow::startClickHandler);
    connect(ui->stop,&QPushButton::clicked,this,&MainWindow::stopClickHandler);


    pQTimer = new QTimer(this); //kun mainwindow kuolee, niin pQtimer kuolee


    ui->player_1->setMinimum(0);

    connect(pQTimer,&QTimer::timeout,this,&MainWindow::handleTimer);

    ui->player_2->setMinimum(0);

    ui->label->setText("");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setGameInfoText(QString p)
{
    ui->label->setText(p);
}

void MainWindow::player1ClickHandler()
{
    currentPlayer = 2;
    setGameInfoText("Player 2's turn");
}

void MainWindow::player2ClickHandler()
{
    currentPlayer = 1;
    setGameInfoText("Player 1's turn");
}

void MainWindow::timer120ClickHandler()
{
    qDebug()<<"120 sekuntia";
    gameTime = 120;
    setGameInfoText("Gametime was set to 120 seconds");
}

void MainWindow::timer5ClickHandler()
{
    qDebug()<<"5 minuuttia";
    gameTime = 300;
    setGameInfoText("Gametime was set to 5 minutes");
}

void MainWindow::startClickHandler()
{
    qDebug()<<"Start nappi";
    pQTimer->start(1000); //startataan timer, antaa kekseytyksiä 1000ms eli 1 s välein
    player1Time = gameTime;
    player2Time = gameTime;
    ui->player_1->setMaximum(gameTime);
    ui->player_2->setMaximum(gameTime);
    currentPlayer = 1;
    ui->player_1->setValue(gameTime);
    ui->player_2->setValue(gameTime);
    setGameInfoText("Game ongoing Player 1's turn");
}

void MainWindow::stopClickHandler()
{
    pQTimer->stop();
    setGameInfoText("Game stopped");
}

void MainWindow::handleTimer()
{
    if(currentPlayer == 1)
    {
        player1Time--;
        ui->player_1->setValue(player1Time);

        if(player1Time == 0)
        {
            qDebug()<<"Aika loppui";
            pQTimer->stop();
            setGameInfoText("Player 2 won!");
        }
    }
    else
    {
        player2Time--;
        ui->player_2->setValue(player2Time);

        if(player2Time == 0)
        {
            qDebug()<<"Aika loppui";
            pQTimer->stop();
            setGameInfoText("Player 1 won!");
        }
    }
}
