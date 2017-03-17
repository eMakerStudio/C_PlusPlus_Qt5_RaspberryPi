#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    wiringPiSetup();
    pinMode(LedPin, OUTPUT);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ON_clicked()
{
    digitalWrite(LedPin, HIGH);
    delay(500);
}

void MainWindow::on_OFF_clicked()
{
    digitalWrite(LedPin, LOW);
    delay(500);
}
