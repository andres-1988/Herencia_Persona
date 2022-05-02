#ifndef INMUEBLE_H
#define INMUEBLE_H


class Inmueble
{
    public:
        Inmueble();
        void setCodigoInmueble(int);
        void setCalle(char *);
        void setNumero(char *);
        void setLocalidad(char *);
        void setApellido(char *);
        void setNombre(char *);
        void setDni(char *);
        void setCelular(char *);
        void setPrecioVenta(float);
        void setPrecioAlquiler(float);

        int getCodigoInmueble();
        char * getCalle();
        char * getNumero();
        char * getLocalidad();
        char * getApellido();
        char * getNombre();
        char * getDni();
        char * getCelular();
        float getPrecioVenta();
        float getPrecioAlquiler();

        void cargar();
        void mostrar();

    protected:
        int   _codigo_inmueble;
        char _calle[50];
        char _numero[6];
        char _localidad[50];
        char _apellido[50];
        char _nombre[50];
        char _dni[12];
        char _celular[15];
        float _precioVenta;
        float _precioAlquiler;


};

#endif // INMUEBLE_H
