#include "about.h"
#include "ui_about.h" //user interface definition for the about class

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this); // set up the UI components for a dialog or window.
    setWindowTitle("Minesweeper with Treasure Hunt");
}

void about::on_Back_Button_clicked() //This slot function is triggered when the button is clicked.
{
    this->hide();
    QWidget *parent = this->parentWidget(); //gets the parent widget of the "About" dialog
    parent->show();
}

about::~about()
{
    delete ui;
}
