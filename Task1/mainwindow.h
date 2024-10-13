#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "country.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    bool event(QEvent *event) override;

private slots:
    void on_showInfoButton_clicked();

private:
    Ui::MainWindow *ui;    
    Country country;
};
#endif // MAINWINDOW_H