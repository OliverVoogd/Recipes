#ifndef SHOPPINGLIST_H
#define SHOPPINGLIST_H

#include <QWidget>

namespace Ui {
class ShoppingList;
}

class ShoppingList : public QWidget
{
    Q_OBJECT

public:
    explicit ShoppingList(QWidget *parent = nullptr);
    ~ShoppingList();

public slots:
    void openWorkingDir();

private:
    Ui::ShoppingList *ui;
};

#endif // SHOPPINGLIST_H
