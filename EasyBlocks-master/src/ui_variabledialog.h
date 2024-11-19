/********************************************************************************
** Form generated from reading UI file 'variabledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VARIABLEDIALOG_H
#define UI_VARIABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_VariableDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QGroupBox *varTypeBox;
    QGridLayout *gridLayout_2;
    QRadioButton *varButton;
    QRadioButton *listButton;
    QGroupBox *locationBox;
    QGridLayout *gridLayout_3;
    QRadioButton *onlyButton;
    QRadioButton *allButton;
    QDialogButtonBox *buttonBox;
    QGroupBox *valueTypeBlock;
    QGridLayout *gridLayout_4;
    QRadioButton *numButton;
    QRadioButton *textButton;
    QRadioButton *boolButton;

    void setupUi(QDialog *VariableDialog)
    {
        if (VariableDialog->objectName().isEmpty())
            VariableDialog->setObjectName(QString::fromUtf8("VariableDialog"));
        VariableDialog->resize(319, 224);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VariableDialog->sizePolicy().hasHeightForWidth());
        VariableDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(VariableDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nameLabel = new QLabel(VariableDialog);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        nameEdit = new QLineEdit(VariableDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 0, 1, 1, 1);

        varTypeBox = new QGroupBox(VariableDialog);
        varTypeBox->setObjectName(QString::fromUtf8("varTypeBox"));
        gridLayout_2 = new QGridLayout(varTypeBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        varButton = new QRadioButton(varTypeBox);
        varButton->setObjectName(QString::fromUtf8("varButton"));
        varButton->setChecked(true);

        gridLayout_2->addWidget(varButton, 0, 0, 1, 1);

        listButton = new QRadioButton(varTypeBox);
        listButton->setObjectName(QString::fromUtf8("listButton"));

        gridLayout_2->addWidget(listButton, 1, 0, 1, 1);


        gridLayout->addWidget(varTypeBox, 1, 0, 1, 1);

        locationBox = new QGroupBox(VariableDialog);
        locationBox->setObjectName(QString::fromUtf8("locationBox"));
        gridLayout_3 = new QGridLayout(locationBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        onlyButton = new QRadioButton(locationBox);
        onlyButton->setObjectName(QString::fromUtf8("onlyButton"));
        onlyButton->setChecked(true);

        gridLayout_3->addWidget(onlyButton, 0, 0, 1, 1);

        allButton = new QRadioButton(locationBox);
        allButton->setObjectName(QString::fromUtf8("allButton"));

        gridLayout_3->addWidget(allButton, 1, 0, 1, 1);


        gridLayout->addWidget(locationBox, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(VariableDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

        valueTypeBlock = new QGroupBox(VariableDialog);
        valueTypeBlock->setObjectName(QString::fromUtf8("valueTypeBlock"));
        gridLayout_4 = new QGridLayout(valueTypeBlock);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        numButton = new QRadioButton(valueTypeBlock);
        numButton->setObjectName(QString::fromUtf8("numButton"));
        numButton->setChecked(true);

        gridLayout_4->addWidget(numButton, 0, 0, 1, 1);

        textButton = new QRadioButton(valueTypeBlock);
        textButton->setObjectName(QString::fromUtf8("textButton"));

        gridLayout_4->addWidget(textButton, 0, 1, 1, 1);

        boolButton = new QRadioButton(valueTypeBlock);
        boolButton->setObjectName(QString::fromUtf8("boolButton"));

        gridLayout_4->addWidget(boolButton, 0, 2, 1, 1);


        gridLayout->addWidget(valueTypeBlock, 2, 0, 1, 2);


        retranslateUi(VariableDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), VariableDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VariableDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(VariableDialog);
    } // setupUi

    void retranslateUi(QDialog *VariableDialog)
    {
        VariableDialog->setWindowTitle(QApplication::translate("VariableDialog", "Dialog", nullptr));
        nameLabel->setText(QApplication::translate("VariableDialog", "Variable Name:", nullptr));
        varTypeBox->setTitle(QApplication::translate("VariableDialog", "Variable Type", nullptr));
        varButton->setText(QApplication::translate("VariableDialog", "Variable", nullptr));
        listButton->setText(QApplication::translate("VariableDialog", "List", nullptr));
        locationBox->setTitle(QApplication::translate("VariableDialog", "Location", nullptr));
        onlyButton->setText(QApplication::translate("VariableDialog", "Only this sprite", nullptr));
        allButton->setText(QApplication::translate("VariableDialog", "All sprites", nullptr));
        valueTypeBlock->setTitle(QApplication::translate("VariableDialog", "Value Type", nullptr));
        numButton->setText(QApplication::translate("VariableDialog", "Number", nullptr));
        textButton->setText(QApplication::translate("VariableDialog", "Text", nullptr));
        boolButton->setText(QApplication::translate("VariableDialog", "Boolean", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VariableDialog: public Ui_VariableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VARIABLEDIALOG_H
