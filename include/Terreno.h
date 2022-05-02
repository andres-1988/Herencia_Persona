#ifndef TERRENO_H
#define TERRENO_H
#include "Inmueble.h"


class Terreno:public Inmueble
{
    public:
        Terreno();
        void  setAncho(float);
        void  setLargo(float) ;
        void  setSconstruible(float);
        float getAncho();
        float getLargo() ;
        float getSconstruible();

        void cargar();
        void mostrar();

    private:
        float _ancho;
        float _largo;
        float _sconstruible;

};

#endif // TERRENO_H
