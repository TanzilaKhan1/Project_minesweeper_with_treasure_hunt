#include "level.h"
#include "ui_level.h"
#include "sec_window.h"
#include "game_model.h"
#include "customized.h"

level::level(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::level)
{
    ui->setupUi(this);
    setWindowTitle("Minesweeper with Treasure Hunt");
    customLevelDialog = nullptr;
    connect(ui->Custom, SIGNAL(triggered()), this, SLOT(showCustomLevelDialog()));
}

void level::showCustomLevelDialog()  //shows the dialog box for selecting row, column and mine numbers
{
    if (!customLevelDialog) {
        customLevelDialog = new customized(this);
        connect(customLevelDialog, &customized::accepted, this, &level::handleCustomLevelAccepted);
    }
    customLevelDialog->show();
}

void level::handleCustomLevelAccepted()
{
    int rows = customLevelDialog->getRows();
    int columns = customLevelDialog->getColumns();
    int mines = customLevelDialog->getMines();
    GameLevel level_s = CUSTOM;
    sec_window* gameWindow = new sec_window(rows, columns, mines, level_s, this);
    gameWindow->show();
    hide();
}

void level::on_Easy_clicked()
{
    int rows = 10;
    int columns = 10;
    int mines = 10;
    GameLevel level_s = EASY;
    QWidget *swindow = new sec_window(rows,columns,mines, level_s,this);
    swindow ->show();
    hide();
}

void level::on_meidum_clicked()
{
    int rows = 15;
    int columns = 15;
    int mines = 40;
    GameLevel level_so = MEDIUM;
    sec_window* gameWindow = new sec_window(rows, columns, mines, level_so, this);
    gameWindow->show();
    hide();
}

void level::on_hard_clicked()
{
    int rows = 25;
    int columns = 25;
    int mines = 80;
    GameLevel level_s = HARD;

    sec_window* gameWindow = new sec_window(rows, columns, mines, level_s, this);
    gameWindow->show();
    hide();
}

void level::on_Custom_clicked()
{
    int rows ;
    int columns ;
    int mines ;
    GameLevel level_s ;
    customLevelDialog = new customized(this);
    if (customLevelDialog->exec() == QDialog::Accepted)
    {
        rows = customLevelDialog->getRows();  // takes the row number in the range
        columns = customLevelDialog->getColumns(); // takes the column number in the range
        mines = customLevelDialog->getMines(); // takes the mine number in the range
        level_s = CUSTOM;

    }
    delete customLevelDialog;

    sec_window* gameWindow = new sec_window(rows, columns, mines, level_s, this);
    gameWindow->show();
    hide();
}

void level::on_Back_Button_clicked()
{
    this->hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

level::~level()
{
    delete ui;
}
