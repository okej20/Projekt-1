#include "projekt1.h"
#include "ui_projekt1.h"

Projekt1::Projekt1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Projekt1)
{
    ui->setupUi(this);


    Osocze = 0;
    Krewpelna = 0;
    Plytkikrwi = 0;





}

Projekt1::~Projekt1()
{
    delete ui;
}




void Projekt1::on_Data_userDateChanged(const QDate &date)
{

}

void Projekt1::on_RodzajDonacji_currentIndexChanged(const QString &arg1)
{

}


void Projekt1::on_Odznaka_currentIndexChanged(const QString &arg1)
{

}

void Projekt1::on_progressBar_valueChanged(int value)
{

}

void Projekt1::on_lineEdit_textEdited(const QString &arg1)
{
   QString text = ui->lineEdit->text();
    int m = text.toInt();
    Krewpelna = m * 450;
 }

void Projekt1::on_lineEdit_2_textEdited(const QString &arg1)
{
    QString text = ui->lineEdit_2->text();
    int n = text.toInt();
    Osocze = n * 250;
}

void Projekt1::on_lineEdit_3_textEdited(const QString &arg1)
{
    QString text = ui->lineEdit_3->text();
    int o = text.toInt();
    Plytkikrwi = o * 500;

}



void Projekt1::on_pushButton_clicked()
{
int x =Plytkikrwi+Osocze+Krewpelna;
ui->lineEdit_4->setText(QString::number(x));

}

