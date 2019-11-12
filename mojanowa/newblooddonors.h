#ifndef NEWBLOODDONORS_H
#define NEWBLOODDONORS_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

namespace Ui {
class newblooddonors;
}

class newblooddonors : public QDialog
{
    Q_OBJECT

public:
    explicit newblooddonors(QWidget *parent = nullptr);
    ~newblooddonors();

private slots:
    void on_pushButton_clicked();

private:
    Ui::newblooddonors *ui;

};

#endif // NEWBLOODDONORS_H
