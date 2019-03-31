#include "secondwindow_add_device.h"
#include "ui_secondwindow_add_device.h"
#include "xmlfileread.h"
#include <QString>

SecondWindow_add_device::SecondWindow_add_device(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow_add_device)
{
    ui->setupUi(this);
}

SecondWindow_add_device::~SecondWindow_add_device()
{
    delete ui;
}

void SecondWindow_add_device::on_addDevice_clicked()
{
    QString Name_Device = ui->Device_Name->text();

}



void SecondWindow_add_device::on_comboBox_currentIndexChanged(const QString &arg1)
{
    ui->comboBox->addItem(QVariant(class.value).toString());
}
