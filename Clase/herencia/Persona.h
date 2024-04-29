#pragma once
class Persona{
public:
    Persona();
    char name[30];
    int age;
    void Saludar();
};

#include <iostream>
#include <string>
#include <string.h>

using std::string;
using std::cout;
using std::endl;

Persona::Persona(){
    strcpy(name,"Pablo");
    age=19;
}

void Persona::Saludar()
{
    cout << "Hola nacos "<< "soy "<<name<<" Y tengo "<< age <<" Anios"<<endl;
}