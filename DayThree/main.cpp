#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include <string.h>

#include "Cheques.h"
#include "Persona.h"
#include "libad.h"

using std::cout;
using std::endl;
using std::cin;


int main()
{
    srand(time(NULL));
    int op;

    do
    {
        menu();
        op=valid("Fuera de rango",0,3);
        switch(op)
        {
            case 1:
            
                break;
            case 2:

                break;
            case 3:

                break;
            case 0:
                cout << "seguro que quieres salir?" << endl << "1.-salir\t2.-Continuar" << endl;
                cin >> op;
        }
    } while (op!=0);
    
}

void menu ()
{
    cout << "Que acciones desea realizar"<< endl;
    cout << "1.-Depositar"<< endl;
    cout << "2.-Retirar" << endl;
    cout << "3.-Transferencia" << endl;
    cout << "0.-Salir" << endl;
}