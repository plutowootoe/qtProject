#ifndef RECIPEWINDOW_H
#define RECIPEWINDOW_H

#include <QMainWindow>

namespace Ui {
class RecipeWindow;
}
// bit structure
struct allergensData{
    unsigned vegetarian:1;
    unsigned vegan:1;
    unsigned gluten_free:1;
    unsigned lactose_free:1;
};

 int difficulty;
class RecipeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RecipeWindow(QWidget *parent = nullptr);
    ~RecipeWindow();
    std::string difficultyCheck();


private slots:
    void on_horizontalSlider_sliderMoved(int position);

    void on_radioButton_5_toggled(bool checked);

    void on_radioButton_4_toggled(bool checked);

    void on_radioButton_toggled(bool checked);

    void on_radioButton_2_toggled(bool checked);

    void on_radioButton_3_toggled(bool checked);

    void on_checkBox_3_toggled(bool checked);

    void on_checkBox_2_toggled(bool checked);


    void on_checkBox_4_toggled(bool checked);

    void on_checkBox_toggled(bool checked);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_clicked(bool checked);

private:
    Ui::RecipeWindow *ui;
    int rating;
    int difficulty;
    QString name;
    allergensData allergen;
    std::string difficulty1;
};

#endif // RECIPEWINDOW_H
