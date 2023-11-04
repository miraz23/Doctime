#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/Projects/Doctime/Database/doctime.db");
    db.open();
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}

void MainWindow::on_Login_clicked()
{
    login_number = ui -> Phone -> text();
    login_password = ui -> Pass -> text();

    QSqlQuery query;
    query.exec("SELECT * FROM user WHERE number = '"+login_number+"' AND password = '"+login_password+"'");

    if(query.next())
    {
        ui->stackedWidget->setCurrentIndex(2);
    }
    else
    {
        QMessageBox :: warning(this, "Login", "Wrong Email or Password!");
    }
    ui -> Phone -> clear();
    ui -> Pass -> clear();
}


void MainWindow::on_Sign_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_Sign_4_clicked()
{
    signin_number = ui->Phone_4->text();
    signin_password = ui->Pass_6->text();

    if (signin_number.isEmpty() || signin_password.isEmpty()) {
        QMessageBox::warning(this, "Sign Up", "Please fill in all fields!!");
        ui->stackedWidget->setCurrentIndex(1);
    }
    else
    {
        QSqlQuery query;
        query.exec("INSERT INTO user(number, password) VALUES('"+signin_number+"', '"+signin_password+"') ");
        QMessageBox :: information (this, "Sign up", "Successfully signed up!!");
        ui->stackedWidget->setCurrentIndex(0);
    }

    ui -> Phone_4 -> clear();
    ui -> Pass_6 -> clear();
}

void MainWindow::on_Logout_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_Book_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_sp_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_next_2_clicked()
{
    ui->doc_6->setAutoExclusive(false);
    ui->doc_5->setAutoExclusive(false);

    if(ui->doc_6->isChecked())
    {
        ui->doc_6->setChecked(false);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(ui->doc_5->isChecked())
    {
        ui->doc_5->setChecked(false);
        ui->stackedWidget->setCurrentIndex(7);
    }

}


void MainWindow::on_push_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_push_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_push_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_push_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_push_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_push_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_push_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_push_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_push_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_push_14_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_push_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_push_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_sp_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_next_4_clicked()
{
    ui->doc_9->setAutoExclusive(false);
    ui->doc_10->setAutoExclusive(false);

    if(ui->doc_9->isChecked())
    {
        ui->doc_9->setChecked(false);
        ui->stackedWidget->setCurrentIndex(9);
    }
    else if(ui->doc_10->isChecked())
    {
        ui->doc_10->setChecked(false);
        ui->stackedWidget->setCurrentIndex(10);
    }
}


void MainWindow::on_sp_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(20);
}


void MainWindow::on_next_3_clicked()
{
    ui->doc->setAutoExclusive(false);
    ui->doc_7->setAutoExclusive(false);

    if(ui->doc->isChecked())
    {
        ui->doc->setChecked(false);
        ui->stackedWidget->setCurrentIndex(21);
    }
    else if(ui->doc_7->isChecked())
    {
        ui->doc_7->setChecked(false);
        ui->stackedWidget->setCurrentIndex(22);
    }
}


void MainWindow::on_sp_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}


void MainWindow::on_next_5_clicked()
{
    ui->doc_11->setAutoExclusive(false);
    ui->doc_12->setAutoExclusive(false);

    if(ui->doc_11->isChecked()) {
        ui->doc_11->setChecked(false);
        ui->stackedWidget->setCurrentIndex(12);}
    else if(ui->doc_12->isChecked()){
        ui->doc_12->setChecked(false);
        ui->stackedWidget->setCurrentIndex(13);}

}


void MainWindow::on_sp_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);
}


void MainWindow::on_next_7_clicked()
{
    ui->doc_15->setAutoExclusive(false);
    ui->doc_16->setAutoExclusive(false);

    if(ui->doc_15->isChecked()) {
        ui->doc_15->setChecked(false);
        ui->stackedWidget->setCurrentIndex(18);}
    else if(ui->doc_16->isChecked()) {
        ui->doc_16->setChecked(false);
        ui->stackedWidget->setCurrentIndex(19);}

}


void MainWindow::on_sp_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);
}


