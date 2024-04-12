#include <iostream>
#include <conio.h>

#include "Opcion.h"
#include "Menu.h"

using std::cout;
using std::endl;

void Listados()
{
    cout<<"arhivobs en el folder"<<endl;
    system("dir");
    _getch();
}

void configuracionIP()
{
    cout<<"Configuracion ip"<<endl;
    system("ipconfig");
    _getch();
}

void conexiones()
{
    cout<< "conexiones activas "<<endl;
    system("netstat");
    _getch();
}

void confirguarion()
{
    cout<< "pendiente "<<endl;
    _getch();
}


int main()
{
    Menu elMenu("Menu de prueba");
    //Agregar opciones
    elMenu.Agregar({'1',"Ver Archivos",Listados});
    elMenu.Agregar({'2',"Ver configuracion ip",configuracionIP});
    elMenu.Agregar({'3',"Ver conexiones activas",conexiones});
    elMenu.Agregar({'4',"Pendiente",confirguarion});
    elMenu.Agregar({'5',"salir",[](){cout<<"adios"<<endl;}});

    do{
        system("cls");
        elMenu.desplegar();
    }
    while(elMenu.seleccionar()!="5");

}
