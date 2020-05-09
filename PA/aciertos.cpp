#include "aciertos.h"
#include "ui_aciertos.h"

aciertos::aciertos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aciertos)
{
    ui->setupUi(this);
}

aciertos::~aciertos()
{
    delete ui;
}




