#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>

#include "ingredientindex.h"
#include "recipe.h"

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
    void addIngredientToRecipe();

    // tab widget
    void currentTabChanged(int current);

private:
    // Pointers to ui elements
    Ui::MainWindow *ui;
    QFrame *innerRecipeScroll;

    QString workingDir;
    IngredientIndex index;
    Recipe *loadedRecipe;

    void setupScrollArea();

    void loadIndex();
};
#endif // MAINWINDOW_H
