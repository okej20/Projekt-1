#ifndef PROJEKT1_H
#define PROJEKT1_H

#include <QMainWindow>
#include<QtSql>
#include <QSqlDatabase>

#include "logowanie.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Projekt1; }
QT_END_NAMESPACE

class Projekt1 : public QMainWindow
{
    Q_OBJECT

public:
    Projekt1(QWidget *parent = nullptr);
    ~Projekt1();
    void openNewWindow();

private slots:







    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_lineEdit_3_textEdited(const QString &arg1);

    void on_pushButton_clicked();



    void on_progressBar_valueChanged(int value);

    void on_stopien1_clicked();









    void on_stopien2_clicked();

    void on_stopien3_clicked();

    void on_stopien_narod_clicked();


    void on_pushButton_2_clicked();

    void on_Data_userDateChanged(const QDate &date);

    void on_Kalendarz_activated(const QDate &date);

    void on_Kb_clicked();

    void on_pushButton_3_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

private:
    Ui::Projekt1 *ui;
   logowanie *WLogowanie;
    enum Operation
    {
       liczosocze,
       liczkrew,
       liczplytki,
       suma,
       nooperation,


    };


    int n;
    int m;
    int o;
    int x;
    int Osocze;
    int Krewpelna;
    int Plytkikrwi;
    int opt;
    bool isOsocze;
    bool isKrewpelna;
    bool isPlytkikrwi;

};
#endif // PROJEKT1_H
