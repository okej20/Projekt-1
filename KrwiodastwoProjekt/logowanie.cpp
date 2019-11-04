#include "logowanie.h"
#include "ui_logowanie.h"

logowanie::logowanie(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::logowanie)
{
    ui->setupUi(this);
}

logowanie::~logowanie()
{
    delete ui;
}



void logowanie::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
     db.setHostName("localhost");
     db.setUserName("root");
     db.setPassword("");
     db.setDatabaseName("project");
     if(db.open()){ QMessageBox::information(this, "Connection", "Database connect sucesfull");}
     else {QMessageBox::information(this, "Not connection", "Database connect unsucesfull");}

}
