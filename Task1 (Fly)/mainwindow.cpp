#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QEvent>
#include <QMouseEvent>
#include <QMessageBox>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    fly = ui->fly;
    window = ui->window;
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::event(QEvent *event){
    if (event->type() == QEvent::MouseMove){
        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
        QPoint mousePos = mouseEvent->pos();

        moveFlyAway(mousePos);

        if (isFlyInTrap()) {
            QMessageBox::information(this, "Game over", "The fly poured out");
            QApplication::quit();
        }
    }
    return QMainWindow::event(event);
}

void MainWindow::moveFlyAway(const QPoint &mousePos){
    QPoint flyPos = fly->pos();

    int distance = (flyPos - mousePos).manhattanLength();

    if (distance < 55){
        int dx = (flyPos.x() > mousePos.x()) ? 75 : -75;
        int dy = (flyPos.y() > mousePos.y()) ? 75 : -75;

        fly->move(flyPos.x() + dx, flyPos.y() + dy);
    }
}

bool MainWindow::isFlyInTrap(){
    QRect flyRect = fly->geometry();
    QRect windowRect = window->geometry();

    return flyRect.intersects(windowRect);
}
