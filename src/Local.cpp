#include <iostream>
#include <cstring>

#include "Local.h"
#include "Inmueble.h"

using namespace std;

Local::Local()
{
    //ctor
}

void Local::setSestacionamiento(float sestacionamiento)
{
    _sestacionamiento = sestacionamiento;
}
void Local::setZonacomercial(bool zonacomercial)
{
    _zonacomercial = zonacomercial;
}
float Local::getSestacionamiento()
{
    return _sestacionamiento;
}
bool Local::getZonacomercial()
{
    return _zonacomercial;
}

void Local::cargar()
{
    Inmueble::cargar();
    cout << "INGRESE SUPERFICIE DE ESTACIONAMIENTO: ";
    cin >> _sestacionamiento;
    cout << "INDIQUE SI ES UNA ZONA COMERCIAL (1: SI / 0: NO): ";
    cin >> _zonacomercial;
}
void Local::mostrar()
{
    Inmueble::mostrar();
    cout << "SUPERFICIE DE ESTACIONAMIENTO: " << _sestacionamiento << endl;
    if(_zonacomercial)
    {
        cout << "ES UNA ZONA COMERCIAL" << endl;

    }
    else
    {
        cout << "NO ES UNA ZONA COMERCIAL" << endl;

    }

}
