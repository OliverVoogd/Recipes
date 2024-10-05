#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , index(this)
{
    ui->setupUi(this);

    // Index file tab
    connect(ui->btnOpenDir, &QPushButton::clicked, this, &MainWindow::openWorkingDir);
    connect(ui->btnSaveIndex, &QPushButton::clicked, this, &MainWindow::saveIndexFile);

    // Recipe tab
    setupScrollArea();
    connect(ui->btnEditRecipe, &QPushButton::clicked, this, &MainWindow::openRecipeFile);
    connect(ui->btnOpenNewRecipe, &QPushButton::clicked, this, &MainWindow::openNewRecipeFile);
    connect(ui->btnSaveRecipe, &QPushButton::clicked, this, &MainWindow::saveRecipeFile);
    connect(ui->btnAddIngredient, &QPushButton::clicked, this, &MainWindow::addIngredientToRecipe);

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

void MainWindow::setupScrollArea() {
    QScrollArea *scroll = ui->scrollRecipeIngredients;
    scroll->setWidgetResizable(true);

    QFrame *inner = new QFrame(scroll);
    inner->setLayout(new QVBoxLayout());

    scroll->setWidget(inner);

    auto b = new QPushButton(inner);
    b->setText("Hello");
    inner->layout()->addWidget(b);

    scroll->show();
}
void MainWindow::addIngredientToRecipe() {
    QScrollArea *scroll = ui->scrollRecipeIngredients;
    QWidget *inner = scroll->widget();

    auto b = new QPushButton(inner);
    b->setText("Hello 2");
    inner->layout()->addWidget(b);

}
