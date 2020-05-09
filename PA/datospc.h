#ifndef DATOSPC_H
#define DATOSPC_H
#include <string>
using namespace std;

class datospc
{
public:
    datospc();
    string getNombre() const;
    void setNombre(const string &nombre);

    string getApellido() const;
    void setApellido(const string &apellido);

    string getDocident() const;
    void setDocident(const string &docident);

    string getDireccion() const;
    void setDireccion(const string &direccion);

    string getFechan() const;
    void setFechan(const string &fechan);

    string getRaza() const;
    void setRaza(const string &raza);

    string getGenero() const;
    void setGenero(const string &genero);

private:

    string  _nombre;
    string  _apellido;
    string  _docident;
    string  _direccion;
    string  _fechan;
    string  _raza;
    string  _genero;

};

#endif // DATOSPC_H
