/********************************************************************************
** Form generated from reading UI file 'notatka.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTATKA_H
#define UI_NOTATKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Notatka
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QDialogButtonBox *Zapisz;

    void setupUi(QDialog *Notatka)
    {
        if (Notatka->objectName().isEmpty())
            Notatka->setObjectName(QString::fromUtf8("Notatka"));
        Notatka->resize(400, 300);
        gridLayout = new QGridLayout(Notatka);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(Notatka);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        Zapisz = new QDialogButtonBox(Notatka);
        Zapisz->setObjectName(QString::fromUtf8("Zapisz"));
        Zapisz->setOrientation(Qt::Horizontal);
        Zapisz->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(Zapisz, 1, 0, 1, 1);


        retranslateUi(Notatka);
        QObject::connect(Zapisz, &QDialogButtonBox::accepted, Notatka, qOverload<>(&QDialog::accept));
        QObject::connect(Zapisz, &QDialogButtonBox::rejected, Notatka, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Notatka);
    } // setupUi

    void retranslateUi(QDialog *Notatka)
    {
        Notatka->setWindowTitle(QCoreApplication::translate("Notatka", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notatka: public Ui_Notatka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTATKA_H
