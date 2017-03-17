#include "mainwindow.h"
#include <QApplication>
#include <QString>
#include <QLabel>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString message;
    QTextStream buf (&message);
    buf << "Hello World" << endl;
    QLabel label(message);
    label.resize(255, 250);
    label.setText(message);
    label.setAlignment(Qt::AlignCenter);
    label.show();

    return a.exec();
}
