#ifndef LOGOWANIE_H
#define LOGOWANIE_H

#include <QWidget>
#include <QtSql>
#include<QSqlDatabase>
#include<QMessageBox>

namespace Ui {
class logowanie;
}

class logowanie : public QWidget
{
    Q_OBJECT

public:
    explicit logowanie(QWidget *parent = nullptr);
    ~logowanie();

private slots:


    void on_pushButton_clicked();

private:
    Ui::logowanie *ui;
};

#endif // LOGOWANIE_H
