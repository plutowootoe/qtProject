#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "recipe.h"
#include "recipes.h"
#include "recipewindow.h"
#include "viewrecipes.h"

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
    RecipeWindow* recipewindow = new RecipeWindow(this);
    recipewindow->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    viewrecipes* recipewindow2 = new viewrecipes(this);
    recipewindow2->show();
}

