#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //createpuzzle* cp = new createpuzzle();
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            //QTableWidgetItem* Cell = ui->sudoku_board->item(i,j);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

