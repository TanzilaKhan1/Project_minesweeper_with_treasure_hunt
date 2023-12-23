#include "mainwindow.h" // declaration for the MainWindow class, which represents the main window of the application.

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // initializes the Qt application and sets it up to handle GUI-related tasks.
    MainWindow w;
    w.show(); //displays the main window (w)-application's graphical user interface visible to the user
    return a.exec();
}
