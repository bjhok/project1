#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "register.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Register* m_register;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
