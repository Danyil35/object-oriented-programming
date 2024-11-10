#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QEvent>
#include <QMouseEvent>
#include <QMessageBox>
#include <QApplication>
#include <QTimer>
#include <cmath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), fly(nullptr), window(nullptr), trap(nullptr)
{
    ui->setupUi(this);
    fly = ui->fly;
    window = ui->window;
    trap = ui->trap;

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::moveFlyTowardsWindow);
    timer->start(50);  // Рухати кожні 50 мс
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::event(QEvent *event)
{
    if (event->type() == QEvent::MouseMove) {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
        QPoint mousePos = mouseEvent->pos();

        moveFlyAway(mousePos);

        if (isFlyInTrap()) {
            QMessageBox::information(this, "Game over", "The fly is trapped!");
            QApplication::quit();
        }
    }
    return QMainWindow::event(event);
}

void MainWindow::moveFlyAway(const QPoint &mousePos)
{
    QPoint flyPos = fly->pos();
    int distance = (flyPos - mousePos).manhattanLength();

    if (distance < 55) {
        int dx = (flyPos.x() > mousePos.x()) ? 75 : -75;
        int dy = (flyPos.y() > mousePos.y()) ? 75 : -75;
        fly->move(flyPos.x() + dx, flyPos.y() + dy);
    }
}

bool MainWindow::isFlyInTrap()
{
    QRect flyRect = fly->geometry();
    QRect trapRect = trap->geometry();

    return flyRect.intersects(trapRect);
}

void MainWindow::moveFlyTowardsWindow()
{
    if (isFlyInTrap()) {
        QMessageBox::information(this, "Game over", "The fly is trapped!");
        QApplication::quit();
        return;
    }

    QPoint flyPos = fly->pos();
    QPoint windowPos = window->pos();

    int deltaX = windowPos.x() - flyPos.x();
    int deltaY = windowPos.y() - flyPos.y();
    double distance = std::sqrt(deltaX * deltaX + deltaY * deltaY);

    if (distance < 5) {
        QMessageBox::information(this, "Game over", "The fly has reached the window!");
        QApplication::quit();
        return;
    }

    double speed = 2.0;

    double moveX = (deltaX / distance) * speed;
    double moveY = (deltaY / distance) * speed;

    fly->move(flyPos.x() + moveX, flyPos.y() + moveY);
}
