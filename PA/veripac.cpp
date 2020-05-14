#include "veripac.h"
#include "ui_veripac.h"

veripac::veripac(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::veripac)
{
    ui->setupUi(this);
}

veripac::~veripac()
{
    delete ui;
}
