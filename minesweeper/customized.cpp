#include "customized.h"
#include "ui_customized.h"
#include <QMessageBox>

customized::customized(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customized)
{
    ui->setupUi(this);
    setWindowTitle("Minesweeper with Treasure Hunt");
}

int customized::getRows() const
{
   return ui->spinRow->value();
}

int customized::getColumns() const
{
   return ui->spinColumn->value();
}

int customized::getMines() const
{
   return ui->spinMine->value();
}

void customized::on_Done_Button_clicked()
{
   int rows = getRows();
   int columns = getColumns();
   int mines = getMines();
   // Ensure that the number of rows, columns and mines are within the allowed range
   if (rows >= 3 && columns>=3 && mines >= rows * columns * 0.12) {
       accept();}
   if(rows < 3 || columns < 3){
       // Show a warning message
       QMessageBox::warning(this, "Warning", "Number of rows and columns should be at least 3.");
   }
   if (mines < rows * columns * 0.12) {
       // Show a warning message
       QMessageBox::warning(this, "Warning", "Number of mines should be at least 12% of the total cells.");
   }
}

customized::~customized()
{
   delete ui;
}

