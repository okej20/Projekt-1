#include "projekt1.h"
#include "ui_projekt1.h"
#include<QMessageBox>

Projekt1::Projekt1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Projekt1)
{
    ui->setupUi(this);


    Osocze = 0;
    Krewpelna = 0;
    Plytkikrwi = 0;
    WLogowanie = new logowanie(); // Be sure to destroy your window somewhere
    WLogowanie->setWindowFlags(Qt::WindowStaysOnTopHint);
    WLogowanie->show();
    WLogowanie->activateWindow();
       WLogowanie->raise();






}

Projekt1::~Projekt1()
{
    delete ui;
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
ui->progressBar->setValue(x);

}


void Projekt1::on_progressBar_valueChanged(int value)
{


}

void Projekt1::on_stopien1_clicked()
{
    ui->progressBar->reset();
    ui->progressBar->setMaximum(18000);
}

void Projekt1::on_stopien2_clicked()
{
    ui->progressBar->reset();
    ui->progressBar->setMaximum(12000);
}

void Projekt1::on_stopien3_clicked()
{
    ui->progressBar->reset();
    ui->progressBar->setMaximum(6000);
}

void Projekt1::on_stopien_narod_clicked()
{
    ui->progressBar->reset();
    ui->progressBar->setMaximum(20000);
}

void Projekt1::on_pushButton_2_clicked()
{
    ui->progressBar->reset();
}
