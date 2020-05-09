#include "datospc.h"

datospc::datospc()
{

}

string datospc::getNombre() const
{
    return _nombre;
}

void datospc::setNombre(const string &nombre)
{
    _nombre = nombre;
}

string datospc::getApellido() const
{
    return _apellido;
}

void datospc::setApellido(const string &apellido)
{
    _apellido = apellido;
}

string datospc::getDocident() const
{
    return _docident;
}

void datospc::setDocident(const string &docident)
{
    _docident = docident;
}

string datospc::getDireccion() const
{
    return _direccion;
}

void datospc::setDireccion(const string &direccion)
{
    _direccion = direccion;
}

string datospc::getFechan() const
{
    return _fechan;
}

void datospc::setFechan(const string &fechan)
{
    _fechan = fechan;
}

string datospc::getRaza() const
{
    return _raza;
}

void datospc::setRaza(const string &raza)
{
    _raza = raza;
}

string datospc::getGenero() const
{
    return _genero;
}

void datospc::setGenero(const string &genero)
{
    _genero = genero;
}
