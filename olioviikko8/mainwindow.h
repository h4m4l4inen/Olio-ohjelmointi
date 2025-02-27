#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime=120;
    QTimer * pQTimer;

private slots:
    void setGameInfoText(QString);
    void player1ClickHandler();
    void player2ClickHandler();
    void timer120ClickHandler();
    void timer5ClickHandler();
    void startClickHandler();
    void stopClickHandler();
    void handleTimer();
};
#endif // MAINWINDOW_H
