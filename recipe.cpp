#include "recipe.h"

#include <QString>
#include <QVector>
#include <QFile>
#include <QMessageBox>

Recipe::Recipe(IngredientIndex *index): index(index) {}

bool Recipe::loadRecipe(QString recipeFile) {
    QFile file(recipeFile);

    if (!file.open(QIODevice::ReadOnly)) {
        return false;
    }
    QTextStream in(&file);

    // process the file stream
    items.clear();
    QString line;
    int i = 0;
    while (!in.atEnd()) {
        in.readLineInto(&line);
        QStringList rList = line.split(',');
        if (rList.size() != 2) {
            return false;
        }

        int ingIdx = rList[0].toInt();
        int ingQuant = rList[1].toInt();
        items.push_back(RecipeIngredient(index, ingIdx, ingQuant));
    }

    file.close();

    return true;
}

RecipeIngredient &Recipe::addBlankIngredient() {
    items.push_back(RecipeIngredient(index, 0, 0));
    return items.back();
}
