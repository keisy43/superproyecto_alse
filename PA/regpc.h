#ifndef REGPC_H
#define REGPC_H

#include <QDialog>
#include <string>
#include <sqlite3.h>
#include "db_local.h"

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
