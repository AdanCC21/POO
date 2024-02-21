class Persona {
    char nombre[50];
    int edad;
    void Presentar(nombre,edad);
}

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using std::cout;
using std::endl;

void Persona::Presentar(char nombre[],int edad)
{
    cout << "Hola soy" << nombre << "Y tengo " << edad << endl;
    
}
