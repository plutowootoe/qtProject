#ifndef RECIPEWINDOW_H
#define RECIPEWINDOW_H

#include <QMainWindow>

namespace Ui {
class RecipeWindow;
}

class RecipeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RecipeWindow(QWidget *parent = nullptr);
    ~RecipeWindow();


private:
    Ui::RecipeWindow *ui;
};

#endif // RECIPEWINDOW_H
