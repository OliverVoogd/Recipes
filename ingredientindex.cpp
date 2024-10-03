#include "ingredientindex.h"

#include <QFile>
#include <QFileDialog>
#include <QMessageBox>

void IngredientIndex::loadFile(QString dir) {
    QString filename(dir + "/index.txt");
    QFile file(filename);

    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::critical(parent, "Error", "Could not open file: " + filename);
        return;
    }
    QTextStream in(&file);

    // process the file stream
    QMessageBox::information(parent, "TODO", "Implement index process");
    file.close();
}
