#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include <QLabel>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::setCentralWidget(new Client());
}

MainWindow::~MainWindow()
{
    delete ui;
}
