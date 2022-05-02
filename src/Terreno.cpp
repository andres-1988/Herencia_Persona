#include <iostream>
#include <cstring>

using namespace std;

#include "Terreno.h"

Terreno::Terreno()
{
    //ctor
}

        void  Terreno::setAncho(float ancho){
        _ancho=ancho;
        }
        void  Terreno::setLargo(float largo) {
        _largo=largo;
        }
        void  Terreno::setSconstruible(float sconstruible) {
        _sconstruible=sconstruible;
        }
        float Terreno::getAncho(){
        return _ancho;
        }
        float Terreno::getLargo() {
        return _largo;
        }
        float Terreno::getSconstruible(){
        return _sconstruible;
        }

         void Terreno::cargar(){
         Inmueble::cargar();
         cout << "INGRESE EL ANCHO EN METROS: ";
         cin >> _ancho;
         cout << "INGRESE EL LARGO EN METROS: ";
         cin >> _largo;
         cout << "INGRESE LA SUPERFICIE CONSTRUIBLE: ";
         cin >> _sconstruible;

         }
         void Terreno::mostrar(){
         Inmueble::mostrar();
         cout << "ANCHO EN METROS       : " << _ancho << endl;
         cout << "LARGO EN METROS       : " << _largo << endl;
         cout << "SUPERFICIE CONSTRUIBLE: EN METROS: " << _sconstruible << endl;
         }
