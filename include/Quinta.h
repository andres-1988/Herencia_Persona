#ifndef QUINTA_H
#define QUINTA_H
#include"Casa.h"


class Quinta:public Casa
{
    public:
        Quinta();
            void setPileta(bool);
            bool getPileta() ;
            void setQuincho(bool) ;
            bool getQuincho();
            void cargar();
            void mostrar();


    private:
        bool _pileta;
        bool _quincho;

};

#endif // QUINTA_H
