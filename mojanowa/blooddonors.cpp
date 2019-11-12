#include "blooddonors.h"
#include "ui_blooddonors.h"
#include <QMessageBox>

BloodDonors::BloodDonors(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BloodDonors)
{
    ui->setupUi(this);

}
BloodDonors::~BloodDonors()
{
    delete ui;
}

void BloodDonors::on_radioButton_donkrew_clicked()
{
    QDate current = ui->dateEdit->date(),
    returnDate=current;

    if(ui->radioButton_M->isChecked())
    {
   returnDate = current.addDays(60);
    }
    else
    {
   returnDate = current.addDays(90);
    }
       ui->Kalendarz->setSelectedDate(returnDate);
       ui->Kalendarz->showSelectedDate();
}
void BloodDonors::on_radioButton_donOso_clicked()
{
    QDate current = ui->dateEdit->date();
       QDate returnDate = current.addDays(30);
       ui->Kalendarz->setSelectedDate(returnDate);
       ui->Kalendarz->showSelectedDate();
}

void BloodDonors::on_radioButton_donPlyt_clicked()
{
    QDate current = ui->dateEdit->date();
       QDate returnDate = current.addDays(60);
       ui->Kalendarz->setSelectedDate(returnDate);
       ui->Kalendarz->showSelectedDate();
}

void BloodDonors::on_pushButton_clicked()
{

    QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/DB/project.db");
    if(!db.open()){
            qDebug()<<"Problem z otwarciem bazy";
        }
        else
            qDebug()<<"Połączono z bazą :)";

    QString user,vaule, date;
    user=ui->lineEdit_db->text();
    vaule=ui->lineEdit_suma->text();
    date=ui->dateEdit->text();

    if(!db.isOpen())
    {
        qDebug()<<"Otwarcie bazy danych zaknczończone niepowodzeniem";
        return;
    }
    QSqlQuery qry;
    qry.prepare("INSERT INTO krew (Uzytkownik,Ilosc,DataDonacji) VALUES ('"+user+"','"+vaule+"','"+date+"') ");

    if(qry.exec())
    {
        QMessageBox::critical(this,tr("Save"),tr("Saved"));

    }
    else
    {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }

    db.close();
    db.removeDatabase(QSqlDatabase::defaultConnection);
    if(!db.open())
        qDebug()<<"Zamknięto bazę :)";
    else
        qDebug()<<"Problem z zamknięciem bazy";


}

void BloodDonors::on_lineEdit_krew_textEdited(const QString &arg1)
{
         QString text = ui->lineEdit_krew->text();
        int m = text.toInt();
        Krewpelna = m * 450;
}

void BloodDonors::on_lineEdit_osocze_textEdited(const QString &arg1)
{
    QString text = ui->lineEdit_osocze->text();
        int n = text.toInt();
        Osocze = n * 250;
}

void BloodDonors::on_lineEdit_plytki_textEdited(const QString &arg1)
{
    QString text = ui->lineEdit_plytki->text();
       int o = text.toInt();
       Plytkikrwi = o * 500;
}

void BloodDonors::on_pushButton_2_clicked()
{
    int x =Plytkikrwi+Osocze+Krewpelna;
    ui->lineEdit_suma->setText(QString::number(x));
    ui->progressBar->setValue(x);
}


void BloodDonors::on_radioButton_zhdk1_clicked()
{
    if(ui->radioButton_M->isChecked())
    {
        ui->progressBar->reset();
        ui->progressBar->setMaximum(18000);}
    else
    {
        ui->progressBar->reset();
        ui->progressBar->setMaximum(15000);
    }
}

void BloodDonors::on_radioButton_zhdk2_clicked()
{

    if(ui->radioButton_M->isChecked())
    {
        ui->progressBar->reset();
        ui->progressBar->setMaximum(12000);}
    else
    {
        ui->progressBar->reset();
        ui->progressBar->setMaximum(10000);
    }
}

void BloodDonors::on_radioButton_zhdk3_clicked()
{
    if(ui->radioButton_M->isChecked())
    {
        ui->progressBar->reset();
        ui->progressBar->setMaximum(6000);}
    else
    {
        ui->progressBar->reset();
        ui->progressBar->setMaximum(5000);
    }
}


void BloodDonors::on_pushButton_baza_clicked()
{
    QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/DB/project.db");
    if(!db.open()){
            qDebug()<<"Problem z otwarciem bazy";
        }
        else
            qDebug()<<"Połączono z bazą :)";

    QSqlQueryModel* modal = new QSqlQueryModel();
       QSqlQuery *qry = new QSqlQuery(db);

       qry->prepare("SELECT * FROM krew");
       qry->exec();
       modal->setQuery(*qry);

       ui->tableView->setModel(modal);
       db.close();
       db.removeDatabase(QSqlDatabase::defaultConnection);
           if(!db.open())
               qDebug()<<"Zamknięto bazę :)";
           else
               qDebug()<<"Problem z zamknięciem bazy";

}

void BloodDonors::on_radioButton_zhdkN_clicked()
{
    ui->progressBar->reset();
    ui->progressBar->setMaximum(20000);
}
