#ifndef TIEMPOD_H
#define TIEMPOD_H

#include <QDialog>
extern int _duracion;
namespace Ui {
class tiempod;
}

class tiempod : public QDialog
{
    Q_OBJECT

public:
    explicit tiempod(QWidget *parent = 0);
    ~tiempod();



private slots:
    void on_buttonBox_accepted();


private:
    Ui::tiempod *ui;


};

#endif // TIEMPOD_H
