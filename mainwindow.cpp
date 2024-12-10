#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <sstream>
#include <QKeyEvent>
#include <QDesktopServices>
#include <QUrl>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setFocus();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        ui->pushButton1_12->click();
    }
}

void MainWindow::on_pushButton1_clicked()
{
    QString currentText = ui->lineEdit->text();
    currentText.append("1");
    ui->lineEdit->setText(currentText);
}


void MainWindow::on_pushButton1_2_clicked()
{
    QString currentText = ui->lineEdit->text();
    currentText.append("2");
    ui->lineEdit->setText(currentText);

}
void MainWindow::on_pushButton1_3_clicked()
{
    QString currentText = ui->lineEdit->text();
    currentText.append("3");
    ui->lineEdit->setText(currentText);

}
void MainWindow::on_pushButton1_4_clicked()
{
    QString currentText = ui->lineEdit->text();
    currentText.append("4");
    ui->lineEdit->setText(currentText);

}
void MainWindow::on_pushButton1_5_clicked()
{
    QString currentText = ui->lineEdit->text();
    currentText.append("5");
    ui->lineEdit->setText(currentText);

}
void MainWindow::on_pushButton1_6_clicked()
{
    QString currentText = ui->lineEdit->text();
    currentText.append("6");
    ui->lineEdit->setText(currentText);

}
void MainWindow::on_pushButton1_7_clicked()
{
    QString currentText = ui->lineEdit->text();
    currentText.append("7");
    ui->lineEdit->setText(currentText);

}
void MainWindow::on_pushButton1_8_clicked()
{
    QString currentText = ui->lineEdit->text();
    currentText.append("8");
    ui->lineEdit->setText(currentText);

}
void MainWindow::on_pushButton1_9_clicked()
{
    QString currentText = ui->lineEdit->text();
    currentText.append("9");
    ui->lineEdit->setText(currentText);

}
void MainWindow::on_pushButton1_10_clicked()
{
    ui->lineEdit->clear();

}
void MainWindow::on_pushButton1_11_clicked()
{
    QString currentText = ui->lineEdit->text();
    currentText.append("0");
    ui->lineEdit->setText(currentText);

}
void MainWindow::on_pushButton1_12_clicked()
{
    QString input;
    double num1, num2;
    char operation;
    input = ui->lineEdit->text();
    std::stringstream ss(input.toStdString());
    ss >> num1 >> operation >> num2;
    double result = 0;
    bool valid = true;

    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            ui->lineEdit->clear();
            ui->lineEdit->setText("Error: Division by zero");
            valid = false;
        } else {
            result = num1 / num2;
        }
        break;
    default:
        ui->lineEdit->clear();
        ui->lineEdit->setText("Error: Invalid operation");
        valid = false;
        break;
    }
    if (valid) {
        ui->lineEdit->setText(QString::number(result));
    }
}


void MainWindow::on_pushButton1_13_clicked()
{
    QString currenttext = ui->lineEdit->text();
    currenttext.append("+");
    ui->lineEdit->setText(currenttext);


}


void MainWindow::on_pushButton1_14_clicked()
{

    QString currentText = ui->lineEdit->text();
    currentText.append("-");
    ui->lineEdit->setText(currentText);

}
void MainWindow::on_pushButton1_15_clicked()
{
    QString currentText = ui->lineEdit->text();
    currentText.append("/");
    ui->lineEdit->setText(currentText);
}
void MainWindow::on_pushButton1_16_clicked()
{
    QString currentText = ui->lineEdit->text();
    currentText.append("*");
    ui->lineEdit->setText(currentText);

}

void MainWindow::on_actionGitHub_triggered()
{
    QUrl url("https://github.com/mtm-x");
    QDesktopServices::openUrl(url);
}

