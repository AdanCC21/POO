#pragma once

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Persona{
private:
    string name;
    int edad;
protected:
    string cuenta;
public:
    Persona();
    Persona(string name, int edad);
    string getName();
    int getEdad();
    void saludar();
};


Persona::Persona(string _name, int _edad)
{
    name=_name;
    edad=_edad;
}

string Persona::getName()
{
    return name;   
}

int Persona::getEdad()
{
    return edad;
}

void Persona::saludar()
{
    cout<< "Hola, me llamo "<< this->name<<endl;
    cout<< "y tengo "<<this->edad;
}
