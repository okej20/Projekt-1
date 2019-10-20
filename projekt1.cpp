#include "projekt1.h"
#include "ui_projekt1.h"

Projekt1::Projekt1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Projekt1)
{
    ui->setupUi(this);
}

Projekt1::~Projekt1()
{
    delete ui;
}

