#include "regpc.h"
#include "ui_regpc.h"

regpc::regpc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regpc)
{
    ui->setupUi(this);
}

regpc::~regpc()
{
    delete ui;
}
