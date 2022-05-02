#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H
#include <Casa.h>


class Departamento:public Casa
{
    public:
        Departamento();
        void setSbalcon(float);
        void setCochera(bool);
        void setExpensa(float);
        float getSbalcon();
        bool getCochera();
        float getExpensa();

        void cargar();
        void mostrar();



    private:
        float _sbalcon;
        bool _cochera;
        float _expensa;
};

#endif // DEPARTAMENTO_H
