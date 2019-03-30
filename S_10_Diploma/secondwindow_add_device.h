#ifndef SECONDWINDOW_ADD_DEVICE_H
#define SECONDWINDOW_ADD_DEVICE_H

#include <QDialog>

namespace Ui {
class SecondWindow_add_device;
}

class SecondWindow_add_device : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindow_add_device(QWidget *parent = nullptr);
    ~SecondWindow_add_device();

private slots:
       void on_addDevice_clicked();
private:
    Ui::SecondWindow_add_device *ui;
};

#endif // SECONDWINDOW_ADD_DEVICE_H
