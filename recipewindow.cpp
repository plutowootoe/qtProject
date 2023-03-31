#include "recipewindow.h"
#include "ui_recipewindow.h"
#include "recipe.h"
#include "recipes.h"
#include "mainwindow.h"
#include <QtWidgets>
#include "viewrecipes.h"

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


void RecipeWindow::on_horizontalSlider_sliderMoved(int position)
{
    rating = position;
}

void RecipeWindow::on_radioButton_5_toggled(bool checked)
{
    if(checked){
        difficulty = 0;
    }
}


void RecipeWindow::on_radioButton_4_toggled(bool checked)
{
    if(checked){
        difficulty = 1;
    }
}


void RecipeWindow::on_radioButton_toggled(bool checked)
{
    if(checked){
        difficulty = 2;
    }
}


void RecipeWindow::on_radioButton_2_toggled(bool checked)
{
    if(checked){
        difficulty = 3;
    }
}


void RecipeWindow::on_radioButton_3_toggled(bool checked)
{
    if(checked){
        difficulty = 4;
    }
}

string difficultyCheck(){
    string difficulty1;
    if(difficulty==1){
        difficulty1 = "Easy";
    }
    else if(difficulty == 2){
        difficulty1 = "Medium";
    }
    else if(difficulty == 3){
        difficulty1 = "Difficut";
    }
    else{
        difficulty1 = "Medium";
    }
}

void RecipeWindow::on_checkBox_3_toggled(bool checked)
{
    if(checked){
        allergen.vegetarian=1;
    }
}


void RecipeWindow::on_checkBox_2_toggled(bool checked)
{
    if(checked){
        allergen.vegan=1;
    }
}


void RecipeWindow::on_checkBox_4_toggled(bool checked)
{
    if(checked){
        allergen.gluten_free=1;
    }
}


void RecipeWindow::on_checkBox_toggled(bool checked)
{
    if(checked){
        allergen.lactose_free=1;
    }
}


void RecipeWindow::on_lineEdit_textChanged(const QString &arg1)
{
    name = arg1;
}

void RecipeWindow::on_pushButton_clicked(bool checked)
{
    std::vector<Recipe> recipes;
    if(checked){
    recipes.push_back(name,allergen,rating,difficulty1);
   }
    viewrecipes.listofRecipes->addItem(recipes);
}

