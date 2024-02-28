#pragma once
class Persona{
public:
    int edad;
    char name[20];
    Persona crear();
    void saludar(Persona per);

};

#include <iostream>

#include <stdlib.h>
#include <string.h>

using std::cout;
using std::endl;

Persona Persona::crear()
{
    Persona p1;
    strcpy(p1.name,"adan");
    p1.edad=20;
    return p1;
}

void Persona::saludar(Persona per)
{
    cout << "HOLA, Me llamo " << per.name << " y tengo "<< per.edad<< " anios" << endl;
}