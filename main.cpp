#include <iostream>
//#include <Inmueble.h>
#include "Casa.h"
#include <Quinta.h>
#include <Local.h>
#include <Departamento.h>
#include "Terreno.h"

using namespace std;



int main()
{
    Casa inmueble;
    Quinta inmueble2;
    Departamento inmueble3;
    Local inmueble4;
    Terreno inmueble5;


    int opcion;
    int subopcion;
    do
    {
        cout << "-----EJERCICIO 3 DE CLASES-----"<< endl;
        cout << "-------------------------------"<< endl;
        cout << "1. CASA                        "<< endl;
        cout << "2. CASA QUINTA                 "<< endl;
        cout << "3. DEPARTAMENTO                "<< endl;
        cout << "4. LOCAL                       "<< endl;
        cout << "5. TERRENO                     "<< endl;
        cout << "0. SALIR DEL PROGRAMA          "<< endl;
        cout << "-------------------------------"<< endl;
        cout << "OPCION: ";
        cin >> opcion;

        //system ("cls");

        switch(opcion)
        {
        case 1:
            do
            {
                cout << "--------------CASA-------------"<< endl;
                cout << "1. CARGAR DATOS                "<< endl;
                cout << "2. MOSTRAR DATOS               "<< endl;
                cout << "0. VOLVER AL MENU PRINCIPAL    "<< endl;
                cout << "-------------------------------"<< endl;
                cout << "OPCION: ";
                cin >> subopcion;
               // system("cls");
                switch(subopcion)
                {
                case 1:
                    inmueble.cargar();
                    break;
                case 2:
                    inmueble.mostrar();
                    break;
                }
                //system("pause");
                //system("cls");
            }
            while(subopcion != 0);
            break;
        case 2:
            do
            {
                cout << "-----------CASA QUINTA---------"<< endl;
                cout << "1. CARGAR DATOS                "<< endl;
                cout << "2. MOSTRAR DATOS               "<< endl;
                cout << "0. VOLVER AL MENU PRINCIPAL    "<< endl;
                cout << "-------------------------------"<< endl;
                cout << "OPCION: ";
                cin >> subopcion;
               // system("cls");
                switch(subopcion)
                {
                case 1:
                    inmueble2.cargar();
                    break;
                case 2:
                    inmueble2.mostrar();
                    break;
                }
               // system("pause");
               // system("cls");
            }
            while(subopcion != 0);
            break;
        case 3:
            do
            {
                cout << "----------DEPARTAMENTO---------"<< endl;
                cout << "1. CARGAR DATOS                "<< endl;
                cout << "2. MOSTRAR DATOS               "<< endl;
                cout << "0. VOLVER AL MENU PRINCIPAL    "<< endl;
                cout << "-------------------------------"<< endl;
                cout << "OPCION: ";
                cin >> subopcion;
                //system("cls");
                switch(subopcion)
                {
                case 1:
                    inmueble3.cargar();
                    break;
                case 2:
                    inmueble3.mostrar();
                    break;
                }
                //system("pause");
                //system("cls");
            }
            while(subopcion != 0);
            break;
        case 4:
            do
            {
                cout << "-------------LOCAL-------------"<< endl;
                cout << "1. CARGAR DATOS                "<< endl;
                cout << "2. MOSTRAR DATOS               "<< endl;
                cout << "0. VOLVER AL MENU PRINCIPAL    "<< endl;
                cout << "-------------------------------"<< endl;
                cout << "OPCION: ";
                cin >> subopcion;
                //system("cls");
                switch(subopcion)
                {
                case 1:
                    inmueble4.cargar();
                    break;
                case 2:
                    inmueble4.mostrar();
                    break;
                }
               // system("pause");
                //system("cls");
            }
            while(subopcion != 0);
            break;
        case 5:
            do
            {
                cout << "------------TERRENO------------"<< endl;
                cout << "1. CARGAR DATOS                "<< endl;
                cout << "2. MOSTRAR DATOS               "<< endl;
                cout << "0. VOLVER AL MENU PRINCIPAL    "<< endl;
                cout << "-------------------------------"<< endl;
                cout << "OPCION: ";
                cin >> subopcion;
                //system("cls");
                switch(subopcion)
                {
                case 1:
                    inmueble5.cargar();
                    break;
                case 2:
                    inmueble5.mostrar();
                    break;
                }
               // system("pause");
               // system("cls");
            }
            while(subopcion != 0);
            break;

        }

    }
    while(opcion!=0);

    return 0;
}
