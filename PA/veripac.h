#ifndef VERIPAC_H
#define VERIPAC_H

#include <QDialog>

namespace Ui {
class veripac;
}

class veripac : public QDialog
{
    Q_OBJECT

public:
    explicit veripac(QWidget *parent = 0);
    ~veripac();

private:
    Ui::veripac *ui;
};

#endif // VERIPAC_H
