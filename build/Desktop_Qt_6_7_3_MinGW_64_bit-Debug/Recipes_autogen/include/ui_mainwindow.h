/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *IndexView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnOpenDir;
    QSpacerItem *horizontalSpacer;
    QLabel *indexLabel;
    QPlainTextEdit *txtIndexFile;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSaveIndex;
    QWidget *RecipeView;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnOpenNewRecipe;
    QPushButton *btnEditRecipe;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *txtRecipeFileName;
    QLabel *indexLabel_2;
    QListWidget *lstRecipeView;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnSaveRecipe;
    QWidget *ShoppingView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(805, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(6, 9, 791, 581));
        IndexView = new QWidget();
        IndexView->setObjectName("IndexView");
        verticalLayoutWidget = new QWidget(IndexView);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 20, 741, 501));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnOpenDir = new QPushButton(verticalLayoutWidget);
        btnOpenDir->setObjectName("btnOpenDir");

        horizontalLayout_2->addWidget(btnOpenDir);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        indexLabel = new QLabel(verticalLayoutWidget);
        indexLabel->setObjectName("indexLabel");

        verticalLayout->addWidget(indexLabel);

        txtIndexFile = new QPlainTextEdit(verticalLayoutWidget);
        txtIndexFile->setObjectName("txtIndexFile");

        verticalLayout->addWidget(txtIndexFile);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnSaveIndex = new QPushButton(verticalLayoutWidget);
        btnSaveIndex->setObjectName("btnSaveIndex");

        horizontalLayout->addWidget(btnSaveIndex);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget->addTab(IndexView, QString());
        RecipeView = new QWidget();
        RecipeView->setObjectName("RecipeView");
        verticalLayoutWidget_2 = new QWidget(RecipeView);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(20, 20, 741, 501));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnOpenNewRecipe = new QPushButton(verticalLayoutWidget_2);
        btnOpenNewRecipe->setObjectName("btnOpenNewRecipe");

        horizontalLayout_3->addWidget(btnOpenNewRecipe);

        btnEditRecipe = new QPushButton(verticalLayoutWidget_2);
        btnEditRecipe->setObjectName("btnEditRecipe");

        horizontalLayout_3->addWidget(btnEditRecipe);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        txtRecipeFileName = new QLineEdit(verticalLayoutWidget_2);
        txtRecipeFileName->setObjectName("txtRecipeFileName");
        txtRecipeFileName->setEnabled(true);
        txtRecipeFileName->setReadOnly(true);

        horizontalLayout_3->addWidget(txtRecipeFileName);


        verticalLayout_2->addLayout(horizontalLayout_3);

        indexLabel_2 = new QLabel(verticalLayoutWidget_2);
        indexLabel_2->setObjectName("indexLabel_2");

        verticalLayout_2->addWidget(indexLabel_2);

        lstRecipeView = new QListWidget(verticalLayoutWidget_2);
        lstRecipeView->setObjectName("lstRecipeView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lstRecipeView->sizePolicy().hasHeightForWidth());
        lstRecipeView->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lstRecipeView);

        comboBox = new QComboBox(verticalLayoutWidget_2);
        comboBox->setObjectName("comboBox");

        verticalLayout_2->addWidget(comboBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        btnSaveRecipe = new QPushButton(verticalLayoutWidget_2);
        btnSaveRecipe->setObjectName("btnSaveRecipe");

        horizontalLayout_4->addWidget(btnSaveRecipe);


        verticalLayout_2->addLayout(horizontalLayout_4);

        tabWidget->addTab(RecipeView, QString());
        ShoppingView = new QWidget();
        ShoppingView->setObjectName("ShoppingView");
        tabWidget->addTab(ShoppingView, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnOpenDir->setText(QCoreApplication::translate("MainWindow", "Open Working Directory", nullptr));
        indexLabel->setText(QCoreApplication::translate("MainWindow", "Edit Index", nullptr));
        btnSaveIndex->setText(QCoreApplication::translate("MainWindow", "Save Index", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(IndexView), QCoreApplication::translate("MainWindow", "Index", nullptr));
        btnOpenNewRecipe->setText(QCoreApplication::translate("MainWindow", "New Recipe", nullptr));
        btnEditRecipe->setText(QCoreApplication::translate("MainWindow", "Edit Recipe File", nullptr));
        txtRecipeFileName->setPlaceholderText(QString());
        indexLabel_2->setText(QCoreApplication::translate("MainWindow", "Edit Recipe File", nullptr));
        btnSaveRecipe->setText(QCoreApplication::translate("MainWindow", "Save Recipe", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(RecipeView), QCoreApplication::translate("MainWindow", "Recipe", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ShoppingView), QCoreApplication::translate("MainWindow", "Shopping List", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
