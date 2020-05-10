#include "regu.h"
#include "ui_regu.h"
#include "db_local.h"
#include "QDebug"
#include <string>
#include <iostream>
#include <sstream>
#include <string>
#include <sqlite3.h>


using namespace std;

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

void regu::on_buttonBox_accepted()
{
    //guarda las variables que se ingresan

   QString user;
    user=ui->_nickname->text();
    QString contra;
     contra=ui->contra->text();
     QString name;
     name=ui->nombre->text();
    QString lastname;
    lastname=ui->apellido->text();
    QString fn;
    fn=ui->fechan->text();
   QString doci;
  doci=ui->docident->text();

    qDebug()<<user;
    qDebug()<<contra;
    qDebug()<< name;



  _db.abrirDB("_Datos");
  _db.cargarusuario(_dato);




 ui->nombre->setText(_dato.getnombre().c_str()) ;
  ui->apellido->setText((_dato.getapellido().c_str()));
   ui->docident->setText((_dato.getDocident().c_str()));
  ui->fechan->setText((_dato.getFechan().c_str()));
  ui->_nickname->setText((_dato.getUser().c_str()));
  ui->contra->setText((_dato.getContra().c_str() ));


  _db.cerrarDB();


}

QString regu::getName() const
{
    return name;
}

void regu::setName(const QString &value)
{
    name = value;
}






