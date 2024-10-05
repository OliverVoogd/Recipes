#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , recipeList(ui->lstRecipeView)
    , index(this)
{
    ui->setupUi(this);

    // Index file tab
    connect(ui->btnOpenDir, &QPushButton::clicked, this, &MainWindow::openWorkingDir);
    connect(ui->btnSaveIndex, &QPushButton::clicked, this, &MainWindow::saveIndexFile);

    // Recipe tab
    connect(ui->btnEditRecipe, &QPushButton::clicked, this, &MainWindow::openRecipeFile);
    connect(ui->btnOpenNewRecipe, &QPushButton::clicked, this, &MainWindow::openNewRecipeFile);
    connect(ui->btnSaveRecipe, &QPushButton::clicked, this, &MainWindow::saveRecipeFile);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openWorkingDir() {
    QString dir = QFileDialog::getExistingDirectory(this, "Open Directory",
                                                    R"(D:\Windows\ProgrammingOffline\QT)",
                                                    QFileDialog::ShowDirsOnly
                                                        | QFileDialog::DontResolveSymlinks);

    if (dir != "") {
        workingDir = dir;

        index.loadFile(workingDir);

        ui->txtIndexFile->setPlainText(index.getPlainText());
    }
}

void MainWindow::saveIndexFile() {
    QMessageBox::information(this, "missing func", "This function needs implementation");
}

void MainWindow::openNewRecipeFile() {
    QMessageBox::information(this, "missing func", "This function needs implementation");
}

void MainWindow::openRecipeFile() {
    if (workingDir == "") {
        QMessageBox::critical(this, "Missing Index File", "Please open an Index file first");
        return;
    }

    QString recipeFile = QFileDialog::getOpenFileName(this, "Open Recipe File", workingDir, "Text Files (*.txt)");
    ui->txtRecipeFileName->setText(recipeFile);
}

void MainWindow::saveRecipeFile() {
    QMessageBox::information(this, "missing func", "This function needs implementation");
}
