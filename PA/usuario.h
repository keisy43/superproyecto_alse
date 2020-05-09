#ifndef USUARIO_H
#define USUARIO_H
#include "QtSql/QSqlDatabase"
#include"QtSql/qsqlquery.h"
#include"QtSql/QSqlError"
#include"QtSql/QSqlQuery"


#include <QMainWindow>

namespace Ui {
class usuario;
}

class usuario : public QMainWindow
{
    Q_OBJECT

public:
    explicit usuario(QWidget *parent = 0);
    ~usuario();

private slots:
    void on_Ru_clicked();


    void on_ingresar_clicked();

    
    void on_label_linkActivated(const QString &link);

private:
    Ui::usuario *ui;
    QSqlDatabase dbmain;
};

#endif // USUARIO_H
