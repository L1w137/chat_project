/********************************************************************************
** Form generated from reading UI file 'Registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QLabel *erro_tip;
    QHBoxLayout *horizontalLayout;
    QLabel *user_lable;
    QLineEdit *user_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *email_label;
    QLineEdit *email_lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *pwd_label;
    QLineEdit *pwd_lineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *comfirm_label;
    QLineEdit *comfirm_lineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *v_code_label;
    QLineEdit *v_code_lineEdit;
    QPushButton *v_code_pushButton;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *confirm_pushButton;
    QPushButton *cancel_pushButton;
    QWidget *page_2;

    void setupUi(QDialog *Register_Dialog)
    {
        if (Register_Dialog->objectName().isEmpty())
            Register_Dialog->setObjectName("Register_Dialog");
        Register_Dialog->resize(372, 468);
        verticalLayout_2 = new QVBoxLayout(Register_Dialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(Register_Dialog);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget = new QWidget(page);
        widget->setObjectName("widget");
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        erro_tip = new QLabel(widget);
        erro_tip->setObjectName("erro_tip");
        erro_tip->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(erro_tip);


        verticalLayout_3->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        user_lable = new QLabel(page);
        user_lable->setObjectName("user_lable");
        user_lable->setMinimumSize(QSize(0, 25));
        user_lable->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_lable);

        user_lineEdit = new QLineEdit(page);
        user_lineEdit->setObjectName("user_lineEdit");
        user_lineEdit->setMinimumSize(QSize(0, 25));
        user_lineEdit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_lineEdit);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        email_label = new QLabel(page);
        email_label->setObjectName("email_label");

        horizontalLayout_2->addWidget(email_label);

        email_lineEdit = new QLineEdit(page);
        email_lineEdit->setObjectName("email_lineEdit");
        email_lineEdit->setMinimumSize(QSize(0, 25));

        horizontalLayout_2->addWidget(email_lineEdit);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pwd_label = new QLabel(page);
        pwd_label->setObjectName("pwd_label");

        horizontalLayout_4->addWidget(pwd_label);

        pwd_lineEdit = new QLineEdit(page);
        pwd_lineEdit->setObjectName("pwd_lineEdit");
        pwd_lineEdit->setMinimumSize(QSize(0, 25));
        pwd_lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(pwd_lineEdit);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        comfirm_label = new QLabel(page);
        comfirm_label->setObjectName("comfirm_label");

        horizontalLayout_5->addWidget(comfirm_label);

        comfirm_lineEdit = new QLineEdit(page);
        comfirm_lineEdit->setObjectName("comfirm_lineEdit");
        comfirm_lineEdit->setMinimumSize(QSize(0, 25));

        horizontalLayout_5->addWidget(comfirm_lineEdit);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        v_code_label = new QLabel(page);
        v_code_label->setObjectName("v_code_label");

        horizontalLayout_6->addWidget(v_code_label);

        v_code_lineEdit = new QLineEdit(page);
        v_code_lineEdit->setObjectName("v_code_lineEdit");
        v_code_lineEdit->setMinimumSize(QSize(0, 25));

        horizontalLayout_6->addWidget(v_code_lineEdit);

        v_code_pushButton = new QPushButton(page);
        v_code_pushButton->setObjectName("v_code_pushButton");

        horizontalLayout_6->addWidget(v_code_pushButton);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        confirm_pushButton = new QPushButton(page);
        confirm_pushButton->setObjectName("confirm_pushButton");

        horizontalLayout_7->addWidget(confirm_pushButton);

        cancel_pushButton = new QPushButton(page);
        cancel_pushButton->setObjectName("cancel_pushButton");

        horizontalLayout_7->addWidget(cancel_pushButton);


        verticalLayout_3->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Register_Dialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Register_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Register_Dialog)
    {
        Register_Dialog->setWindowTitle(QCoreApplication::translate("Register_Dialog", "Dialog", nullptr));
        erro_tip->setText(QCoreApplication::translate("Register_Dialog", "\351\224\231\350\257\257\346\217\220\347\244\272", nullptr));
        user_lable->setText(QCoreApplication::translate("Register_Dialog", "\347\224\250\346\210\267:", nullptr));
        email_label->setText(QCoreApplication::translate("Register_Dialog", "\351\202\256\347\256\261:", nullptr));
        pwd_label->setText(QCoreApplication::translate("Register_Dialog", "\345\257\206\347\240\201:", nullptr));
        comfirm_label->setText(QCoreApplication::translate("Register_Dialog", "\347\241\256\350\256\244:", nullptr));
        v_code_label->setText(QCoreApplication::translate("Register_Dialog", "\351\252\214\350\257\201:", nullptr));
        v_code_pushButton->setText(QCoreApplication::translate("Register_Dialog", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", nullptr));
        confirm_pushButton->setText(QCoreApplication::translate("Register_Dialog", "\347\241\256\350\256\244", nullptr));
        cancel_pushButton->setText(QCoreApplication::translate("Register_Dialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register_Dialog: public Ui_Register_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
