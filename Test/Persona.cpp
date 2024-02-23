#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "Persona.h"

using std::cout;
using std::endl;

//Constructor
Persona::create()
{
    int edad=rand()%(30-0+1)-0;
    char name[20];
    strcpy(nombre,name);

}

void Persona::Presentar(char nombre[],int edad)
{
    cout << "Hola soy" << nombre << "Y tengo " << edad << endl;
    
}
