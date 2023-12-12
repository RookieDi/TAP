#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect button signals to slots
    connect(ui->celsiusButton, &QPushButton::clicked, this, &MainWindow::celsiusToFahrenheit);
    connect(ui->fahrenheitButton, &QPushButton::clicked, this, &MainWindow::fahrenheitToCelsius);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::celsiusToFahrenheit()
{
    bool ok;
    double celsius = ui->celsiusLineEdit->text().toDouble(&ok);
    if (ok) {
        double fahrenheit = celsius * 9 / 5 + 32;
        ui->resultLabel->setText(QString::number(fahrenheit) + " °F");
    } else {
        ui->resultLabel->setText("Invalid input");
    }
}

void MainWindow::fahrenheitToCelsius()
{
    bool ok;
    double fahrenheit = ui->fahrenheitLineEdit->text().toDouble(&ok);
    if (ok) {
        double celsius = (fahrenheit - 32) * 5 / 9;
        ui->resultLabel->setText(QString::number(celsius) + " °C");
    } else {
        ui->resultLabel->setText("Invalid input");
    }
}

