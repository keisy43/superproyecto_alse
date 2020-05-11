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
/**
 * @brief regu::on_pushButton_clicked
 * @details se asignan los datos ingresados en la ventana QDialog a unas variables
 * que se le pasan por referencia a la funcion cargarpaciente para que guarde los valores
 * en la base de datos.
 */
void regpc::on_pushButton_clicked()
{
    string nombre;     /*!< es una variable que guarda el nombre del paciente  */
    string apellido;   /*!< es una variable que guarda el apellido del paciente   */
    float  docident;   /*!< es una variable que guarda el documento de identidad del paciente  */
    float fn;          /*!< es una variable que guarda la fecha de nacimiento  del paciente  */
    string direccion;  /*!< es una variable que guarda la direccion del paciente  */
    string gn;         /*!< es una variable que guarda el genero del paciente  */
    string rz;         /*!< es una variable que guarda la raza del paciente  */
    string ningresos;  /*!< es una variable que guarda el nivel de ingresos del paciente   */

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
