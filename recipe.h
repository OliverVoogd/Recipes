#ifndef RECIPE_H
#define RECIPE_H

#include <QWidget>

#include "ingredientindex.h"

struct RecipeIngredient {
    const Ingredient &type;
    int quantity;

    RecipeIngredient(const Ingredient &type, int quantity): type(type), quantity(quantity) {};
};

class Recipe
{
private:
    IngredientIndex *index;
    QVector<RecipeIngredient> items;
public:
    Recipe(IngredientIndex *index);

    const RecipeIngredient &operator[](qsizetype index) const { return items[index]; }
    const RecipeIngredient &at(qsizetype index) const { return this->operator[](index); }
    const qsizetype size() const { return items.size(); }
    bool loadRecipe(QString recipeFile);
};

#endif // RECIPE_H
