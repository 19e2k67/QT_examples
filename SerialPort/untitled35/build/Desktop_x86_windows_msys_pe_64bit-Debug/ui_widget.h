/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *comboBox_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_7;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 480);
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName("textBrowser");

        horizontalLayout_8->addWidget(textBrowser);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(Widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(Widget);
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(Widget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_2->addWidget(comboBox_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        comboBox_3 = new QComboBox(Widget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");

        horizontalLayout_3->addWidget(comboBox_3);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        comboBox_4 = new QComboBox(Widget);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");

        horizontalLayout_4->addWidget(comboBox_4);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(Widget);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        comboBox_5 = new QComboBox(Widget);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName("comboBox_5");

        horizontalLayout_5->addWidget(comboBox_5);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(Widget);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setCheckable(true);

        horizontalLayout_6->addWidget(pushButton);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_8->addLayout(verticalLayout);

        horizontalLayout_8->setStretch(0, 4);
        horizontalLayout_8->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName("textEdit");

        horizontalLayout_7->addWidget(textEdit);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_2->addWidget(pushButton_3);


        horizontalLayout_7->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_7);

        verticalLayout_3->setStretch(0, 5);
        verticalLayout_3->setStretch(1, 2);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Widget", "115200", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Widget", "9600", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Widget", "19200", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("Widget", "38400", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("Widget", "57600", nullptr));

        label_3->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("Widget", "1", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("Widget", "2", nullptr));

        label_4->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("Widget", "8", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("Widget", "5", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("Widget", "6", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("Widget", "7", nullptr));

        label_5->setText(QCoreApplication::translate("Widget", "\346\243\200\351\252\214\344\275\215", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("Widget", "None", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("Widget", "Even", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("Widget", "Odd", nullptr));
        comboBox_5->setItemText(3, QCoreApplication::translate("Widget", "Space", nullptr));
        comboBox_5->setItemText(4, QCoreApplication::translate("Widget", "Mark", nullptr));

        label_6->setText(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\346\223\215\344\275\234", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\275\240\345\245\275</p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
