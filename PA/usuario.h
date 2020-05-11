#ifndef USUARIO_H
#define USUARIO_H
#include "qstring.h"
#include "db_local.h"
#include <string>
#include <QMainWindow>
using namespace std;
namespace Ui {
class usuario;
}

class usuario : public QMainWindow
{
    Q_OBJECT

public:

    explicit usuario(QWidget *parent = 0);


    usuario& operator = ( const usuario &a );
    ~usuario();

    string getUser() const;
    void setUser(const string &value);

    string getContra() const;
    void setContra(const string &value);

private slots:
    void on_Ru_clicked();
    void on_ingresar_clicked();


private:
    Ui::usuario *ui;
 string user;
  string contra;
db_local ac;

};

#endif // USUARIO_H
