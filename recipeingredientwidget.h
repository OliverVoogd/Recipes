#ifndef RECIPEINGREDIENTWIDGET_H
#define RECIPEINGREDIENTWIDGET_H

#include <QWidget>
#include <QHBoxLayout>

#include "recipe.h"

class RecipeIngredientWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RecipeIngredientWidget(QWidget *parent = nullptr, const RecipeIngredient *rIngredient = nullptr);
    ~RecipeIngredientWidget();
signals:

private:
    const RecipeIngredient *ing;

    QHBoxLayout *innerLayout;
    // pointers to inner elements (combo boxes)

};

#endif // RECIPEINGREDIENTWIDGET_H
