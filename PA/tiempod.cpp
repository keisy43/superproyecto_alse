#include "tiempod.h"
#include "ui_tiempod.h"
#include "prueba.h"

tiempod::tiempod(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tiempod)
{
    ui->setupUi(this);
}

tiempod::~tiempod()
{
    delete ui;
}

void tiempod::on_buttonBox_accepted()
{
    prueba a(this);
    a.setModal(true);

     a.show();
     a.exec();
}



