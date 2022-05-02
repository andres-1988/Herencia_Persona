#include <iostream>
#include <cstring>

using namespace std;

#include "Casa.h"
#include "Inmueble.h"

Casa::Casa()
{
    //ctor
}

void Casa::setAntiguedadCons(int antiguedadCons)
{
    _antiguedadCons = antiguedadCons;
}

int Casa::getAntiguedadCons()
{
    return _antiguedadCons;
}

void Casa::setStotal(float stotal)
{
    _stotal=stotal;
}
float  Casa::getStotal()
{
    return _stotal;
}
void Casa::setScubierta(float scubierta)
{
    _scubierta=scubierta;
}
float  Casa::getScubierta()
{
    return _scubierta;
}

       void Casa::setHabitaciones(int habitaciones){
       _habitaciones=habitaciones;
       }
        int Casa::getHabitaciones(){
        return _habitaciones;
        }

void Casa::cargar()
{
    Inmueble::cargar();
    cout << "INGRESE CANTIDAD DE HABITACIONES: ";
    cin >> _habitaciones;
    cout << "INGRESE ANTIGUEDAD DE CONSTRUCCION: ";
    cin >> _antiguedadCons;
    cout << "INGRESE SUPERFICIE CUBIERTA       : ";
    cin >> _scubierta;
    cout << "INGRESE SUPERFICIE TOTAL          : ";
    cin >> _stotal;
}



void Casa::mostrar()
{
    Inmueble::mostrar();
    cout << "HABITACIONES              : " << _habitaciones << endl;
    cout << "ANTIGUEDAD DE CONSTRUCCION: " << _antiguedadCons << endl;
    cout << "SUPERFICIE CUBIERTA       : " << _scubierta << endl;
    cout << "SUPERFICIE TOTAL          : " << _stotal << endl;
}
