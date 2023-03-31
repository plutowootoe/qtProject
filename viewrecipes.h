#ifndef VIEWRECIPES_H
#define VIEWRECIPES_H

#include <QMainWindow>

namespace Ui {
class viewrecipes;
}

class viewrecipes : public QMainWindow
{
    Q_OBJECT

public:
    explicit viewrecipes(QWidget *parent = nullptr);
    ~viewrecipes();

private:
    Ui::viewrecipes *ui;
};

#endif // VIEWRECIPES_H
