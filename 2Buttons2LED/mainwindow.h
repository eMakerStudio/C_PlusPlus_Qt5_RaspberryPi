#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <wiringPi.h>
#define LedPin 0
#define RedLedPin 1

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_ON_clicked();

    void on_OFF_clicked();

    void on_ON_Red_clicked();

    void on_OFF_RED_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
