#include <iostream>
#include <cstring>
#include <cstdio>
#include "Inmueble.h"
using namespace std;



Inmueble::Inmueble()
{
    _precioVenta = 0;
    _precioAlquiler = 0;
}
void Inmueble::setCodigoInmueble(int codigo_inmueble)
{
    _codigo_inmueble=codigo_inmueble;
}
void Inmueble::setCalle(char *calle)
{
    strcpy(_calle, calle);
}
void Inmueble::setNumero(char *numero)
{
    strcpy(_numero, numero);
}
void Inmueble::setLocalidad(char *localidad)
{
    strcpy(_localidad, localidad);
}
void Inmueble::setApellido(char *apellido)
{
    strcpy(_apellido, apellido);
}
void Inmueble::setNombre(char *nombre)
{
    strcpy(_nombre, nombre);
}
void Inmueble::setDni(char *dni)
{
    strcpy(_dni, dni);
}
void Inmueble::setCelular(char *celular)
{
    strcpy(_celular, celular);
}
void Inmueble::setPrecioVenta(float precioVenta)
{
    _precioVenta=precioVenta;
}
void Inmueble::setPrecioAlquiler(float precioAlquiler)
{
    _precioAlquiler=precioAlquiler;
}

int   Inmueble::getCodigoInmueble()
{
    return _codigo_inmueble;
}
char *Inmueble::getCalle()
{
    return _calle;
}
char *Inmueble::getNumero()
{
    return _numero;
}
char *Inmueble::getLocalidad()
{
    return _localidad;
}
char *Inmueble::getApellido()
{
    return _apellido;
}
char *Inmueble::getNombre()
{
    return _nombre;
}
char *Inmueble::getDni()
{
    return _dni;
}
char *Inmueble::getCelular()
{
    return _celular;
}
float Inmueble::getPrecioVenta()
{
    return _precioVenta;
}
float Inmueble::getPrecioAlquiler()
{
    return _precioAlquiler;
}

void Inmueble::cargar()
{

    cout << "INGRESE CODIGO DE INMUEBLE: ";
    cin >> _codigo_inmueble;
    cout << "INGRESE CALLE: ";
    cin.ignore();
    cin.getline(_calle, 50);
    cout << "INGRESE NUMERO: ";
    cin.getline(_numero, 6);
    cout << "INGRESE LOCALIDAD: ";
    cin.getline(_localidad, 50);
    cout << "INGRESE APELLIDO: ";
    cin.getline(_apellido, 50);
    cout << "INGRESE NOMBRE: ";
    cin.getline(_nombre, 50);
    cout << "INGRESE DNI: ";
    cin.getline(_dni, 12);
    cout << "INGRESE CELULAR: ";
    cin.getline(_celular, 15);
    cout << "INGRESE EL PRECIO DE VENTA: $";
    cin >> _precioVenta;
    cout << "INGRESE EL PRECIO DE ALQUILER: $";
    cin >> _precioAlquiler;



}



void Inmueble::mostrar()
{

    cout << "CODIGO DE INMUEBLE: " << _codigo_inmueble << endl;
    cout << "CODIGO DE CALLE   : " << _calle << endl;
    cout << "NUMERO            : " << _numero << endl;
    cout << "LOCALIDAD         : " << _localidad << endl;
    cout << "APELLIDO          : " << _apellido << endl;
    cout << "NOMBRE            : " << _nombre << endl;
    cout << "DNI               : " << _dni << endl;
    cout << "CELULAR           : " << _celular << endl;
    cout << "PRECIO DE VENTA   : $" << _precioVenta << endl;
    cout << "PRECIO DE ALQUILER: $" << _precioAlquiler << endl;

}
