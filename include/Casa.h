#ifndef CASA_H
#define CASA_H
#include <Inmueble.h>


class Casa:public Inmueble
{

public:
        Casa();
        void setAntiguedadCons(int);
        int getAntiguedadCons();
        void setStotal(float);
        float getStotal();
        void setScubierta(float);
        float getScubierta();
        void setHabitaciones(int);
        int getHabitaciones();


       void cargar();
       void mostrar();



protected:
    int _antiguedadCons;
    float _stotal;
    float _scubierta;
    int _habitaciones;



};

#endif // CASA_H
