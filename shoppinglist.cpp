#include "shoppinglist.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QMessageBox>

ShoppingList::ShoppingList(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ShoppingList)
{
    ui->setupUi(this);
}

ShoppingList::~ShoppingList()
{
    delete ui;
}

void ShoppingList::openWorkingDir() {
    QString filename = QFileDialog::getOpenFileName(this, "Open File", "D:/", "Text files (*.txt)");

    if (filename != "") {
        QFile file(filename);

        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, "Error", "Could not open file");
            return;
        }
        QTextStream in(&file);
        ui->indexFileTextEdit->setPlainText(in.readAll());
        file.close();
    }
}
