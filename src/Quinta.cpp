#include <iostream>
#include <cstring>

using namespace std;

#include "Quinta.h"
#include "Casa.h"

Quinta::Quinta()
{
    //ctor
}

void Quinta::setPileta(bool pileta)
{
    _pileta = pileta;
}
bool Quinta::getPileta()
{
    return _pileta;

}
void Quinta::setQuincho(bool quincho)
{
    _quincho=quincho;
}
bool Quinta::getQuincho()
{
    return _quincho;
}
void Quinta::cargar()
{
    Casa::cargar();
    cout << "INDIQUE SI LA QUINTA TIENE PILETA (1: SI / 0: NO): ";
    cin >> _pileta;
    cout << "INDIQUE SI LA QUINTA TIENE QUINCHO (1: SI / 0: NO): ";
    cin >> _quincho;
}

void Quinta::mostrar()
{
    Casa::mostrar() ;
    if(_pileta)
    {
        cout << "LA QUINTA DISPONE DE PILETA" << endl;
    }
    else
    {
        cout << "LA QUINTA NO DISPONE DE PILETA" << endl;
    }
    if(_quincho)
    {
        cout << "LA QUINTA DISPONE DE QUINCHO" << endl;
    }
    else
    {
        cout << "LA QUINTA NO DISPONE DE QUINCHO" << endl;
    }
}
