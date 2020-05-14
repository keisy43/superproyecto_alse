#include "regu.h"
#include "ui_regu.h"
#include "db_local.h"
#include "QDebug"
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
    _db.abrirDB("/home/alseuser/superproyecto_alse/PA/_Datos");

}

regu::~regu()
{
    delete ui;
      _db.cerrarDB();
}

/**
 * @brief regu::on_buttonBox_accepted
 * @details se asignan los datos ingresados en la ventana QDialog a unas variables
 * que se le pasan por referencia a la funcion cargarusuario para que guarde los valores
 * en la base de datos.
 */
void regu::on_buttonBox_accepted()
{
    string user;       /*!< es una variable que guarda el nickname del usuario   */
    string contra;     /*!<  es una variable que guarda la contraseña del usuario   */
    string name;       /*!< es una variable que guarda el nombre del usuario   */
    string lastname;   /*!< es una variable que guarda el apellido del usuario   */
    string fn;         /*!< es una variable que guarda la fecha de nacimiento  del usuario   */
    string doci;       /*!< es una variable que guarda el documento de identidad del usuario   */

   name=ui->nombre->text().toStdString();
   lastname=ui->apellido->text().toStdString();
   doci=ui->docident->text().toStdString();
   fn=ui->fechan->text().toStdString();
   user=ui->_nickname->text().toStdString();
   contra=ui->contra->text().toStdString();
   _db.cargarusuario(name, lastname ,doci,fn,user,contra);

}








