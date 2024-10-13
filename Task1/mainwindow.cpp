#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_showInfoButton_clicked()
{
    country.setName(ui->nameEdit->text().toStdString());
    country.setCapital(ui->capitalEdit->text().toStdString());
    country.setPopulation(ui->populationEdit->text().toInt());

    QString info = QString("Country: %1\nCapital: %2\nPopulation: %3")
            .arg(QString::fromStdString(country.getName()))
            .arg(QString::fromStdString(country.getCapital()))
            .arg(country.getPopulation());
    ui->infoLabel->setText(info);
}

bool MainWindow::event(QEvent *event){
    if (event->type() == QEvent::KeyPress){
        QKeyEvent * keyEvent = static_cast<QKeyEvent*>(event);
        if (keyEvent->key() == Qt::Key_Return){
            on_showInfoButton_clicked();
            return true;
        }
    }
    return QMainWindow::event(event);
}