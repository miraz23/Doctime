#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMessageBox>
#include<QSqlDatabase>
#include<QSqlQuery>
#include <QSqlQueryModel>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Login_clicked();

    void on_Sign_clicked();

    void on_Sign_4_clicked();

    void on_Logout_2_clicked();

    void on_Book_2_clicked();

    void on_sp_5_clicked();

    void on_next_2_clicked();

    void on_push_3_clicked();

    void on_push_4_clicked();

    void on_sp_10_clicked();

    void on_next_4_clicked();

    void on_sp_4_clicked();

    void on_next_3_clicked();

    void on_sp_12_clicked();

    void on_next_5_clicked();

    void on_sp_11_clicked();

    void on_next_7_clicked();

    void on_sp_9_clicked();

    void on_next_6_clicked();

    void on_back_clicked();

    void on_back_3_clicked();

    void on_back_4_clicked();

    void on_back_5_clicked();

    void on_back_6_clicked();

    void on_back_7_clicked();

    void on_back_8_clicked();

    void on_back_2_clicked();

    void on_push_16_clicked();

    void on_push_17_clicked();

    void on_push_18_clicked();

    void on_push_19_clicked();

    void on_push_20_clicked();

    void on_push_21_clicked();

    void on_push_22_clicked();

    void on_push_23_clicked();

    void on_push_24_clicked();

    void on_push_25_clicked();

    void on_push_26_clicked();

    void on_push_27_clicked();

    void on_push_7_clicked();

    void on_push_8_clicked();

    void on_push_9_clicked();

    void on_push_10_clicked();

    void on_push_11_clicked();

    void on_push_12_clicked();

    void on_push_13_clicked();

    void on_push_14_clicked();

    void on_push_5_clicked();

    void on_push_6_clicked();

    void on_History_2_clicked();

    void on_back_9_clicked();

    void on_back_10_clicked();

    void on_Cancel_2_clicked();

    void on_book_2_clicked();

    void on_cancel_3_clicked();

    void on_cancel_4_clicked();

    void on_back_21_clicked();

private:
    Ui::MainWindow *ui;
    QString login_number, login_password;
    QString signin_number, signin_password;
    QString Patient_name, Patient_age, Doctor_name, booking_slot, contact_number, con_pass;
    QString cdname, cslot, cpass;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
