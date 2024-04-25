#pragma once
#include "Persona.h"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Estudiante:public Persona{
protected:
    int mat;
    int semestre=1;
    string carrera;
public:
    Estudiante();
    Estudiante(char name[],int edad,int mat, int semestre, string carrera);
    void estudiar();
    void Saludar();
    
};

Estudiante::Estudiante()
{
    mat = 372799;
    semestre=4;
    carrera="Ing en software";
}

Estudiante::Estudiante(char name[],int edad,int mat, int semestre, string carrera)
{
    strcpy(this->name,name);
    this->age=edad;
    this->mat=mat;
    this->semestre=semestre;
    this->carrera=carrera;
}

void Estudiante::estudiar()
{
    cout<<"Ando estudiando no esten chingando"<<endl;
    cout<<"Estoy en "<<carrera<<" En "<<semestre<<" Semestre"<<" Con mi matricula "<<mat<<endl;
}

void Estudiante::Saludar()
{
    cout << "Hola estudiantes "<< "soy "<<name<<" Y tengo "<< age <<" Anios"<<endl;
}