void MainWindow::on_next_6_clicked()
{
    ui->doc_13->setAutoExclusive(false);
    ui->doc_14->setAutoExclusive(false);

    if(ui->doc_13->isChecked()) {
        ui->doc_13->setChecked(false);
        ui->stackedWidget->setCurrentIndex(15);}
    else if(ui->doc_14->isChecked()) {
        ui->doc_14->setChecked(false);
        ui->stackedWidget->setCurrentIndex(16);}
}


void MainWindow::on_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_back_21_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_back_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_back_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_back_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_back_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_back_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_back_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_back_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_push_16_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_push_17_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_push_18_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_push_19_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::on_push_20_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}

void MainWindow::on_push_21_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}

void MainWindow::on_push_22_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);
}


void MainWindow::on_push_23_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);
}


void MainWindow::on_push_24_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);
}


void MainWindow::on_push_25_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);
}


void MainWindow::on_push_26_clicked()
{
    ui->stackedWidget->setCurrentIndex(20);
}


void MainWindow::on_push_27_clicked()
{
    ui->stackedWidget->setCurrentIndex(20);
}


void MainWindow::on_History_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(23);
}


void MainWindow::on_back_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_Cancel_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(24);
}


void MainWindow::on_book_2_clicked()
{
    Patient_name = ui->pat_name->text();
    Patient_age = ui-> patient_age ->text();
    Doctor_name = ui->doc_name->text();
    booking_slot = ui->selected_slot->text();
    contact_number = ui->contact_no->text();
    con_pass = ui->a_pass->text();

    if (Patient_name.isEmpty() || Patient_age.isEmpty() || Doctor_name.isEmpty() || booking_slot.isEmpty() || contact_number.isEmpty() || con_pass.isEmpty()) {
        QMessageBox::warning(this, "Book", "Please fill in all fields!!");
        ui->stackedWidget->setCurrentIndex(4);
    }
    else
    {

        QSqlQuery query;
        query.prepare("INSERT INTO Appointments(Name, Age, Doctor, Slot, Number, conpass) VALUES('"+Patient_name+"', '"+Patient_age+"', '"+Doctor_name+"', '"+booking_slot+"', '"+contact_number+"', '"+con_pass+"') ");

        if(query.exec())
        {
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("SELECT Name, Age, Doctor, Slot, Number FROM Appointments");
            ui-> tableView ->setModel(model);

            ui->stackedWidget->setCurrentIndex(23);
            QMessageBox :: information(this, "Book", "Booked successfully");
        }
        else QMessageBox :: warning(this, "Book", "Invalid. Try Again!");

    }

    ui -> pat_name -> clear();
    ui -> patient_age -> clear();
    ui -> doc_name -> clear();
    ui -> selected_slot -> clear();
    ui -> contact_no -> clear();
    ui -> a_pass -> clear();

}


void MainWindow::on_cancel_3_clicked()
{
    cdname = ui->c_doc->text();
    cslot = ui-> c_slot ->text();
    cpass = ui-> c_pass->text();

    if (cdname.isEmpty() || cslot.isEmpty() || cpass.isEmpty()) {
        QMessageBox::warning(this, "Cancel", "Please fill in all fields!!");
        ui->stackedWidget->setCurrentIndex(24);
    }
    else
    {
        QSqlQuery qry;
        qry.exec("INSERT INTO Cancel(canname, canslot, canpass) VALUES('"+cdname+"', '"+cslot+"', '"+cpass+"') ");

        QSqlQuery query;
        query.exec("DELETE FROM Appointments WHERE Doctor = '" + cdname + "' AND Slot = '"+cslot+"' AND conpass = '"+cpass+"'  ");

        if (query.numRowsAffected() == 0) {
            QMessageBox::critical(this, "No Match Found", "No matching records were found.");}
        else{
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM Appointments");
        ui->tableView->setModel(model);}

        QMessageBox::information(this, "Cancel", "Cancelled successfully!!");
        ui->stackedWidget->setCurrentIndex(2);

    }
    ui -> c_doc -> clear();
    ui -> c_slot -> clear();
    ui -> c_pass -> clear();
}


