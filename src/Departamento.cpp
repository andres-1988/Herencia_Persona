#include <iostream>
#include <cstring>

using namespace std;

#include "Departamento.h"
#include "Casa.h"

Departamento::Departamento()
{
    //ctor
}

void Departamento::setSbalcon(float sbalcon)
{
    _sbalcon=sbalcon;
}

void Departamento::setCochera(bool cochera)
{
    _cochera=cochera;
}

void Departamento::setExpensa(float expensa)
{
    _expensa = expensa;
}

float Departamento::getSbalcon()
{
    return _sbalcon;
}

bool Departamento::getCochera()
{
    return _cochera;
}

float Departamento::getExpensa()
{
    return _expensa;
}

void Departamento::cargar()
{
    Casa::cargar();
    cout << "INGRESE LA SUPERFICIE DEL BALCON: ";
    cin >> _sbalcon;
    cout << "INDIQUE SI TIENE COCHERA (1: SI / 0: NO): ";
    cin >> _cochera;
    cout << "INGRESE EL COSTO DE LAS EXPENSAS: $";
    cin >> _expensa;
}
void Departamento::mostrar()
{
    Casa::mostrar();
    cout << "SUPERFICIE DEL BALCON: " << _sbalcon << endl;

    if(_cochera)
    {
        cout << "TIENE COCHERA" << endl;

    }
    else
    {
        cout << "NO TIENE COCHERA" << endl;

    }

    cout << "EXPENSAS             : $" << _expensa << endl;
}
