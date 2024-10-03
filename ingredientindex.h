#ifndef INGREDIENTINDEX_H
#define INGREDIENTINDEX_H
#include <QString>
#include <QVector>
#include <QWidget>

struct Ingredient {
    const QString name;
    const QString unit;
    const int index;
};

class IngredientIndex
{
public:
    IngredientIndex(QWidget *parent): parent(parent) {};
    IngredientIndex(QWidget *parent, QString filename): parent(parent) { loadFile(filename); };

    qsizetype size() const { return ingredients.size(); };

    const Ingredient &operator[](qsizetype index) const { return ingredients[index]; }

    const QString getPlainText();
    void loadFile(QString filename);
private:
    QWidget *parent;
    QVector<Ingredient> ingredients;
};

#endif // INGREDIENTINDEX_H
