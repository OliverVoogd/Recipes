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

    ingredients.clear();
    QTextStream in(&file);

    // process the file stream
    QString line;
    int i = 0;
    while (!in.atEnd()) {
        in.readLineInto(&line);

        QStringList ingList = line.split(',');
        if (ingList.size() != 2) {
            QMessageBox::critical(parent, "Error", "Cannot read index file: " + filename);
            return;
        }

        Ingredient ing{ingList[0], ingList[1], i++};
        ingredients.push_back(ing);
    }

    file.close();
}

const QString IngredientIndex::getPlainText() const {
    QString out;

    for (const auto &ing : ingredients) {
        out += ing.name + "," + ing.unit + "\n";
    }

    return out;
}
