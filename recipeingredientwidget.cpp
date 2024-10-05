#include "recipeingredientwidget.h"

#include <QPushButton>
#include <QHBoxLayout>

RecipeIngredientWidget::RecipeIngredientWidget(QWidget *parent, const RecipeIngredient *rIng)
    : QWidget{parent}
    , ing(rIng)
{
    innerLayout = new QHBoxLayout(this);

    auto b = new QPushButton();
    b->setText(ing->type().name);
    innerLayout->addWidget(b);
}

RecipeIngredientWidget::~RecipeIngredientWidget() {
    delete innerLayout;
}
