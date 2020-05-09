#include <QTime>
#include "aciertos.h"
#include "tiempod.h"
#include "ui_tiempod.h"
#include "prueba.h"

int _duracion;


tiempod::tiempod(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tiempod)

{
    ui->setupUi(this);
    _timer = new QTimer(this);
    connect(_timer, &QTimer::timeout, this, &tiempod::mostrar );
    _timer->setInterval( 500 );
    _timer->start();

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
void tiempod::mostrar(){
    _duracion=30;
    ui->time->setText(QString::number(_duracion));

}
