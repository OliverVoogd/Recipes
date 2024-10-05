#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>

#include "ingredientindex.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void openWorkingDir();
    void saveIndexFile();
    void openNewRecipeFile();
    void openRecipeFile();
    void saveRecipeFile();

private:
    // Pointers to ui elements
    Ui::MainWindow *ui;
    QListWidget *recipeList;

    QString workingDir;
    IngredientIndex index;
};
#endif // MAINWINDOW_H
