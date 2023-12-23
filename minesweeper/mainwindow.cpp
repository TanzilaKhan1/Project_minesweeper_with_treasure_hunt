#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "menu.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) //user interface (UI) for the main window.
{
    ui->setupUi(this);
    setWindowTitle("Minesweeper with Treasure Hunt");
};

void MainWindow::on_Start_Button_clicked()
{
   QWidget *swindow = new menu(this);
    swindow ->show();
    hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

