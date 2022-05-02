#ifndef LOCAL_H
#define LOCAL_H
#include "Inmueble.h"


class Local:public Inmueble
{
    public:
        Local();
        void setSestacionamiento(float);
        void setZonacomercial(bool);
        float getSestacionamiento();
        bool getZonacomercial();
        void cargar();
        void mostrar();

    private:
        float _sestacionamiento;
        bool _zonacomercial;
};

#endif // LOCAL_H
