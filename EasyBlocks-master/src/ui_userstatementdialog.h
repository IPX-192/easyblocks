/********************************************************************************
** Form generated from reading UI file 'userstatementdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSTATEMENTDIALOG_H
#define UI_USERSTATEMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserStatementDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *labelBtn;
    QPushButton *numBtn;
    QPushButton *textBtn;
    QPushButton *boolBtn;
    QPushButton *numVarBtn;
    QPushButton *textVarBtn;
    QPushButton *boolVarBtn;
    QPushButton *numListBtn;
    QPushButton *textListBtn;
    QPushButton *boolListBtn;

    void setupUi(QDialog *UserStatementDialog)
    {
        if (UserStatementDialog->objectName().isEmpty())
            UserStatementDialog->setObjectName(QString::fromUtf8("UserStatementDialog"));
        UserStatementDialog->resize(461, 313);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UserStatementDialog->sizePolicy().hasHeightForWidth());
        UserStatementDialog->setSizePolicy(sizePolicy);
        buttonBox = new QDialogButtonBox(UserStatementDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(110, 260, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        horizontalLayoutWidget = new QWidget(UserStatementDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 441, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget = new QWidget(UserStatementDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 441, 191));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelBtn = new QPushButton(layoutWidget);
        labelBtn->setObjectName(QString::fromUtf8("labelBtn"));

        gridLayout->addWidget(labelBtn, 0, 0, 1, 1);

        numBtn = new QPushButton(layoutWidget);
        numBtn->setObjectName(QString::fromUtf8("numBtn"));

        gridLayout->addWidget(numBtn, 0, 1, 1, 1);

        textBtn = new QPushButton(layoutWidget);
        textBtn->setObjectName(QString::fromUtf8("textBtn"));

        gridLayout->addWidget(textBtn, 1, 0, 1, 1);

        boolBtn = new QPushButton(layoutWidget);
        boolBtn->setObjectName(QString::fromUtf8("boolBtn"));

        gridLayout->addWidget(boolBtn, 1, 1, 1, 1);

        numVarBtn = new QPushButton(layoutWidget);
        numVarBtn->setObjectName(QString::fromUtf8("numVarBtn"));

        gridLayout->addWidget(numVarBtn, 2, 0, 1, 1);

        textVarBtn = new QPushButton(layoutWidget);
        textVarBtn->setObjectName(QString::fromUtf8("textVarBtn"));

        gridLayout->addWidget(textVarBtn, 2, 1, 1, 1);

        boolVarBtn = new QPushButton(layoutWidget);
        boolVarBtn->setObjectName(QString::fromUtf8("boolVarBtn"));

        gridLayout->addWidget(boolVarBtn, 3, 0, 1, 1);

        numListBtn = new QPushButton(layoutWidget);
        numListBtn->setObjectName(QString::fromUtf8("numListBtn"));

        gridLayout->addWidget(numListBtn, 3, 1, 1, 1);

        textListBtn = new QPushButton(layoutWidget);
        textListBtn->setObjectName(QString::fromUtf8("textListBtn"));

        gridLayout->addWidget(textListBtn, 4, 0, 1, 1);

        boolListBtn = new QPushButton(layoutWidget);
        boolListBtn->setObjectName(QString::fromUtf8("boolListBtn"));

        gridLayout->addWidget(boolListBtn, 4, 1, 1, 1);

        buttonBox->raise();
        layoutWidget->raise();
        horizontalLayoutWidget->raise();

        retranslateUi(UserStatementDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), UserStatementDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UserStatementDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(UserStatementDialog);
    } // setupUi

    void retranslateUi(QDialog *UserStatementDialog)
    {
        UserStatementDialog->setWindowTitle(QApplication::translate("UserStatementDialog", "Dialog", nullptr));
        labelBtn->setText(QApplication::translate("UserStatementDialog", "Add Text Label", nullptr));
        numBtn->setText(QApplication::translate("UserStatementDialog", "Add Number Input", nullptr));
        textBtn->setText(QApplication::translate("UserStatementDialog", "Add Text Input", nullptr));
        boolBtn->setText(QApplication::translate("UserStatementDialog", "Add Boolean Input", nullptr));
        numVarBtn->setText(QApplication::translate("UserStatementDialog", "Add Number Var", nullptr));
        textVarBtn->setText(QApplication::translate("UserStatementDialog", "Add Text Var", nullptr));
        boolVarBtn->setText(QApplication::translate("UserStatementDialog", "Add Boolean Var", nullptr));
        numListBtn->setText(QApplication::translate("UserStatementDialog", "Add Number List", nullptr));
        textListBtn->setText(QApplication::translate("UserStatementDialog", "Add Text List", nullptr));
        boolListBtn->setText(QApplication::translate("UserStatementDialog", "Add Boolean List", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserStatementDialog: public Ui_UserStatementDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSTATEMENTDIALOG_H
