#include "usuario.h"
#include "ui_usuario.h"
#include "regu.h"
#include "menu.h"
#include "QDebug"
#include <string>
#include <iostream>
#include <sstream>
#include <sqlite3.h>

usuario::usuario(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::usuario)
{
    ui->setupUi(this);
    ac.abrirDB("/home/alseuser/PA/_Datos");

}

usuario::~usuario()
{
    delete ui;
     ac.cerrarDB();
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
    //guarda las variables que se ingresan todo esto esta comentado porque no estoy segura

int yes;
//  ac.abrirDB("/home/alseuser/PA/_Datos");

  getUser()=ui->usuario_2->text().toStdString();
  getContra()=ui->contrase->text().toStdString();

    // sirve para mostrar la ventana emergente
//   ac.cerrarDB();
  if(ac.verificarusuario( getUser(),getContra())== true){
    menu a(this);
     a.setModal(true);
     a.show();
     a.exec();
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


