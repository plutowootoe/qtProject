#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "recipe.h"
#include "recipes.h"
#include "recipewindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




// text edit actions
void MainWindow::on_actionClose_triggered()
{
    QApplication::quit();
}

void MainWindow::on_btn_open_clicked()
{
    recipewindow = new RecipeWindow(this);
    recipewindow->show();
}
