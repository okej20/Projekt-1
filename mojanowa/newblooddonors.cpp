#include "newblooddonors.h"
#include "ui_newblooddonors.h"
#include <QMessageBox>


newblooddonors::newblooddonors(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newblooddonors)
{
    ui->setupUi(this);


}

newblooddonors::~newblooddonors()
{
    delete ui;
}

void newblooddonors::on_pushButton_clicked()
{
    QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/DB/project.db");
    if(!db.open()){
            qDebug()<<"Problem z otwarciem bazy";
        }
        else
            qDebug()<<"Połączono z bazą :)";
    QString user,password, plec;
    user=ui->lineEdit_user->text();
    password=ui->lineEdit_password->text();
    plec=ui->lineEdit_plec->text();
    if(!db.isOpen())
    {
        qDebug()<<"Failed to open database";
        return;
    }
    QSqlQuery qry;
    qry.prepare("INSERT INTO logowanie (Uzytkownik,Haslo,Plec) VALUES ('"+user+"','"+password+"','"+plec+"') ");

    if(qry.exec())
    {
        QMessageBox::critical(this,tr("Save"),tr("Saved"));

    }
    else
    {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }



this->hide();
db.close();

}
