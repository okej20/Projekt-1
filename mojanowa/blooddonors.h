#ifndef BLOODDONORS_H
#define BLOODDONORS_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QButtonGroup>

namespace Ui {
class BloodDonors;
}

class BloodDonors : public QDialog
{
    Q_OBJECT

public:
    explicit BloodDonors(QWidget *parent = nullptr);
    ~BloodDonors();

private slots:
    void on_radioButton_donkrew_clicked();

    void on_radioButton_donOso_clicked();

    void on_radioButton_donPlyt_clicked();

    void on_pushButton_clicked();

    void on_lineEdit_krew_textEdited(const QString &arg1);

    void on_lineEdit_osocze_textEdited(const QString &arg1);

    void on_lineEdit_plytki_textEdited(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_radioButton_zhdk1_clicked();

    void on_radioButton_zhdk2_clicked();

    void on_radioButton_zhdk3_clicked();



    void on_pushButton_baza_clicked();

    void on_radioButton_zhdkN_clicked();

private:
    Ui::BloodDonors *ui;

        int n;
        int m;
        int o;
        int x;
        int Osocze;
        int Krewpelna;
        int Plytkikrwi;
};

#endif // BLOODDONORS_H
