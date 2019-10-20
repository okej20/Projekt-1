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

private:
    Ui::Projekt1 *ui;
};
#endif // PROJEKT1_H
