#include "viewrecipes.h"
#include "ui_viewrecipes.h"

viewrecipes::viewrecipes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::viewrecipes)
{
    ui->setupUi(this);
}

viewrecipes::~viewrecipes()
{
    delete ui;
}
