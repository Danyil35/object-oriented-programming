#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

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

private:
    Ui::MainWindow *ui;
    QLabel *fly;
    QLabel *window;

    void moveFlyAway(const QPoint &mousePos);
    bool isFlyInTrap();
};
#endif // MAINWINDOW_H
