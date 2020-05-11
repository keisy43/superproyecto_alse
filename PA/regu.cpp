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
      _db.abrirDB("/home/alseuser/PA/_Datos");

}

regu::~regu()
{
    delete ui;
      _db.cerrarDB();
}

void regu::on_buttonBox_accepted()
{
    //guarda las variables que se ingresan

    string user;
     string contra;
      string name;
     string lastname;
     string fn;
    string doci;

name=ui->nombre->text().toStdString();
lastname=ui->apellido->text().toStdString();
doci=ui->docident->text().toStdString();
fn=ui->fechan->text().toStdString();
user=ui->_nickname->text().toStdString();
 contra=ui->contra->text().toStdString();
 _db.cargarusuario(name, lastname ,doci,fn,user,contra);



}








