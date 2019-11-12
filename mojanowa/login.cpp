#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);

}

login::~login()
{
    delete ui;
}


void login::on_pushButton_clicked()
{
    QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/DB/project.db");
    if(!db.open()){
            qDebug()<<"Problem z otwarciem bazy";
        }
        else
            qDebug()<<"Połączono z bazą :)";


    QString user,password;
    user=ui->lineEdit_user->text();
    password=ui->lineEdit_password->text();

 QSqlQuery qry;
 if(qry.exec("select * from logowanie where Uzytkownik='"+user+"'and Haslo='"+password+"'"))
    {
     int count=0;
     while(qry.next())
        {
         count++;
        }

     if(count==1)
     {
     ui->label->setText("Hasło prawidłowe");
     this->hide();
     db.close();
     BloodDonors blooddonors;
     blooddonors.setModal(true);
     blooddonors.exec();
     }

     if(count>1)
     ui->label->setText("Zdublowano Login i Hasło");
     if(count<1)
     ui->label->setText("Hasło nie prawidłowe!!");
     db.removeDatabase(QSqlDatabase::defaultConnection);
         if(!db.open())
             qDebug()<<"Zamknięto bazę :)";
         else
             qDebug()<<"Problem z zamknięciem bazy";
    }

}

void login::on_pushButton_2_clicked()
{
    newblooddonors newblooddonors;
    newblooddonors.setModal(true);
    newblooddonors.exec();

}
