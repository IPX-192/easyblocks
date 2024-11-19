/********************************************************************************
** Form generated from reading UI file 'spriteimagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPRITEIMAGEDIALOG_H
#define UI_SPRITEIMAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SpriteImageDialog
{
public:
    QGridLayout *gridLayout;
    QGraphicsView *preview;
    QVBoxLayout *verticalLayout;
    QListWidget *imagesList;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *removeBtn;
    QToolButton *addBtn;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SpriteImageDialog)
    {
        if (SpriteImageDialog->objectName().isEmpty())
            SpriteImageDialog->setObjectName(QString::fromUtf8("SpriteImageDialog"));
        SpriteImageDialog->resize(389, 340);
        gridLayout = new QGridLayout(SpriteImageDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        preview = new QGraphicsView(SpriteImageDialog);
        preview->setObjectName(QString::fromUtf8("preview"));
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        preview->setBackgroundBrush(brush);

        gridLayout->addWidget(preview, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        imagesList = new QListWidget(SpriteImageDialog);
        imagesList->setObjectName(QString::fromUtf8("imagesList"));

        verticalLayout->addWidget(imagesList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        removeBtn = new QToolButton(SpriteImageDialog);
        removeBtn->setObjectName(QString::fromUtf8("removeBtn"));

        horizontalLayout->addWidget(removeBtn);

        addBtn = new QToolButton(SpriteImageDialog);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));

        horizontalLayout->addWidget(addBtn);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(SpriteImageDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);


        retranslateUi(SpriteImageDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SpriteImageDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SpriteImageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SpriteImageDialog);
    } // setupUi

    void retranslateUi(QDialog *SpriteImageDialog)
    {
        SpriteImageDialog->setWindowTitle(QApplication::translate("SpriteImageDialog", "Dialog", nullptr));
        removeBtn->setText(QApplication::translate("SpriteImageDialog", "-", nullptr));
        addBtn->setText(QApplication::translate("SpriteImageDialog", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpriteImageDialog: public Ui_SpriteImageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRITEIMAGEDIALOG_H
