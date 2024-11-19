/********************************************************************************
** Form generated from reading UI file 'programwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMWINDOW_H
#define UI_PROGRAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "screenview.h"

QT_BEGIN_NAMESPACE

class Ui_ProgramWindow
{
public:
    QAction *actionShow_Variables;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    ScreenView *screenView;
    QTextEdit *console;
    QVBoxLayout *verticalLayout;
    QLabel *question;
    QLineEdit *answer;
    QMenuBar *menubar;
    QMenu *menuView;

    void setupUi(QMainWindow *ProgramWindow)
    {
        if (ProgramWindow->objectName().isEmpty())
            ProgramWindow->setObjectName(QString::fromUtf8("ProgramWindow"));
        ProgramWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProgramWindow->sizePolicy().hasHeightForWidth());
        ProgramWindow->setSizePolicy(sizePolicy);
        actionShow_Variables = new QAction(ProgramWindow);
        actionShow_Variables->setObjectName(QString::fromUtf8("actionShow_Variables"));
        centralwidget = new QWidget(ProgramWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(17);
        gridLayout->setVerticalSpacing(1);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        screenView = new ScreenView(centralwidget);
        screenView->setObjectName(QString::fromUtf8("screenView"));

        gridLayout->addWidget(screenView, 0, 0, 1, 2);

        console = new QTextEdit(centralwidget);
        console->setObjectName(QString::fromUtf8("console"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        console->setFont(font);
        console->setReadOnly(true);

        gridLayout->addWidget(console, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 17, 17);
        question = new QLabel(centralwidget);
        question->setObjectName(QString::fromUtf8("question"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        question->setFont(font1);

        verticalLayout->addWidget(question);

        answer = new QLineEdit(centralwidget);
        answer->setObjectName(QString::fromUtf8("answer"));

        verticalLayout->addWidget(answer);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        ProgramWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ProgramWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        ProgramWindow->setMenuBar(menubar);

        menubar->addAction(menuView->menuAction());
        menuView->addAction(actionShow_Variables);

        retranslateUi(ProgramWindow);

        QMetaObject::connectSlotsByName(ProgramWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ProgramWindow)
    {
        ProgramWindow->setWindowTitle(QApplication::translate("ProgramWindow", "MainWindow", nullptr));
        actionShow_Variables->setText(QApplication::translate("ProgramWindow", "Show Variables", nullptr));
        console->setHtml(QApplication::translate("ProgramWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        question->setText(QApplication::translate("ProgramWindow", "Geef hier het antwoord op de vraag in:", nullptr));
        menuView->setTitle(QApplication::translate("ProgramWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgramWindow: public Ui_ProgramWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMWINDOW_H
