#include "regpc.h"
#include "ui_regpc.h"

#include <string>
#include <iostream>
#include <sstream>
#include <string>
#include <sqlite3.h>


regpc::regpc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regpc)
{
    ui->setupUi(this);
     _bd.abrirDB("/home/alseuser/PA/_Datos");
}

regpc::~regpc()
{
    delete ui;
     _bd.cerrarDB();
}

void regpc::on_pushButton_clicked()
{
    string nombre;
    string apellido;
    float  docident;
    float fn;
    string direccion;
    string gn;
    string rz;
    string ningresos;

    nombre=ui->nombrep->text().toStdString();
    apellido=ui->apellidop->text().toStdString();
    docident = ui->docidtp->text().toFloat();
    fn= ui->dateEdit->text().toFloat();
    gn= ui->genero->text().toStdString();
    direccion= ui->direccion->text().toStdString();
    rz=ui->raza_2->text().toStdString();
    ningresos=ui->niveling->text().toStdString();

   _bd.cargarpaciente(nombre,apellido,docident,fn ,gn, direccion,rz,ningresos);



}
