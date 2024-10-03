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

    connect(ui->btnOpenDir, &QPushButton::clicked, this, &MainWindow::openWorkingDir);
    connect(ui->btnSaveIndex, &QPushButton::clicked, this, &MainWindow::saveIndexFile);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openWorkingDir() {
    QString dir = QFileDialog::getExistingDirectory(this, "Open Directory",
                                                    "/home",
                                                    QFileDialog::ShowDirsOnly
                                                        | QFileDialog::DontResolveSymlinks);

    if (dir != "") {
        workingDir = dir;

        index.loadFile(workingDir);
    }
}

void MainWindow::saveIndexFile() {

}
