#ifndef RECIPE_H
#define RECIPE_H

#include <QWidget>

#include "ingredientindex.h"

struct RecipeIngredient {
    const IngredientIndex * const index;
    int typeIndex;
    int quantity;

    RecipeIngredient(const IngredientIndex * const index, int typeIndex, int quantity): index(index), typeIndex(typeIndex), quantity(quantity) {}
    const Ingredient &type() const { return index->at(typeIndex); }
};

class Recipe
{
private:
    IngredientIndex *index;
    QVector<RecipeIngredient> items;
public:
    Recipe(IngredientIndex *index);

    RecipeIngredient &operator[](qsizetype index) { return items[index]; }
    RecipeIngredient &at(qsizetype index) { return this->operator[](index); }
    const qsizetype size() const { return items.size(); }

    RecipeIngredient &addBlankIngredient();
    bool loadRecipe(QString recipeFile);
};

#endif // RECIPE_H
