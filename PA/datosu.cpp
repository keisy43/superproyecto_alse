#include "datosu.h"

datosu::datosu()
{

}

string datosu::getnombre() const
{
    return _nombre;
}

void datosu::setNombre(const string &nombre)
{
    _nombre = nombre;
}

string datosu::getapellido() const
{
    return _apellido;
}

void datosu::setApellido(const string &apellido)
{
    _apellido = apellido;
}





string datosu::getFechan() const
{
    return _fechan;
}

void datosu::setFechan(const string &fechan)
{
    _fechan = fechan;
}

string datosu::getUser() const
{
    return user;
}

void datosu::setUser(const string &value)
{
    user = value;
}

string datosu::getContra() const
{
    return _contra;
}

void datosu::setContra(const string &contra)
{
    _contra = contra;
}

string datosu::getDocident() const
{
    return _docident;
}

void datosu::setDocident(const string &docident)
{
    _docident = docident;
}
