#include "usuario.h"
#include "ui_usuario.h"
#include "regu.h"
#include "db_local.h"
#include "menu.h"
#include "QDebug"
#include <string>
#include <iostream>
#include <sstream>
#include <sqlite3.h>
#include"QtSql/QSqlDatabase"
#include"QtSql/QSqlQuery"
#include"QtSql/qsqlquery.h"
#include"QtSql/QSqlError"

usuario::usuario(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::usuario)
{
    ui->setupUi(this);
_abrir=QSqlDatabase::addDatabase("QSQLITE");
_abrir.setDatabaseName("/home/alseuser/superproyecto_alse/PA/_Datos");
if(_abrir.open()){
    qDebug()<<"abrio";
}
else{
     qDebug()<<"no abrio";
}
}

usuario::~usuario()
{
    delete ui;

}


void usuario::on_Ru_clicked()
{
  // sirve para mostrar la ventana emergente
   regu a(this);
    a.setModal( true );
    a.show();
    a.exec();
}
void usuario::on_ingresar_clicked()
{
 QString contra2;
db_local ac;
  //ac.abrirDB("/home/alseuser/superproyecto_alse/PA/_Datos");

  setUser(ui->usuario_2->text().toStdString());
  setContra(ui->contrase->text().toStdString());
//if(ac.verificarusuario( getUser(),getContra())==true){
  QSqlQuery buscar;
  QString sql;
  QString user;
  QString contra;
  user=ui->usuario_2->text();
  contra=ui->contrase->text();
  sql.append("SELECT  * FROM DATOSU WHERE  _USUARIO = '"+ user+"' ");
  buscar.prepare(sql);
  if(buscar.exec()){
      qDebug()<<"consulta realizada";
      while (buscar.next()){
          contra2=buscar.value(5).toByteArray().constData();
          qDebug()<<contra2;
      }
  }
      else{
          qDebug()<<"error de consulta";
      }
      if(contra2==contra){

  menu a(this);
  a.setModal(true);
  a.show();
  a.exec();
 ac.cerrarDB();
}
  }







string usuario::getContra() const
{
    return contra;
}

void usuario::setContra(const string &value)
{
    contra = value;
}

string usuario::getUser() const
{
    return user;
}

void usuario::setUser(const string &value)
{
    user = value;
}


