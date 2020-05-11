#ifndef REGPC_H
#define REGPC_H

#include <QDialog>
#include <string>
#include <sqlite3.h>
#include "db_local.h"
/**
 * @brief The regpc class
 * Esta clase maneja la conexión con la ventana de dialogo QDialog donde
 * se registran los datos de un paciente nuevo.
 *
 * @details
 */

namespace Ui {
class regpc;
}

class regpc : public QDialog
{
    Q_OBJECT

public:
    explicit regpc(QWidget *parent = 0);
    ~regpc();

private slots:
    void on_pushButton_clicked();

private:
    Ui::regpc *ui;
  db_local _bd;
};

#endif // REGPC_H
