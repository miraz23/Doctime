/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Home;
    QLabel *Title;
    QLineEdit *Phone;
    QLineEdit *Pass;
    QPushButton *Login;
    QLabel *text;
    QPushButton *Sign;
    QLabel *img;
    QWidget *Signin;
    QLineEdit *Pass_2;
    QLabel *text_3;
    QLineEdit *Phone_2;
    QPushButton *Sign_2;
    QLineEdit *Pass_3;
    QLabel *img_2;
    QWidget *Menu;
    QPushButton *Book;
    QPushButton *History;
    QPushButton *Resc;
    QPushButton *Cancel;
    QPushButton *Logout;
    QLabel *text_2;
    QLabel *img_3;
    QWidget *Speac;
    QCommandLinkButton *sp;
    QLabel *text_4;
    QCommandLinkButton *sp_2;
    QCommandLinkButton *sp_7;
    QCommandLinkButton *sp_3;
    QCommandLinkButton *sp_8;
    QCommandLinkButton *sp_6;
    QLabel *img_4;
    QWidget *Doctor;
    QLabel *text_5;
    QRadioButton *doc_2;
    QPushButton *next;
    QRadioButton *doc_1;
    QLabel *img_5;
    QWidget *Det;
    QCommandLinkButton *push;
    QLabel *img_6;
    QWidget *slot;
    QLabel *text_6;
    QCheckBox *sl_2;
    QCheckBox *sl_3;
    QCheckBox *sl_4;
    QCheckBox *sl;
    QCheckBox *sl_5;
    QCheckBox *sl_6;
    QCheckBox *sl_7;
    QCheckBox *sl_8;
    QPushButton *book;
    QLabel *img_13;
    QWidget *Det_2;
    QCommandLinkButton *push_2;
    QLabel *img_8;
    QWidget *Doctor_2;
    QLabel *text_8;
    QRadioButton *doc;
    QRadioButton *doc_3;
    QLabel *img_9;
    QWidget *Det_3;
    QLabel *img_10;
    QWidget *Det_4;
    QLabel *img_11;
    QWidget *Doctor_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(700, 400);
        MainWindow->setMouseTracking(false);
        MainWindow->setFocusPolicy(Qt::StrongFocus);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 700, 400));
        Home = new QWidget();
        Home->setObjectName("Home");
        Title = new QLabel(Home);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(90, 20, 311, 131));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiBold")});
        font.setPointSize(48);
        font.setBold(true);
        Title->setFont(font);
        Title->setFocusPolicy(Qt::NoFocus);
        Title->setAcceptDrops(false);
        Title->setAutoFillBackground(false);
        Title->setStyleSheet(QString::fromUtf8("color: rgb(41, 48, 48);\n"
"color: rgb(0, 170, 255);"));
        Title->setTextFormat(Qt::AutoText);
        Title->setScaledContents(false);
        Phone = new QLineEdit(Home);
        Phone->setObjectName("Phone");
        Phone->setGeometry(QRect(60, 130, 311, 40));
        Pass = new QLineEdit(Home);
        Pass->setObjectName("Pass");
        Pass->setGeometry(QRect(60, 190, 311, 41));
        Login = new QPushButton(Home);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(160, 250, 121, 31));
        QFont font1;
        font1.setPointSize(11);
        Login->setFont(font1);
        Login->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"color: rgb(255, 255, 255);"));
        text = new QLabel(Home);
        text->setObjectName("text");
        text->setGeometry(QRect(140, 310, 171, 16));
        text->setFont(font1);
        text->setStyleSheet(QString::fromUtf8("color: rgb(67, 69, 70);"));
        Sign = new QPushButton(Home);
        Sign->setObjectName("Sign");
        Sign->setGeometry(QRect(180, 340, 80, 24));
        img = new QLabel(Home);
        img->setObjectName("img");
        img->setGeometry(QRect(0, 0, 700, 400));
        img->setPixmap(QPixmap(QString::fromUtf8("../Resourses/img.jpg")));
        img->setScaledContents(true);
        stackedWidget->addWidget(Home);
        img->raise();
        Title->raise();
        Phone->raise();
        Pass->raise();
        Login->raise();
        text->raise();
        Sign->raise();
        Signin = new QWidget();
        Signin->setObjectName("Signin");
        Pass_2 = new QLineEdit(Signin);
        Pass_2->setObjectName("Pass_2");
        Pass_2->setGeometry(QRect(70, 200, 311, 41));
        text_3 = new QLabel(Signin);
        text_3->setObjectName("text_3");
        text_3->setGeometry(QRect(140, 60, 201, 91));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift SemiBold")});
        font2.setPointSize(36);
        font2.setBold(true);
        text_3->setFont(font2);
        text_3->setFocusPolicy(Qt::NoFocus);
        text_3->setAcceptDrops(false);
        text_3->setAutoFillBackground(false);
        text_3->setStyleSheet(QString::fromUtf8("color: rgb(41, 48, 48);\n"
"color: rgb(0, 170, 255);"));
        text_3->setTextFormat(Qt::AutoText);
        text_3->setScaledContents(false);
        Phone_2 = new QLineEdit(Signin);
        Phone_2->setObjectName("Phone_2");
        Phone_2->setGeometry(QRect(70, 150, 311, 40));
        Sign_2 = new QPushButton(Signin);
        Sign_2->setObjectName("Sign_2");
        Sign_2->setGeometry(QRect(170, 320, 121, 31));
        Sign_2->setFont(font1);
        Sign_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"color: rgb(255, 255, 255);"));
        Pass_3 = new QLineEdit(Signin);
        Pass_3->setObjectName("Pass_3");
        Pass_3->setGeometry(QRect(70, 250, 311, 41));
        img_2 = new QLabel(Signin);
        img_2->setObjectName("img_2");
        img_2->setGeometry(QRect(0, 0, 700, 400));
        img_2->setPixmap(QPixmap(QString::fromUtf8("../Resourses/img.jpg")));
        img_2->setScaledContents(true);
        stackedWidget->addWidget(Signin);
        img_2->raise();
        text_3->raise();
        Phone_2->raise();
        Sign_2->raise();
        Pass_2->raise();
        Pass_3->raise();
        Menu = new QWidget();
        Menu->setObjectName("Menu");
        Book = new QPushButton(Menu);
        Book->setObjectName("Book");
        Book->setGeometry(QRect(180, 140, 381, 41));
        History = new QPushButton(Menu);
        History->setObjectName("History");
        History->setGeometry(QRect(180, 190, 381, 41));
        Resc = new QPushButton(Menu);
        Resc->setObjectName("Resc");
        Resc->setGeometry(QRect(180, 240, 381, 41));
        Cancel = new QPushButton(Menu);
        Cancel->setObjectName("Cancel");
        Cancel->setGeometry(QRect(180, 290, 381, 41));
        Logout = new QPushButton(Menu);
        Logout->setObjectName("Logout");
        Logout->setGeometry(QRect(590, 30, 80, 24));
        text_2 = new QLabel(Menu);
        text_2->setObjectName("text_2");
        text_2->setGeometry(QRect(300, 60, 191, 81));
        text_2->setFont(font2);
        text_2->setFocusPolicy(Qt::NoFocus);
        text_2->setAcceptDrops(false);
        text_2->setAutoFillBackground(false);
        text_2->setStyleSheet(QString::fromUtf8("color: rgb(41, 48, 48);\n"
"color: rgb(0, 170, 255);"));
        text_2->setTextFormat(Qt::AutoText);
        text_2->setScaledContents(false);
        img_3 = new QLabel(Menu);
        img_3->setObjectName("img_3");
        img_3->setGeometry(QRect(0, 0, 700, 400));
        img_3->setPixmap(QPixmap(QString::fromUtf8("../Resourses/img2.jpg")));
        img_3->setScaledContents(true);
        stackedWidget->addWidget(Menu);
        img_3->raise();
        Book->raise();
        History->raise();
        Resc->raise();
        Cancel->raise();
        Logout->raise();
        text_2->raise();
        Speac = new QWidget();
        Speac->setObjectName("Speac");
        sp = new QCommandLinkButton(Speac);
        sp->setObjectName("sp");
        sp->setGeometry(QRect(200, 160, 168, 41));
        text_4 = new QLabel(Speac);
        text_4->setObjectName("text_4");
        text_4->setGeometry(QRect(250, 70, 301, 71));
        text_4->setFont(font2);
        text_4->setFocusPolicy(Qt::NoFocus);
        text_4->setAcceptDrops(false);
        text_4->setAutoFillBackground(false);
        text_4->setStyleSheet(QString::fromUtf8("color: rgb(41, 48, 48);\n"
"color: rgb(0, 170, 255);"));
        text_4->setTextFormat(Qt::AutoText);
        text_4->setScaledContents(false);
        sp_2 = new QCommandLinkButton(Speac);
        sp_2->setObjectName("sp_2");
        sp_2->setGeometry(QRect(200, 210, 168, 41));
        sp_7 = new QCommandLinkButton(Speac);
        sp_7->setObjectName("sp_7");
        sp_7->setGeometry(QRect(460, 210, 168, 41));
        sp_3 = new QCommandLinkButton(Speac);
        sp_3->setObjectName("sp_3");
        sp_3->setGeometry(QRect(200, 260, 168, 41));
        sp_8 = new QCommandLinkButton(Speac);
        sp_8->setObjectName("sp_8");
        sp_8->setGeometry(QRect(460, 260, 168, 41));
        sp_6 = new QCommandLinkButton(Speac);
        sp_6->setObjectName("sp_6");
        sp_6->setGeometry(QRect(460, 160, 168, 41));
        img_4 = new QLabel(Speac);
        img_4->setObjectName("img_4");
        img_4->setGeometry(QRect(0, 0, 700, 400));
        img_4->setPixmap(QPixmap(QString::fromUtf8("../Resourses/img2.jpg")));
        img_4->setScaledContents(true);
        stackedWidget->addWidget(Speac);
        img_4->raise();
        sp->raise();
        text_4->raise();
        sp_2->raise();
        sp_7->raise();
        sp_3->raise();
        sp_8->raise();
        sp_6->raise();
        Doctor = new QWidget();
        Doctor->setObjectName("Doctor");
        text_5 = new QLabel(Doctor);
        text_5->setObjectName("text_5");
        text_5->setGeometry(QRect(270, 70, 191, 81));
        text_5->setFont(font2);
        text_5->setFocusPolicy(Qt::NoFocus);
        text_5->setAcceptDrops(false);
        text_5->setAutoFillBackground(false);
        text_5->setStyleSheet(QString::fromUtf8("color: rgb(41, 48, 48);\n"
"color: rgb(0, 170, 255);"));
        text_5->setTextFormat(Qt::AutoText);
        text_5->setScaledContents(false);
        doc_2 = new QRadioButton(Doctor);
        doc_2->setObjectName("doc_2");
        doc_2->setGeometry(QRect(270, 190, 201, 21));
        next = new QPushButton(Doctor);
        next->setObjectName("next");
        next->setGeometry(QRect(310, 330, 80, 24));
        next->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 136, 255);"));
        doc_1 = new QRadioButton(Doctor);
        doc_1->setObjectName("doc_1");
        doc_1->setGeometry(QRect(270, 160, 201, 21));
        img_5 = new QLabel(Doctor);
        img_5->setObjectName("img_5");
        img_5->setGeometry(QRect(0, 0, 700, 400));
        img_5->setPixmap(QPixmap(QString::fromUtf8("../Resourses/img2.jpg")));
        img_5->setScaledContents(true);
        stackedWidget->addWidget(Doctor);
        img_5->raise();
        text_5->raise();
        doc_2->raise();
        next->raise();
        doc_1->raise();
        Det = new QWidget();
        Det->setObjectName("Det");
        push = new QCommandLinkButton(Det);
        push->setObjectName("push");
        push->setGeometry(QRect(660, 180, 31, 41));
        img_6 = new QLabel(Det);
        img_6->setObjectName("img_6");
        img_6->setGeometry(QRect(0, 0, 700, 400));
        img_6->setPixmap(QPixmap(QString::fromUtf8("../Resourses/img4.jpg")));
        img_6->setScaledContents(true);
        stackedWidget->addWidget(Det);
        img_6->raise();
        push->raise();
        slot = new QWidget();
        slot->setObjectName("slot");
        text_6 = new QLabel(slot);
        text_6->setObjectName("text_6");
        text_6->setGeometry(QRect(70, 50, 301, 71));
        text_6->setFont(font2);
        text_6->setFocusPolicy(Qt::NoFocus);
        text_6->setAcceptDrops(false);
        text_6->setAutoFillBackground(false);
        text_6->setStyleSheet(QString::fromUtf8("color: rgb(41, 48, 48);\n"
"color: rgb(0, 170, 255);"));
        text_6->setTextFormat(Qt::AutoText);
        text_6->setScaledContents(false);
        sl_2 = new QCheckBox(slot);
        sl_2->setObjectName("sl_2");
        sl_2->setGeometry(QRect(70, 180, 77, 22));
        sl_3 = new QCheckBox(slot);
        sl_3->setObjectName("sl_3");
        sl_3->setGeometry(QRect(70, 210, 77, 22));
        sl_4 = new QCheckBox(slot);
        sl_4->setObjectName("sl_4");
        sl_4->setGeometry(QRect(70, 240, 77, 22));
        sl = new QCheckBox(slot);
        sl->setObjectName("sl");
        sl->setGeometry(QRect(70, 150, 77, 22));
        sl_5 = new QCheckBox(slot);
        sl_5->setObjectName("sl_5");
        sl_5->setGeometry(QRect(180, 150, 77, 22));
        sl_6 = new QCheckBox(slot);
        sl_6->setObjectName("sl_6");
        sl_6->setGeometry(QRect(180, 180, 77, 22));
        sl_7 = new QCheckBox(slot);
        sl_7->setObjectName("sl_7");
        sl_7->setGeometry(QRect(180, 210, 77, 22));
        sl_8 = new QCheckBox(slot);
        sl_8->setObjectName("sl_8");
        sl_8->setGeometry(QRect(180, 240, 77, 22));
        book = new QPushButton(slot);
        book->setObjectName("book");
        book->setGeometry(QRect(330, 340, 80, 24));
        book->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 255);"));
        img_13 = new QLabel(slot);
        img_13->setObjectName("img_13");
        img_13->setGeometry(QRect(0, 0, 700, 400));
        img_13->setPixmap(QPixmap(QString::fromUtf8("../Resourses/img3.jpg")));
        img_13->setScaledContents(true);
        stackedWidget->addWidget(slot);
        img_13->raise();
        text_6->raise();
        sl_2->raise();
        sl_3->raise();
        sl_4->raise();
        sl->raise();
        sl_5->raise();
        sl_6->raise();
        sl_7->raise();
        sl_8->raise();
        book->raise();
        Det_2 = new QWidget();
        Det_2->setObjectName("Det_2");
        push_2 = new QCommandLinkButton(Det_2);
        push_2->setObjectName("push_2");
        push_2->setGeometry(QRect(660, 180, 31, 41));
        img_8 = new QLabel(Det_2);
        img_8->setObjectName("img_8");
        img_8->setGeometry(QRect(0, 0, 700, 400));
        img_8->setPixmap(QPixmap(QString::fromUtf8("../Resourses/img5.jpg")));
        img_8->setScaledContents(true);
        stackedWidget->addWidget(Det_2);
        img_8->raise();
        push_2->raise();
        Doctor_2 = new QWidget();
        Doctor_2->setObjectName("Doctor_2");
        text_8 = new QLabel(Doctor_2);
        text_8->setObjectName("text_8");
        text_8->setGeometry(QRect(270, 60, 191, 81));
        text_8->setFont(font2);
        text_8->setFocusPolicy(Qt::NoFocus);
        text_8->setAcceptDrops(false);
        text_8->setAutoFillBackground(false);
        text_8->setStyleSheet(QString::fromUtf8("color: rgb(41, 48, 48);\n"
"color: rgb(0, 170, 255);"));
        text_8->setTextFormat(Qt::AutoText);
        text_8->setScaledContents(false);
        doc = new QRadioButton(Doctor_2);
        doc->setObjectName("doc");
        doc->setGeometry(QRect(280, 170, 201, 22));
        doc_3 = new QRadioButton(Doctor_2);
        doc_3->setObjectName("doc_3");
        doc_3->setGeometry(QRect(280, 200, 161, 22));
        img_9 = new QLabel(Doctor_2);
        img_9->setObjectName("img_9");
        img_9->setGeometry(QRect(0, 0, 700, 400));
        img_9->setPixmap(QPixmap(QString::fromUtf8("../Resourses/img2.jpg")));
        img_9->setScaledContents(true);
        stackedWidget->addWidget(Doctor_2);
        img_9->raise();
        text_8->raise();
        doc->raise();
        doc_3->raise();
        Det_3 = new QWidget();
        Det_3->setObjectName("Det_3");
        img_10 = new QLabel(Det_3);
        img_10->setObjectName("img_10");
        img_10->setGeometry(QRect(0, 0, 700, 400));
        img_10->setPixmap(QPixmap(QString::fromUtf8("../Resourses/img6.jpg")));
        img_10->setScaledContents(true);
        stackedWidget->addWidget(Det_3);
        Det_4 = new QWidget();
        Det_4->setObjectName("Det_4");
        img_11 = new QLabel(Det_4);
        img_11->setObjectName("img_11");
        img_11->setGeometry(QRect(0, 0, 700, 400));
        img_11->setPixmap(QPixmap(QString::fromUtf8("../Resourses/img7.jpg")));
        img_11->setScaledContents(true);
        stackedWidget->addWidget(Det_4);
        Doctor_3 = new QWidget();
        Doctor_3->setObjectName("Doctor_3");
        stackedWidget->addWidget(Doctor_3);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Title->setText(QCoreApplication::translate("MainWindow", "DOCTIME", nullptr));
        Phone->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Enter phone number", nullptr));
        Pass->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Enter password", nullptr));
        Login->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        text->setText(QCoreApplication::translate("MainWindow", "Don't have an account?", nullptr));
        Sign->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        img->setText(QString());
        Pass_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Enter password", nullptr));
        text_3->setText(QCoreApplication::translate("MainWindow", "SIGN IN", nullptr));
        Phone_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Enter phone number", nullptr));
        Sign_2->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        Pass_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Confirm password", nullptr));
        img_2->setText(QString());
        Book->setText(QCoreApplication::translate("MainWindow", "Book Appointment", nullptr));
        History->setText(QCoreApplication::translate("MainWindow", "Appointment History", nullptr));
        Resc->setText(QCoreApplication::translate("MainWindow", "Re-schedule Appointment", nullptr));
        Cancel->setText(QCoreApplication::translate("MainWindow", "Cancel Appointment", nullptr));
        Logout->setText(QCoreApplication::translate("MainWindow", "Log out", nullptr));
        text_2->setText(QCoreApplication::translate("MainWindow", "MENU", nullptr));
        img_3->setText(QString());
        sp->setText(QCoreApplication::translate("MainWindow", "Cardiologist", nullptr));
        text_4->setText(QCoreApplication::translate("MainWindow", "SPEACIALITY", nullptr));
        sp_2->setText(QCoreApplication::translate("MainWindow", "Neurologist", nullptr));
        sp_7->setText(QCoreApplication::translate("MainWindow", "Dermalogist", nullptr));
        sp_3->setText(QCoreApplication::translate("MainWindow", "General", nullptr));
        sp_8->setText(QCoreApplication::translate("MainWindow", "Surgeon", nullptr));
        sp_6->setText(QCoreApplication::translate("MainWindow", "Psychiatrist", nullptr));
        img_4->setText(QString());
        text_5->setText(QCoreApplication::translate("MainWindow", "DOCTOR", nullptr));
        doc_2->setText(QCoreApplication::translate("MainWindow", "Prof. Dr. M. Nazrul Islam", nullptr));
        next->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        doc_1->setText(QCoreApplication::translate("MainWindow", "Prof. Dr. Ashok Kumar Dutta", nullptr));
        img_5->setText(QString());
        push->setText(QString());
        img_6->setText(QString());
        text_6->setText(QCoreApplication::translate("MainWindow", "SLOTS", nullptr));
        sl_2->setText(QCoreApplication::translate("MainWindow", "7.15 PM", nullptr));
        sl_3->setText(QCoreApplication::translate("MainWindow", "7.30 PM", nullptr));
        sl_4->setText(QCoreApplication::translate("MainWindow", "7.45 PM", nullptr));
        sl->setText(QCoreApplication::translate("MainWindow", "7.00 PM", nullptr));
        sl_5->setText(QCoreApplication::translate("MainWindow", "8.00 PM", nullptr));
        sl_6->setText(QCoreApplication::translate("MainWindow", "8.15 PM", nullptr));
        sl_7->setText(QCoreApplication::translate("MainWindow", "8.30 PM", nullptr));
        sl_8->setText(QCoreApplication::translate("MainWindow", "8.45 PM", nullptr));
        book->setText(QCoreApplication::translate("MainWindow", "Book", nullptr));
        img_13->setText(QString());
        push_2->setText(QString());
        img_8->setText(QString());
        text_8->setText(QCoreApplication::translate("MainWindow", "DOCTOR", nullptr));
        doc->setText(QCoreApplication::translate("MainWindow", "Dr. Md. Shuktarul Islam", nullptr));
        doc_3->setText(QCoreApplication::translate("MainWindow", "Prof. Dr. Anisul Haque", nullptr));
        img_9->setText(QString());
        img_10->setText(QString());
        img_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
