/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_registerDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *user_label;
    QLineEdit *user_edit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *email_label;
    QLineEdit *email_edit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *pwd_label;
    QLineEdit *pwd_edit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *sure_label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *iden_label;
    QLineEdit *iden_edit;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *sure_btn;
    QPushButton *pushButton_3;

    void setupUi(QDialog *registerDialog)
    {
        if (registerDialog->objectName().isEmpty())
            registerDialog->setObjectName("registerDialog");
        registerDialog->resize(401, 517);
        verticalLayout_2 = new QVBoxLayout(registerDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        user_label = new QLabel(registerDialog);
        user_label->setObjectName("user_label");

        horizontalLayout_2->addWidget(user_label);

        user_edit = new QLineEdit(registerDialog);
        user_edit->setObjectName("user_edit");

        horizontalLayout_2->addWidget(user_edit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        email_label = new QLabel(registerDialog);
        email_label->setObjectName("email_label");

        horizontalLayout_4->addWidget(email_label);

        email_edit = new QLineEdit(registerDialog);
        email_edit->setObjectName("email_edit");

        horizontalLayout_4->addWidget(email_edit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pwd_label = new QLabel(registerDialog);
        pwd_label->setObjectName("pwd_label");

        horizontalLayout_6->addWidget(pwd_label);

        pwd_edit = new QLineEdit(registerDialog);
        pwd_edit->setObjectName("pwd_edit");

        horizontalLayout_6->addWidget(pwd_edit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        sure_label = new QLabel(registerDialog);
        sure_label->setObjectName("sure_label");

        horizontalLayout_7->addWidget(sure_label);

        lineEdit = new QLineEdit(registerDialog);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_7->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        iden_label = new QLabel(registerDialog);
        iden_label->setObjectName("iden_label");

        horizontalLayout_8->addWidget(iden_label);

        iden_edit = new QLineEdit(registerDialog);
        iden_edit->setObjectName("iden_edit");

        horizontalLayout_8->addWidget(iden_edit);

        pushButton = new QPushButton(registerDialog);
        pushButton->setObjectName("pushButton");

        horizontalLayout_8->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        sure_btn = new QPushButton(registerDialog);
        sure_btn->setObjectName("sure_btn");

        horizontalLayout_9->addWidget(sure_btn);

        pushButton_3 = new QPushButton(registerDialog);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_9->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(registerDialog);

        QMetaObject::connectSlotsByName(registerDialog);
    } // setupUi

    void retranslateUi(QDialog *registerDialog)
    {
        registerDialog->setWindowTitle(QCoreApplication::translate("registerDialog", "Dialog", nullptr));
        user_label->setText(QCoreApplication::translate("registerDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        email_label->setText(QCoreApplication::translate("registerDialog", "\351\202\256\347\256\261", nullptr));
        pwd_label->setText(QCoreApplication::translate("registerDialog", "\345\257\206\347\240\201", nullptr));
        sure_label->setText(QCoreApplication::translate("registerDialog", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        iden_label->setText(QCoreApplication::translate("registerDialog", "\351\252\214\350\257\201\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("registerDialog", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", nullptr));
        sure_btn->setText(QCoreApplication::translate("registerDialog", "\347\241\256\350\256\244", nullptr));
        pushButton_3->setText(QCoreApplication::translate("registerDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerDialog: public Ui_registerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
