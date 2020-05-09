#include "usuario.h"
#include "ui_usuario.h"
#include "regu.h"
#include "menu.h"
#include "QDebug"

usuario::usuario(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::usuario)
{
    ui->setupUi(this);
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
    //guarda las variables que se ingresan

    QString user;
     user=ui->usuario_2->text();
    QString contra;
     contra=ui->contrase->text();

    // sirve para mostrar la ventana emergente

    menu a(this);
     a.setModal(true);
     a.show();
     a.exec();


}


