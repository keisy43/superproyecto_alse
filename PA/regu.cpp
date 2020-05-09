#include "regu.h"
#include "ui_regu.h"
#include "db_local.h"
#include "QDebug"
#include "QtSql/QSqlDatabase"
#include"QtSql/qsqlquery.h"
#include"QtSql/QSqlError"
#include"QtSql/QSqlQuery"

regu::regu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regu)
{
    ui->setupUi(this);
    creartabla();
}

regu::~regu()
{
    delete ui;
}

void regu::on_buttonBox_accepted()
{
    //guarda las variables que se ingresan


   _db.abrirDB("_Datos");
   _db.cargarusuario(_dato);
   ui->nombre->setText(QString( _dato.getnombre().c_str() )  );
   ui->apellido->setText(QString(_dato.getapellido().c_str()));
   ui->docident->setText(QString(_dato.getDocident().c_str()));
  ui->fechan->setText(QString(_dato.getFechan().c_str()));
  ui->_nickname->setText(QString(_dato.getUser().c_str()));
  ui->contra->setText(QString(_dato.getContra().c_str() ));
  _db.cerrarDB();
  QString insertar;
  insertar.append("INSERT INTO USUARIO("
                  "_NOMBRE,_APELLIDO,_FECHAN,_DOCIDENT,_USUARIO,_CONTRA)"
                  "VALUES (:_NOMBRE,:_APELLIDO,:_FECHAN,:_DOCIDENT,:_USUARIO,:_CONTRA)");

}
void regu::creartabla()
{
QString consulta;
consulta.append("CREATE TABLE IF NOT EXISTS USUARIO( ID_USUARIO	INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT UNIQUE,"
                "_NOMBRE TEXT NOT NULL,"
                "_APELLIDO	TEXT NOT NULL,"
                "_FECHAN`	TEXT NOT NULL,"
               "_DOCIDENT`	TEXT NOT NULL,"
               "_USUARIO`	TEXT NOT NULL,"
                "_CONTRA`	TEXT NOT NULL)");
QSqlQuery crear;
crear.prepare(consulta);
        if(crear.exec()){
            qDebug()<<"tabla Creada";

}
               else
            {
                      qDebug()<<"tabla no creada"<<crear.lastError();
        }


}





