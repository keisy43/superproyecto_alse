#include "regu.h"
#include "ui_regu.h"

regu::regu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regu)
{
    ui->setupUi(this);
}

regu::~regu()
{
    delete ui;
}
