#ifndef REGU_H
#define REGU_H

#include <QDialog>

namespace Ui {
class regu;
}

class regu : public QDialog
{
    Q_OBJECT

public:
    explicit regu(QWidget *parent = 0);
    ~regu();

private:
    Ui::regu *ui;
};

#endif // REGU_H
