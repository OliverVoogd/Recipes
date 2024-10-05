#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "recipe.h"

#include <QFileDialog>
#include <QFileInfo>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , index(this)
    , workingDir(QString())
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

    // Tab Widget
    connect(ui->tabWidget, &QTabWidget::currentChanged, this, &MainWindow::currentTabChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadIndex() {
    if (workingDir == "") {
        QMessageBox::critical(this, "Index File", "Failed to load index file at " + workingDir);
    }

    index.loadFile(workingDir);
}

void MainWindow::openWorkingDir() {
    QString dir = QFileDialog::getExistingDirectory(this, "Open Directory",
                                                    R"(D:\Windows\ProgrammingOffline\QT)",
                                                    QFileDialog::ShowDirsOnly
                                                        | QFileDialog::DontResolveSymlinks);

    if (dir != "") {
        workingDir = dir;

        loadIndex();
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
    QString recipeFile = QFileDialog::getOpenFileName(this, "Open Recipe File", workingDir, "Text Files (*.txt)");
    QFileInfo fInfo(recipeFile);
    workingDir = fInfo.absolutePath();

    // Load Index File
    loadIndex();

    ui->txtRecipeFileName->setText(recipeFile);

    Recipe recipe(&index);
    if (!recipe.loadRecipe(recipeFile)) {
        QMessageBox::critical(this, "Error", "Could not load recipe file: " + recipeFile);
    }

    for (int i = 0; i < recipe.size(); i++) {
        auto b = new QPushButton(innerRecipeScroll);
        b->setText(recipe.at(i).type.name);
        innerRecipeScroll->layout()->addWidget(b);
    }
}



void MainWindow::saveRecipeFile() {
    QMessageBox::information(this, "missing func", "This function needs implementation");
}

void MainWindow::setupScrollArea() {
    QScrollArea *scroll = ui->scrollRecipeIngredients;
    scroll->setWidgetResizable(true);

    innerRecipeScroll = new QFrame(scroll);
    innerRecipeScroll->setLayout(new QVBoxLayout());

    scroll->setWidget(innerRecipeScroll);
    scroll->show();
}
void MainWindow::addIngredientToRecipe() {
    QScrollArea *scroll = ui->scrollRecipeIngredients;
    QWidget *inner = scroll->widget();

    auto b = new QPushButton(inner);
    b->setText("Hello 2");
    inner->layout()->addWidget(b);

}


void MainWindow::currentTabChanged(int current) {
    if (current == 0) {
        // changed to the index tab
        loadIndex();
        ui->txtIndexFile->setPlainText(index.getPlainText());
    }
}
