#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
protected:
    void keyPressEvent(QKeyEvent *event) override;

private slots:

    void on_pushButton1_clicked();
    void on_pushButton1_2_clicked();
    void on_pushButton1_3_clicked();
    void on_pushButton1_4_clicked();
    void on_pushButton1_5_clicked();
    void on_pushButton1_6_clicked();
    void on_pushButton1_7_clicked();
    void on_pushButton1_8_clicked();
    void on_pushButton1_9_clicked();
    void on_pushButton1_10_clicked();
    void on_pushButton1_11_clicked();
    void on_pushButton1_12_clicked();
    void on_pushButton1_13_clicked();
    void on_pushButton1_14_clicked();
    void on_pushButton1_15_clicked();
    void on_pushButton1_16_clicked();


    void on_actionGitHub_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
