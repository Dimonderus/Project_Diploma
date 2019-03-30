#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow_add_device.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui_add_device = new SecondWindow_add_device(this);
    ui_add_device->show();
}
