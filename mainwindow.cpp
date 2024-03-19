#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_register = new Register;

    connect(ui->pushButton_2,&QPushButton::clicked,[=]()
    {
        m_register->show();
        this->hide();
    });

    //重新提交仓库后
    //第三次提交
    //第四次提交
}

MainWindow::~MainWindow()
{
    delete ui;
}
