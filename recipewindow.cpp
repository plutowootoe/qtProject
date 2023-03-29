#include "recipewindow.h"
#include "ui_recipewindow.h"

RecipeWindow::RecipeWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RecipeWindow)
{
    ui->setupUi(this);
}

RecipeWindow::~RecipeWindow()
{
    delete ui;
}
