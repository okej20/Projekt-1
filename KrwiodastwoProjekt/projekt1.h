#ifndef PROJEKT1_H
#define PROJEKT1_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Projekt1; }
QT_END_NAMESPACE

class Projekt1 : public QMainWindow
{
    Q_OBJECT

public:
    Projekt1(QWidget *parent = nullptr);
    ~Projekt1();

private slots:




    void on_Data_userDateChanged(const QDate &date);

    void on_RodzajDonacji_currentIndexChanged(const QString &arg1);

    void on_Odznaka_currentIndexChanged(const QString &arg1);

    void on_progressBar_valueChanged(int value);

    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_lineEdit_3_textEdited(const QString &arg1);

    void on_pushButton_clicked();

    void on_spinBox_valueChanged(int arg1);

private:
    Ui::Projekt1 *ui;

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
