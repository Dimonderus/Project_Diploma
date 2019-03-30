/********************************************************************************
** Form generated from reading UI file 'secondwindow_add_device.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_ADD_DEVICE_H
#define UI_SECONDWINDOW_ADD_DEVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow_add_device
{
public:
    QGroupBox *groupBox;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Device_Name;
    QHBoxLayout *horizontalLayout;
    QPushButton *addDevice;
    QPushButton *pushButton_2;

    void setupUi(QDialog *SecondWindow_add_device)
    {
        if (SecondWindow_add_device->objectName().isEmpty())
            SecondWindow_add_device->setObjectName(QString::fromUtf8("SecondWindow_add_device"));
        SecondWindow_add_device->resize(225, 143);
        groupBox = new QGroupBox(SecondWindow_add_device);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 221, 141));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 20, 161, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 40, 191, 83));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        Device_Name = new QLineEdit(widget);
        Device_Name->setObjectName(QString::fromUtf8("Device_Name"));

        horizontalLayout_2->addWidget(Device_Name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addDevice = new QPushButton(widget);
        addDevice->setObjectName(QString::fromUtf8("addDevice"));

        horizontalLayout->addWidget(addDevice);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SecondWindow_add_device);

        QMetaObject::connectSlotsByName(SecondWindow_add_device);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow_add_device)
    {
        SecondWindow_add_device->setWindowTitle(QApplication::translate("SecondWindow_add_device", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("SecondWindow_add_device", "GroupBox", nullptr));
        label_3->setText(QApplication::translate("SecondWindow_add_device", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262", nullptr));
        label->setText(QApplication::translate("SecondWindow_add_device", "\320\243\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276", nullptr));
        label_2->setText(QApplication::translate("SecondWindow_add_device", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        addDevice->setText(QApplication::translate("SecondWindow_add_device", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QApplication::translate("SecondWindow_add_device", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow_add_device: public Ui_SecondWindow_add_device {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_ADD_DEVICE_H
