#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;
    QString workingDir;
    IngredientIndex index;
};
#endif // MAINWINDOW_H
